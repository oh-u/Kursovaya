#include "../Headers/SystemInfo.h"

SystemInfo::SystemInfo()
{

}

void SystemInfo::getHostname()
{
    system("hostname");
    cout << "ДЛЯ ВЫХОДА ВВЕДИТЕ ЛЮБОЕ ЗНАЧЕНИЕ!!!"<<endl;
}

void SystemInfo::getSystem()
{
    system ("uname -a");
    cout << "ДЛЯ ВЫХОДА ВВЕДИТЕ ЛЮБОЕ ЗНАЧЕНИЕ!!!"<<endl;
}

void SystemInfo::getManufacturer()
{
    system("sudo dmidecode -s system-manufacturer");
    cout << "ДЛЯ ВЫХОДА ВВЕДИТЕ ЛЮБОЕ ЗНАЧЕНИЕ!!!"<<endl;
}

void SystemInfo::getProductName()
{
    system("sudo dmidecode -s system-product-name");
    cout << "ДЛЯ ВЫХОДА ВВЕДИТЕ ЛЮБОЕ ЗНАЧЕНИЕ!!!"<<endl;
}

void SystemInfo::getFullInfo()
{
    system("sudo dmidecode | more");
    cout << "ДЛЯ ВЫХОДА ВВЕДИТЕ ЛЮБОЕ ЗНАЧЕНИЕ!!!"<<endl;
}

void SystemInfo::getUptime()
{
    system("w");
    cout << "ДЛЯ ВЫХОДА ВВЕДИТЕ ЛЮБОЕ ЗНАЧЕНИЕ!!!"<<endl;
}

void SystemInfo::getLoad()
{
   system("cat /proc/loadavg");
   system("sudo top");
   cout << "ДЛЯ ВЫХОДА ВВЕДИТЕ ЛЮБОЕ ЗНАЧЕНИЕ!!!"<<endl;
}

void SystemInfo::getInfo()
{
    SystemInfo temp_object;
    cout << "1. Имя компьютера и DNS" << endl;
    cout << "2. Системная информация" << endl;
    cout << "3. Производитель" << endl;
    cout << "4. Название изделия" << endl;
    cout << "5. Информация о системе целиком" << endl;
    cout << "6. Информация о пользователях" << endl;
    cout << "7. Загруженность системы" << endl;
    char a;
    cin >> a;
    switch(a){
    case '1':{
        temp_object.getHostname();
        break;
    }
    case '2':{
        temp_object.getSystem();
        break;
    }
    case '3':{
        temp_object.getManufacturer();
        break;
    }
    case '4':{
        temp_object.getProductName();
        break;
    }
    case '5':{
        temp_object.getFullInfo();
        break;
    }
    case '6':{
        temp_object.getUptime();
        break;
    }
    case '7':{
        temp_object.getLoad();
        break;
    }
    default:{
        break;
        return;
    }
    }
}
