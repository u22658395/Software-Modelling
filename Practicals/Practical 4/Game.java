import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.TimeUnit;

// Helper class to simulate animations (optional)
class AnimationHelper {
    public static void animate(String action, int duration) {
        System.out.print(action);
        try {
            for (int i = 0; i < duration; ++i) {
                System.out.print(".");
                TimeUnit.MILLISECONDS.sleep(500);
            }
        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
        }
        System.out.println(" Done!");
    }
}

public class Game {
    private Section mainFarmSection;
    private List<Truck> trucks;

    public Game() {
        mainFarmSection = new Section("Main Farm");

        Section northSection = new Section("North Farm");
        Section southSection = new Section("South Farm");

        mainFarmSection.addFarmUnit(northSection);
        mainFarmSection.addFarmUnit(southSection);

        trucks = new ArrayList<>();
    }

    public void setup() {
        Section northSection = (Section) mainFarmSection.getUnits().get(0);
        Section southSection = (Section) mainFarmSection.getUnits().get(1);

        // Adding crop fields and applying Decorators
        BasicCropField cropField1 = new BasicCropField("Wheat", 100, new DrySoil());
        BasicCropField cropField2 = new BasicCropField("Corn", 120, new FruitfulSoil());
        BasicCropField cropField3 = new BasicCropField("Barley", 150, new FloodedSoil());

        Fertilizer fertilizerField1 = new Fertilizer(cropField1);
        ExtraBarn extraBarnField2 = new ExtraBarn(cropField2, 50);

        northSection.addFarmUnit(fertilizerField1);
        northSection.addFarmUnit(extraBarnField2);
        northSection.addFarmUnit(cropField3);

        BasicCropField cropField4 = new BasicCropField("Soy", 90, new DrySoil());
        southSection.addFarmUnit(cropField4);

        // Adding trucks
        DeliveryTruck deliveryTruck = new DeliveryTruck();
        FertilizerTruck fertilizerTruck = new FertilizerTruck();

        trucks.add(deliveryTruck);
        trucks.add(fertilizerTruck);

        fertilizerField1.addTruck(fertilizerTruck);
        extraBarnField2.addTruck(deliveryTruck);
    }

    public void start() {
        System.out.println("Game Started!");
        // AnimationHelper.animate("Loading farm details", 5);

        System.out.println("////////////Breadth First Traversal (BFT)//////////////////");
        BFT bft = new BFT(mainFarmSection);
        bft.firstFarm();
        while (!bft.isDone()) {
            FarmUnit currentFarm = bft.currentFarm();
            // AnimationHelper.animate("Checking farm " + currentFarm.getCropType(), 3);
            System.out.println("Farm: " + currentFarm.getCropType() + " (Capacity: " + currentFarm.getTotalCapacity() + ")");
            bft.next();
        }

        System.out.println("////////////Depth First Traversal (DFT)//////////////////");
        DFT dft = new DFT(mainFarmSection);
        dft.firstFarm();
        while (!dft.isDone()) {
            FarmUnit currentFarm = dft.currentFarm();
            // AnimationHelper.animate("Inspecting farm " + currentFarm.getCropType(), 2);
            System.out.println("Farm: " + currentFarm.getCropType() + " (Capacity: " + currentFarm.getTotalCapacity() + ")");
            dft.next();
        }

        // Simulate logistics operations with trucks
        System.out.println("////////////Logistics Operations//////////////////");
        // AnimationHelper.animate("Trucks are delivering fertilizer", 6);
        for (Truck truck : trucks) {
            truck.startEngine();
            truck.update();
        }

        // Applying Fertilizer
        System.out.println("Applying Fertilizer to all fields...");
        for (FarmUnit section : mainFarmSection.getUnits()) {
            if (section instanceof Section) {
                Section subSection = (Section) section;
                for (FarmUnit field : subSection.getUnits()) {
                    if (field instanceof BasicCropField) {
                        BasicCropField cropField = (BasicCropField) field;
                        cropField.checkSoil();
                        // AnimationHelper.animate("Fertilizing " + cropField.getCropType(), 4);
                    }
                }
            }
        }

        // Harvesting
        System.out.println("Harvesting crops...");
        for (FarmUnit section : mainFarmSection.getUnits()) {
            if (section instanceof Section) {
                Section subSection = (Section) section;
                for (FarmUnit field : subSection.getUnits()) {
                    if (field instanceof BasicCropField) {
                        BasicCropField cropField = (BasicCropField) field;
                        cropField.harvest(50); // Example yield
                        // AnimationHelper.animate("Harvesting " + cropField.getCropType(), 5);
                    }
                }
            }
        }

        // Display storage capacity after harvest
        System.out.println("Final storage capacities after harvest:");
        for (Truck truck : trucks) {
            System.out.println(truck.getTruckName());
        }
    }
}
