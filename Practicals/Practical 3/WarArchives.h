#ifndef WARARCHIVES_H
#define WARARCHIVES_H

#include "TacticalMemento.h"
#include <map>
#include <string>

class WarArchives {
private:
    std::map<std::string, TacticalMemento*> archives;

public:
    WarArchives() : archives() { 
        
    }
    void addTacticalMemento(const std::string& label, TacticalMemento* memento) {
        archives[label] = memento;
    }

    TacticalMemento* getTacticalMemento(const std::string& label) {
        return archives.count(label) ? archives[label] : nullptr;
    }

    void removeTacticalMemento(const std::string& label) {
        if (archives.count(label)) {
            delete archives[label];
            archives.erase(label);
        }
    }

    std::map<std::string, TacticalMemento*> getArchives()
    {
        return archives;
    }

    ~WarArchives() {
        for (auto& entry : archives) {
            delete entry.second;
        }
    }
};

#endif 
