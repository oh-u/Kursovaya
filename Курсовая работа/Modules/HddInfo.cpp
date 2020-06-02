#include "../Headers/HddInfo.h"

HddInfo::HddInfo() {
}

void HddInfo::getHddInfo()
{
    system("sudo fdisk -l | grep '^Disk /dev'");
    system("sudo fdisk -l /dev/sda");
    cout << "ДЛЯ ВЫХОДА ВВЕДИТЕ ЛЮБОЕ ЗНАЧЕНИЕ!!!"<<endl;
}

void HddInfo::getHddBlockInfo()
{
    system("lsblk");
    cout << "ДЛЯ ВЫХОДА ВВЕДИТЕ ЛЮБОЕ ЗНАЧЕНИЕ!!!"<<endl;
}

void HddInfo::getFreespaceInfo()
{
    system("df -H");
    cout << "ДЛЯ ВЫХОДА ВВЕДИТЕ ЛЮБОЕ ЗНАЧЕНИЕ!!!"<<endl;
}

void HddInfo::getInfo()
{
    HddInfo temp_object;
    cout << "1. Информация о жёстком диске" << endl;
    cout << "2. Свободное пространство" << endl;
    cout << "3. Инфо о блочных устройствах" << endl;
    char a;
    cin >> a;
    switch(a){
    case '1':{
        temp_object.getHddInfo();
    }
    case '2':{
        temp_object.getFreespaceInfo();
        break;
    }
    case '3':{
        temp_object.getHddBlockInfo();
        break;
    }
    default:{
        return;
    }
    }
}
