
#include "sonda.cpp"
//#include<iostream>

using namespace std;

sonda sonda1;
int main(){

    sonda1.startSendThread();
    sonda1.startRecvThread();

    sonda1.Time();

    usleep(100);
        //sonda1.TaskConfiguration(1,"punctual",100,1);
      /* usleep(100);
        sonda1.Time();
        usleep(100);*/
        sonda1.DataCsv("prueba2","22","02","08");
        cout<<"datosGuardados"<<endl;
        while(true){

        }

    

    return 0;

}