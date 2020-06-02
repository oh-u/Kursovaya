#include <iostream>
#include <fstream>
#include <pwd.h>
#include <unistd.h>
#include <sys/sysinfo.h>
#include <vector>
#include <clocale>
#include <cstdlib>

#include "Headers/CpuInfo.h"
#include "Headers/SystemInfo.h"
#include "Headers/PciInfo.h"
#include "Headers/HardwareInfo.h"
#include "Headers/HddInfo.h"
#include "Headers/MemoryInfo.h"

using namespace std;

int main()
{
    setlocale (LC_ALL, "RUS");

    while(1)
    {
        cout << "Выберите пункт меню:" << endl << endl;
        cout << "1. Аппаратные средства" << endl;
        cout << "2. Процессор" << endl;
        cout << "3. Системная информация" << endl;
        cout << "4. Жёсткий диск" << endl;
        cout << "5. Устройства и видеокарта" << endl;
        cout << "6. ОЗУ" << endl;
        cout << "Q. Завершить работу программы"<<endl;
        char a;
        cin >> a;
        switch(a){
            case '1':{
                HardwareInfo hardwareInfo;
                system("clear");
                hardwareInfo.getInfo();
                cin.ignore();
                cin.get();
                system("clear");
                break;
            }
            case '2':{
                CpuInfo cpuInfo;
                system("clear");
                cpuInfo.getInfo();
                cin.ignore();
                cin.get();
                system("clear");
                break;
            }
            case '3':{
                SystemInfo systemInfo;
                system("clear");
                systemInfo.getInfo();
                cin.ignore();
                cin.get();
                system("clear");
                break;
            }
            case '4':{
                HddInfo hddInfo;
                system("clear");
                hddInfo.getInfo();
                cin.ignore();
                cin.get();
                system("clear");
                break;
            }
            case '5':{
                PciInfo pciInfo;
                system("clear");
                pciInfo.getInfo();
                cin.ignore();
                cin.get();
                system("clear");
                break;
            }
            case '6':{
                MemoryInfo memoryInfo;
                system("clear");
                memoryInfo.getInfo();
                cin.ignore();
                cin.get();
                system("clear");
                break;
            }
            case 'Q':{
              return 1;
                break;
            }
        }
    }
    return 0;
}
