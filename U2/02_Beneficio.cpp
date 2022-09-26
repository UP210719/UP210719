/*
Date: 26/09/2022
Author: Eber Horacio JImenez Mendoza
Email: up210719@alumnos.upa.edu.mx
Description: Programa que otorga un bono de acuerdo a su calificacion final
*/

#include <iostream>
using namespace std;

int main()
{
    double calificacion,bono = 2400;
    cout <<"Ingresa tu calificacion: \n 1. 0.0 \n 2. 0.4 \n 3. 0.6 \n Calificacion: ";
    cin >> calificacion ;

    if(calificacion == 0){
        cout <<"Tu bono anual es de $0 " << endl;
    }
    else if(calificacion == 0.4){
        cout<<"Tu bono anual es de : $" <<bono*0.4;
        cout<<"Tu porcentaje del pago es %40 ";
    } 
    else if(calificacion >= 0.6){
        cout<<"Tu bono anual es de : $" <<bono*calificacion<<"pesos";
    }
    else{
        cout<<"No toca nada amigo: ";
    }

    cout<<"\n";
    cout<<"\n";


    return 0;
}