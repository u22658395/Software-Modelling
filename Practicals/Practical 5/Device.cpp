#include "Device.h"

Device::Device(string t){
    type = t;
}

Device::~Device(){
}


string Device::getDeviceType(){
    return type;
}
