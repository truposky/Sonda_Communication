
#include "sonda.cpp"
//#include<iostream>

using namespace std;

sonda sonda1;
int main(){

    sonda1.startSendThread();
    sonda1.startRecvThread();

    sonda1.Time();

    usleep(100);
    while(1){
        sonda1.TaskConfiguration(1,"punctual",100,1);
        usleep(100);
        sonda1.Time();
        usleep(100);
        sonda1.DataCsv("Prueba",2022,1,1);
        sleep(10);
    }

    return 0;

}