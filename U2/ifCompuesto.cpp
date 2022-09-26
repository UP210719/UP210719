/*
Date: 22/09/2022
Author: Eber Horacio JImenez Mendoza
Email: up210719@alumnos.upa.edu.mx
Description: Muestra el uso del if else
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
   else{
    cout << "El número es diferente del dato" << endl;
   }

    return 0;

    
}

