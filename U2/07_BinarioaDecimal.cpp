/* 
Unidad 2. Uso de ciclo Do While
Author: Eber Horacio Jimenez Mendoza
Date: 07/10/2022
Description: Program that performs the conversion from binary to decimal, only for numbers
integers greater than 0.
Last modification: 07/10/2022
*/
#include <iostream>
using namespace std;

int main(){
    int binary,decimal=0,contador=0;
    cout << "Input a binary number: \n";
    do
    {
        cin >> binary;
        if (binary < 0 || binary > 1)
        {
            cout << "\nExiting program\n";
            break;
        }
        decimal += binary*(pow(2,contador));
        contador++;
    } while (binary == 1 || binary == 0);
    cout << "\nThe value in decimal: "<< decimal << "\n\n";
    return 0;
}

