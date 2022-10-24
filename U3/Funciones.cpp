/* 
Date: 22/09/2022
Author: Eber Horacio Jimenez Mendoza
Email: up210719@alumnos.upa.edu.mx
Description: Shows the creation and handling of functions.
*/
#include<iostream>

using namespace std;

int getmaxval(int num1, int num2);

int main(){
    int ValorMaximo;
    int primervalor;
    int segundovalor;

    cout << "Dame un número: ";
    cin >> primervalor;
    cout << "Dame otro número: ";
    cin >> segundovalor;

    cout << "\n ========================================= \n";

    ValorMaximo = getmaxval(primervalor, segundovalor);

    cout << "El valor máximo es: " << ValorMaximo << endl;

    return 0;
}

int getmaxval(int num1, int num2){
    return (num1> num2)?num1:num2;
}