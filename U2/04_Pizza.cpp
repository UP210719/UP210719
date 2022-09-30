/*
Date: 28/09/2022
Author: Eber Horacio Jimenez Mendoza
Email: up210719@alumnos.upa.edu.mx
Description: Write a program that asks the user if he wants a vegetarian pizza or not, and based on his answer shows him a menu with the ingredients available for him to choose from. You can only choose one ingredient besides the mozzarella and tomato that are in all the pizzas. At the end it should be shown on the screen if the chosen pizza is vegetarian or not and all the
ingredients it contains.
 Last modification:
 Nivel
 Nivel puntuacion
 choose two ingredients
*/
#include <iostream>

using namespace std;

int main()
{
    char pizza;
    int ingrediente;
    cout << "¿Quieres una pizza vegetariana? Todas nuestras pizzas llevan mozzarella y tomate\n Y/N \n";
    cin >> pizza;

    if (pizza == 'Y' || pizza == 'y')
    {
        cout << " Estos son tus ingredientes para tu pizza vegetariana \n¿Cual desdea agregar? : \n 1.Pimiento \n 2.Tofu \n Escoge un ingrediente extra para agregar a tu pizza: ";
        cin >> ingrediente;

         cout << "Tu pizza es vegetariana, tus ingredientes son:" << endl;

        if (ingrediente == 1)
        {
            cout << "-Tu ingrediente extra para tu pizza sera: Pimiento " << endl;
        }
        else if (ingrediente == 2)
        {
            cout << "-Tu ingrediente extra para tu pizza sera: Tofu " << endl;
        }

       
    }
    else if (pizza == 'N' || pizza == 'n')
    {
        cout << "Estos son tus otros ingredientes para tu pizza no vegetariana: \n 1.Peperoni \n 2.Jamon \n 3.Salmon \n Escoge un ingrediente extra para agregar a tu pizza: ";
        cin >> ingrediente;

        if (ingrediente == 1)
        {
            cout << "-Tu ingrediente extra para tu pizza sera: Peperoni";
        }
        else if (ingrediente == 2)
        {
            cout << "-Tu ingrediente extra para tu pizza sera: Jamon";
        }
        else if (ingrediente == 3)
        {
            cout << "-Tu ingrediente extra para tu pizza sera: Salmon";
        }
    }
    else
    {
        cout << "Solo se permite Y (es si) o N (es no)";
    }

   
    return 0;
}