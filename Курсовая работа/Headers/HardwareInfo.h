#ifndef HARDWAREINFO_H
#define HARDWAREINFO_H

#include "ComputerPart.h"

#include <iostream>
#include <fstream>
#include <pwd.h>
#include <unistd.h>
#include <sys/sysinfo.h>
#include <vector>
#include <cstdlib>

class HardwareInfo : protected ComputerPart
{
public:
    HardwareInfo();
    void getUsb();
    void getNet();
    void getAudio();
    void getSystemInfo();
    void getBios();
    void getInfo();
};

#endif // HARDWAREINFO_H