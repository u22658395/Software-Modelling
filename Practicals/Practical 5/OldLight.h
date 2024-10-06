#ifndef OLDLIGHT_H
#define OLDLIGHT_H
class OldLight
{
protected:
    bool isOn;
public:
    OldLight(/* args */);
    ~OldLight();
    void turnOn();
    void turnOff();
    bool getStatus();
};

#endif