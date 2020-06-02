#ifndef PCIINFO_H
#define PCIINFO_H

#include "ComputerPart.h"

#include <iostream>
#include <fstream>
#include <pwd.h>
#include <unistd.h>
#include <sys/sysinfo.h>
#include <vector>
#include <cstdlib>

using namespace std;

class PciInfo : protected ComputerPart
{
public:
    PciInfo();
    void getPciInfo();
    void getGpuInfo();
    void getNvidiaInfo();
    void getRadeonInfo();
    void getInfo();
};

#endif // PCIINFO_H