#include "Device.h"

Device::Device(){
    type="";
    on = false;
}

Device::Device(string t, bool state){
    type = t;
}

string Device::getDeviceType(){
    return type;
}
