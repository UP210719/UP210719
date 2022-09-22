/*
Date: 22/09/2022
Author: Eber Horacio JImenez Mendoza
Email: up210719@alumnos.upa.edu.mx
Description: Muestra del uso if simple 
*/

#include <iostream>

using namespace std;


int main()
{ 
    int numero;
    int dato = 1;

   cout << "Ingresa un numero entero: ";
   cin >> numero;
   if (numero == dato){
   cout << "El número es igual a dato" << endl;
   }
    if (numero > dato){
    cout <<"El numero es mayor al dato" << endl;
    }
    if (numero < dato){
    cout <<"El numero menor a dato" << endl;
    }
    if (numero != dato){
    cout <<"El numero es diferente al dato" <<endl;
    }
    if (numero <= dato){
    cout <<"El numero es menor o igual al dato" <<endl;
     }
     if (numero >= dato){
    cout <<"El nuermo es mayor o igual al dato" <<endl;
     }


   
    return 0;
   }