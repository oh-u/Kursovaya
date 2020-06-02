#ifndef SYSTEMINF_H
#define SYSTEMINF_H

#include "ComputerPart.h"

#include <iostream>
#include <fstream>
#include <pwd.h>
#include <unistd.h>
#include <sys/sysinfo.h>
#include <vector>
#include <cstdlib>

using namespace std;

class SystemInfo : protected ComputerPart
{
public:
    SystemInfo();

    void getHostname();
    void getSystem();
    void getSerialNumber();
    void getManufacturer();
    void getProductName();
    void getFullInfo();
    void getUptime();
    void getLoad();
    void getInfo();
};

#endif // SYSTEMINF_H