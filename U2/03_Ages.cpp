/*
Date: 28/09/2022
Author: Eber Horacio Jimenez Mendoza
Email: up210719@alumnos.upa.edu.mx
Description: Write a program for a company that has game rooms for all ages and wants to automatically calculate the price to charge its customers to enter. The
The program must ask the user for the customer's age and display the price of the ticket. Yes the client is under 4 years old can enter for free, if they are between 4 and 18 years old they must pay $5 and if they are over 18 years old, $10.
 Last modification:
 Nivel
 Nivel puntuacion
 entry cost:
 less than 4 years old = free
 if ur kid have 4 years old or 18 years old have to paid $5 and if hes older than 18 years old have to paid $10 
*/
#include <iostream>
using namespace std;

int main()
{
    int edad;
    cout<<"¿Cuantos años tenes mi niño? = ";
    cin >> edad;

    if(edad>0 && edad<4){
        cout<<"Tu entrada es gratis! \n";
    }
    else if (edad>=4 && edad<=18){
        cout<<"Tienes que pagar $5, por favor \n";
    }
    else if(edad>18){
        cout<<"Tienes que pagar $10 pesos, por favor \n";
    }else{
        cout<<"Dato incorrecto";
    }
    return 0;

}

