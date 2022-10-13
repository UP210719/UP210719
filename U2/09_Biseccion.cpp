/* 
Unidad 2. Uso de ciclo Do While
Author: Eber Horacio Jimenez Mendoza
Date: 13/10/2022
Description: 
Last modification: 13/10/2022
*/
#include <iostream>
#include <cmath>
using namespace std;

float plantearecacion(float valor){
    return pow(valor, 2) + - 1 * (pow(valor, 1)) + 12;
}

int main(){
    float a;
    float b;
    float interador = 1;

    cout<<"Ingresa el valor de a: ";
    cin>>a;

    cout<<"Ingresa el valor de b: ";
    cin>>b;

    while (a){
        float ya= plantearecacion (a);
        float yb= plantearecacion (b);
        float c = (a+b)/2;
        float yc = plantearecacion (c);

        float ya_yc = ya * yc;

        cout<<"|i|     a     |     b     |     ya     |     yb     |     c     |     yc     |\n";
         
        cout<< interador << a << b << ya << yb << c << yc ;
        interador++;
                              
    }
}
