#include "../Headers/PciInfo.h"

PciInfo::PciInfo()
{
}

void PciInfo::getPciInfo()
{
    system("lspci");
}

void PciInfo::getGpuInfo()
{
    system("lspci | grep -i vga");
}

void PciInfo::getNvidiaInfo()
{
    system("nvidia-smi");
    system(" nvidia-settings");
}

void PciInfo::getRadeonInfo()
{
    system("fglrxinfo");
}

void PciInfo::getInfo()
{
    PciInfo temp_object;
    cout << "1. Информация об устройствах" << endl;
    cout << "2. Информация о видеокарте" << endl;
    cout << "3. NVidia GPU" << endl;
    cout << "4. Radeon GPU" << endl;
    char a;
    cin >> a;
    switch(a){
    case '1':{
        temp_object.getPciInfo();
        cout << "ДЛЯ ВЫХОДА ВВЕДИТЕ ЛЮБОЕ ЗНАЧЕНИЕ!!!"<<endl;
        break;
    }
    case '2':{
        temp_object.getGpuInfo();
        cout << "ДЛЯ ВЫХОДА ВВЕДИТЕ ЛЮБОЕ ЗНАЧЕНИЕ!!!"<<endl;
        break;
    }
    case '3':{
        temp_object.getNvidiaInfo();
        cout << "ДЛЯ ВЫХОДА ВВЕДИТЕ ЛЮБОЕ ЗНАЧЕНИЕ!!!"<<endl;
        break;
    }
    case '4':{
        temp_object.getRadeonInfo();
        cout << "ДЛЯ ВЫХОДА ВВЕДИТЕ ЛЮБОЕ ЗНАЧЕНИЕ!!!"<<endl;
        break;
    }
    default:{
        return;
    }
    }
}
