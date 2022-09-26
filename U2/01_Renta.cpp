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
    cout<<"Cuanto pagas de renta pa: ";
    cin>>renta;

    if(renta <= 0){
        cout<<"Valor invalido carnal";
    }else{
        if(renta < 10000){
            impuestos = renta * 0.05;
            cout<<"Se aplica un 5 por ciento de impuestos y su renta total es de " <<impuestos + renta;
        }else{
            if(renta >= 10000 && renta < 20000){
                impuestos = renta * 0.15;
                cout<<"Se aplica un 15 por ciento de impuestos y su renta total es de " <<impuestos + renta;
            }else{
                if(renta >= 20000 && renta < 35000){
                    impuestos = renta * 0.2;
                    cout<<"Se aplica un 20 por ciento de impuestos y su renta total es de " <<impuestos + renta;
                }else{
                    if(renta >=35000 && renta < 60000){
                        impuestos = renta * 0.3;
                        cout<<"Se aplica un 30 por ciento de impuestos y su renta total es de " <<impuestos + renta;
                    }else{
                        if(renta >= 60000){
                            impuestos = renta * 0.6;
                            cout<<"Se le aplica un 45 por ciento de impuestos y su renta total es de " <<impuestos + renta;
                    }
                }
            }
        }
    }
}


    return 0;
}
