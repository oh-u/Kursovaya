#ifndef CPUINFO_H
#define CPUINFO_H

#include "ComputerPart.h"

#include <iostream>
#include <fstream>
#include <pwd.h>
#include <unistd.h>
#include <sys/sysinfo.h>
#include <vector>
#include <cstdlib>

using namespace std;

class CpuInfo : protected ComputerPart
{
public:
    CpuInfo();
    void getInfo();
};

#endif // CPUINFO_H