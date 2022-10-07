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
    float temperatura;
    float mintemperature=9999;
    float maxtemperature=-9999;
    float tempAverage = 0;
    do{
        cout <<"Give me the temperature: ";
        cin >> temperatura;
        tempAverage += temperatura;
        contador++;
<<<<<<< HEAD
    }while (contador < 6);

    cout<<"The average of temperature today is: " <<tempAcum/6 << endl;
    cout<<"The highest temperature is: "; << maxtemperature << endl;
    cout<<"The lowest temperature is: "; << mintemperature << endl;

    return 0;
=======
        if(temperatura <= mintemperature)
        mintemperature = temperatura;
        if(temperatura >= maxtemperature)
        maxtemperature = temperatura;
>>>>>>> 43059fd913f0345e85a1648625aab74a55de64d4


    }while(contador < 6);
    

    cout <<"The average of temperature today is: " << tempAverage/6 <<endl;
    cout << "The lowest temperature today is: " << mintemperature <<endl;
    cout << "The highest temperature today is: " << maxtemperature <<endl;
    
    return 0;
}
