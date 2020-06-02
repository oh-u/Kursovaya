#include "../Headers/HardwareInfo.h"

using namespace std;

HardwareInfo::HardwareInfo()
{
}

void HardwareInfo::getUsb()
{
    system("lsusb");
    std::cout << std::endl;
    cout << "ДЛЯ ВЫХОДА ВВЕДИ ЛЮБОЕ ЗНАЧЕНИЕ!!!"<<endl;
    system("lsusb -vt");
}

void HardwareInfo::getNet()
{
    system("clear");
    cout << "ДЛЯ ВЫХОДА ВВЕДИТЕ ЛЮБОЕ ЗНАЧЕНИЕ!!!"<<endl;
    system("iwconfig");
    getchar();
    //system("clear");
    //system("watch -n 1 cat /proc/net/wireless");
}

void HardwareInfo::getAudio()
{
    system("arecord -l");
    cout << "ДЛЯ ВЫХОДА ВВЕДИТЕ ЛЮБОЕ ЗНАЧЕНИЕ!!!"<<endl;
}

void HardwareInfo::getSystemInfo()
{
    system("sudo dmidecode -t system");
    cout << "ДЛЯ ВЫХОДА ВВЕДИТЕ ЛЮБОЕ ЗНАЧЕНИЕ!!!"<<endl;
}

void HardwareInfo::getBios()
{
    system("sudo dmidecode -t bios");
    cout << "ДЛЯ ВЫХОДА ВВЕДИТЕ ЛЮБОЕ ЗНАЧЕНИЕ!!!"<<endl;
}

void HardwareInfo::getInfo()
{
    HardwareInfo temp_object;
    cout << "1. Аудио" << endl;
    cout << "2. BIOS" << endl;
    cout << "3. LAN" << endl;
    cout << "4. Системная информация" << endl;
    cout << "5. USB" << endl;
    char a;
    cin >> a;
    switch(a){
    case '1':{
        temp_object.getAudio();
        break;
    }
    case '2':{
        temp_object.getBios();
        break;
    }
    case '3':{
        temp_object.getNet();
        break;
    }
    case '4':{
        temp_object.getSystemInfo();
        break;
    }
    case '5':{
        temp_object.getUsb();
        break;
    }
    default:{
        return;
    }
    }
}
