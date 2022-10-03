/*
Date: 22/09/2022
Author: Eber Horacio JImenez Mendoza
Email: up210719@alumnos.upa.edu.mx
Description: Los tramos impositivos para la declaracion de la renta en un determinado país 
*/

#include <iostream>
using namespace std;

int main(){
    int renta;
    float impuestos;
    cout<<"How much do you pay for rent : ";
    cin>>renta;

    if(renta <= 0){
        cout<<"Invalid value bro";
    }else{
        if(renta < 10000){
            impuestos = renta * 0.05;
            cout<<"A 5 percent tax applies and your total income is " <<impuestos + renta;
        }else{
            if(renta >= 10000 && renta < 20000){
                impuestos = renta * 0.15;
                cout<<"15 percent tax applies and your total income is " <<impuestos + renta;
            }else{
                if(renta >= 20000 && renta < 35000){
                    impuestos = renta * 0.2;
                    cout<<"20 percent tax applies and your total income is " <<impuestos + renta;
                }else{
                    if(renta >=35000 && renta < 60000){
                        impuestos = renta * 0.3;
                        cout<<"30 percent tax applies and your total income is " <<impuestos + renta;
                    }else{
                        if(renta >= 60000){
                            impuestos = renta * 0.6;
                            cout<<"You are taxed at 45 percent and your total income is " <<impuestos + renta;
                    }
                }
            }
        }
    }
}


    return 0;
}
