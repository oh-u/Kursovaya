#include "../Headers/MemoryInfo.h"

MemoryInfo::MemoryInfo()
{

}

void MemoryInfo::freeMemory()
{
    system("less /proc/meminfo");
}

void MemoryInfo::freeMemorym()
{
    system("free -m");
}

void MemoryInfo::freeMemoryg()
{
    system("free -g");
}

void MemoryInfo::getInfo()
{
    MemoryInfo temp_object;
    cout << "1. Свободно памяти (МБ)" << endl;
    cout << "2. Свободно памяти (Гб)" << endl;
    char a;
    cin >> a;
    switch(a){
    case '1':{
        temp_object.freeMemorym();
        cout << "ДЛЯ ВЫХОДА ВВЕДИТЕ ЛЮБОЕ ЗНАЧЕНИЕ!!!"<<endl;
        break;
    }
    case '2':{
        temp_object.freeMemoryg();
        cout << "ДЛЯ ВЫХОДА ВВЕДИТЕ ЛЮБОЕ ЗНАЧЕНИЕ!!!"<<endl;
        break;
    }
    default:{
        return;
    }
    }
}
