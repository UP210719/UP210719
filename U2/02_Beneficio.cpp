/*
Date: 26/09/2022
Author: Eber Horacio JImenez Mendoza
Email: up210719@alumnos.upa.edu.mx
Description: Programa que otorga un bono de acuerdo a su calificacion final
 Last modification:
 Nivel
 Nivel puntuacion
 Bono de 2400 base a su calificacion anual
 Inaceptable 0.0
 Aceptable 0.4
 Meritorio 0.6 o más
 Escribir un programa que lea la puntuacion
*/

#include <iostream>
using namespace std;

int main()
{
    double calificacion,bono = 2400;
    cout <<"Enter your qualification: \n 1. 0.0 \n 2. 0.4 \n 3. 0.6 \n Qualification: ";
    cin >> calificacion ;

    if(calificacion == 0){
        cout <<"Your annual bonus is $0 " << endl;
    }
    else if(calificacion == 0.4){
        cout<<"Your annual bonus is : $" <<bono*0.4;
    } 
    else if(calificacion >= 0.6){
        cout<<"Your annual bonus is : $" <<bono*calificacion<<"pesos";
    }
    else{
        cout<<"Don't touch anything friend: ";
    }

    cout<<"\n";
    cout<<"\n";


    return 0;
}