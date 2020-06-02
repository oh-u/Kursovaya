#include "../Headers/CpuInfo.h"

CpuInfo::CpuInfo()
{
}

void CpuInfo::getInfo()
{
    system("cat /proc/cpuinfo");
    cout << "ДЛЯ ВЫХОДА ВВЕДИТЕ ЛЮБОЕ ЗНАЧЕНИЕ!!!"<<endl;

}
