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
    cout << "Do you want a vegetarian pizza? All our pizzas have mozzarella and tomato\n Y/N \n";
    cin >> pizza;

    if (pizza == 'Y' || pizza == 'y')
    {
        cout << " These are your ingredients for your vegetarian pizza \nWhich one do you want to add? : \n 1.Pepper \n 2.Tofu \n Choose an extra ingredient to add to your pizza: ";
        cin >> ingrediente;

         cout << "-Your pizza is vegetarian, your ingredients are:" << endl;

        if (ingrediente == 1)
        {
            cout << "-Your extra ingredient for your pizza will be: Pepper " << endl;
        }
        else if (ingrediente == 2)
        {
            cout << "-Your extra ingredient for your pizza will be: Tofu " << endl;
        }

       
    }
    else if (pizza == 'N' || pizza == 'n')
    {
        cout << "These are your other ingredients for your non-veg pizza: \n 1.Peperoni \n 2.Jam \n 3.Salmon \n Choose an extra ingredient to add to your pizza: ";
        cin >> ingrediente;

        if (ingrediente == 1)
        {
            cout << "-Your extra ingredient for your pizza will be: Pepperoni";
        }
        else if (ingrediente == 2)
        {
            cout << "-Your extra ingredient for your pizza will be: Jam";
        }
        else if (ingrediente == 3)
        {
            cout << "-Your extra ingredient for your pizza will be: Salmon";
        }
    }
    else
    {
        cout << "Solo se permite Y (es si) o N (es no)";
    }

   
    return 0;
}