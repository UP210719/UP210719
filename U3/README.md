# WELCOME TO MY UNIT 3

# **1-CHANGE**
*In this program the user types an amount of money, and the program will designate with how many bills and coins should be given exactly with bills of 500,200, 100, 50 and 20 and with coins of 10, 5, 2, 1.*

![Image text](https://github.com/UP210719/UP210719_CPP/blob/main/imagenes/Captura%20de%20pantalla%20de%202022-11-14%2009-19-31.png)

#include <iostream>

using namespace std;

void obtenerCambio(int, string);
void imprimirCambio(string);

//Global variables
int quinientos = 0, docientos = 0, cien = 0;
int cincuenta = 0, veinte = 0;
int diez = 0, cinco = 0, dos = 0, uno = 0;


int main()
{
    int dinero;
    string tipo;

    //The user enters an amount of money
    cout << "Enter an amount of money: ";
    cin >> dinero;
    
    //The user chooses if with coins and bills or only coins
    cout << "Enter TOTAL or Coins: ";
    cin >> tipo;

    //Call the functions
    obtenerCambio(dinero, tipo);
    imprimirCambio(tipo);
    
    return 0;
}


//This function gets the change
void obtenerCambio(int dinero, string tipo)
{
    while (dinero > 0)
    {
        if(tipo == "TOTAL"){
            (dinero >= 500) ? quinientos++, dinero -= 500 
        : (dinero >= 200) ? docientos++, dinero -= 200 
        : (dinero >= 100) ? cien++, dinero -= 100 
        : (dinero >= 50) ? cincuenta++, dinero -= 50 
        : (dinero >= 20) ? veinte++, dinero -= 20 
        : dinero;
        }
        else if(tipo == "Coins"){
            (dinero >= 10) ? diez++, dinero -= 10 
        : (dinero >= 5) ? cinco++, dinero -= 5 
        : (dinero >= 2) ? dos++, dinero -= 2 
        : (dinero >= 1) ? uno++, dinero -= 1 
        : dinero;
        } 
    }
}


//This function prints the change
void imprimirCambio(string tipo)
{
    cout << "El cambio es de: " << endl;
    if(tipo == "TOTAL"){
        cout << "Bills $500: " << quinientos << endl;
        cout << "Bills $200: " << docientos << endl;
        cout << "Bills $100: " << cien << endl;
        cout << "Bills $50: " << cincuenta << endl;
        cout << "Bills $20: " << veinte << endl;
        cout << "Coins 10: " << diez << endl;
        cout << "Coins 5: " << cinco << endl;
        cout << "Coins 2: " << dos << endl;
        cout << "Coins 1: " << uno << endl;
    }else if(tipo == "Coins"){
        cout << "Coins 10: " << diez << endl;
        cout << "Coins 5: " << cinco << endl;
        cout << "Coins 2: " << dos << endl;
        cout << "Coins 1: " << uno << endl;
    }   
}

# **2-FUNCTIONS**
*Shows the creation and handling of functions.*

![Image text](https://github.com/UP210719/UP210719_CPP/blob/main/imagenes/Captura%20de%20pantalla%20de%202022-11-14%2009-20-23.png)

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

# **3-CAT´S GAME**
*In this program it was possible to carry out the game of the cat where two players were needed, who even asked for the name of each one, a table was listed with the different plays to be placing their movements and since someone joined their three in a row is the winner and the same program indicates it to you.*

![Image text]()
