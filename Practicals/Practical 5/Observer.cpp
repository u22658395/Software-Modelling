#include "Observer.h"

Observer:: ~Observer()
{
    if(device!=NULL)
    {
        delete device;
        device= NULL;
    }
}