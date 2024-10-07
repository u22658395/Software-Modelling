#include "Device.h"

Device::Device(){
    type="";
}

Device::~Device(){
}

Device::Device(string t){
    type = t;
}

string Device::getDeviceType(){
    return type;
}
