#ifndef MEMORYINFO_H
#define MEMORYINFO_H

#include "ComputerPart.h"

#include <iostream>
#include <fstream>
#include <pwd.h>
#include <unistd.h>
#include <sys/sysinfo.h>
#include <vector>
#include <cstdlib>

using namespace std;

class MemoryInfo : protected ComputerPart
{
public:
    MemoryInfo();
    void freeMemory();
    void freeMemorym();
    void freeMemoryg();
    void getInfo();
};

#endif // MEMORYINFO_H