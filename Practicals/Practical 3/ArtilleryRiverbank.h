#ifndef ARTILLERYRIVERBANK_H
#define ARTILLERYRIVERBANK_H

#include "Artillery.h"

class ArtilleryRiverbank : public Artillery {
public:
    // ArtilleryRiverbank() {
    //     // Custom attributes for Riverbank Artillery
    //     attackPower = 90;
    //     defensePower = 50;
    // }

//     void move() {
//         std::cout << "ArtilleryRiverbank rolling along the river's edge with caution.\n";
//     }

//     void attack() {
//     std::cout << " Artillery attacks" << std::endl;
//       std::cout << R"(
//     ░░░░░░███████ ]▄▄▄▄▄▄▄▄
//  ▂▄▅█████████▅▄▃▂        
// [███████████████████]. 
// ◥⊙▲⊙▲⊙▲⊙▲⊙▲⊙▲⊙◤.. 
//     )" << std::endl;
// }
    ~ArtilleryRiverbank() noexcept override = default;

};

#endif 
