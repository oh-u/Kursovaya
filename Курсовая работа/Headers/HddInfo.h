#ifndef HDDINFO_H
#define HDINFOD_H

#include "ComputerPart.h"

#include <iostream>
#include <fstream>
#include <pwd.h>
#include <unistd.h>
#include <sys/sysinfo.h>
#include <vector>
#include <cstdlib>

using namespace std;

class HddInfo : protected ComputerPart
{
public:
    HddInfo();
    void getHddInfo();
    void getHddBlockInfo();
    void getFreespaceInfo();
    void getInfo();
};

#endif // HDDINFO_H