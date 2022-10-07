/* Unidad 2. Uso de ciclo Do While
   Autor: Eber Horacio Jimenez Mendoza
   Fecha: 03/10/2022
   Descripción: Muestra el uso de la sentencia Do While
*/
include <iostream>
using namespace std;

int main()
{
    int contador=0;
    float temperatura;
    float temperaturaBaja=9999;
    float temperaturaAlta=-9999;
    float tempAverage = 0;
    do{
        cout <<"Give me the temperature: ";
        cin >> temperatura;
        tempAverage += temperatura;
        contador++;
        if(temperatura <= temperaturaBaja)
        temperaturaBaja = temperatura;
        if(temperatura >= temperaturaAlta)
        temperaturaAlta = temperatura;


    }while(contador < 6);
    

    cout <<"The average of temperature today is: " << tempAverage/6 <<endl;
    cout << "The lowest temperature today is: " << temperaturaBaja <<endl;
    cout << "The highest temperature today is: " << temperaturaAlta <<endl; 
    return 0;
}

