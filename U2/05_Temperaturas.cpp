/* Unidad 2. Uso de ciclo Do While
   Autor: Eber Horacio Jimenez Mendoza
   Fecha: 03/10/2022
   Descripción: Muestra el uso de la sentencia Do While
*/
#include <iostream>

using namespace std;

int main()
{
    int contador=0;
    float temperature;
    float tempAcum = 0;
    float mintemperature = 9999;
    float maxtemperature = -9999;
    do{
        cout<<"Give me the temperature: ";
        cin >> temperature;
        if (temperature >= maxtemperature)
        {
            maxtemperature = temperature
        }
        if (temperature <= mintemperature)
        {
            mintemperature = temperature
        }
        tempAcum += temperature;
        contador++;
    }while (contador < 6);

    cout<<"The average of temperature today is: " <<tempAcum/6 << endl;
    cout<<"The highest temperature is: "; <<maxtemperature << endl;
    cout<<"The lowest temperature is: "; <<mintemperature << endl;

    return 0;



}