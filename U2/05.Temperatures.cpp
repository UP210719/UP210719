/* Unidad 2. Uso de ciclo Do While
   Autor: Eber Horacio Jimenez Mendoza
   Fecha: 03/10/2022
   Descripción: Muestra el uso de la sentencia Do While
*/
<<<<<<< HEAD:U2/05.Temperatures.cpp
#include <iostream>
=======
include <iostream>
>>>>>>> 9f6a02c4e9196a35e3c82475693c776c29b64c80:U2/05_Temperaturas.cpp
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
<<<<<<< HEAD:U2/05.Temperatures.cpp
        if(temperatura <= mintemperature)
        mintemperature = temperatura;
        if(temperatura >= maxtemperature)
        maxtemperature = temperatura;
=======
        if(temperatura <= temperaturaBaja)
        temperaturaBaja = temperatura;
        if(temperatura >= temperaturaAlta)
        temperaturaAlta = temperatura;
>>>>>>> 9f6a02c4e9196a35e3c82475693c776c29b64c80:U2/05_Temperaturas.cpp


    }while(contador < 6);
    

    cout <<"The average of temperature today is: " << tempAverage/6 <<endl;
<<<<<<< HEAD:U2/05.Temperatures.cpp
    cout << "The lowest temperature today is: " << mintemperature <<endl;
    cout << "The highest temperature today is: " << maxtemperature <<endl; 
    return 0;
}
=======
    cout << "The lowest temperature today is: " << temperaturaBaja <<endl;
    cout << "The highest temperature today is: " << temperaturaAlta <<endl; 
    return 0;
}

>>>>>>> 9f6a02c4e9196a35e3c82475693c776c29b64c80:U2/05_Temperaturas.cpp
