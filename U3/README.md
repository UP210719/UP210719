# WELCOME TO MY UNIT 3

[Go fast to the cat game](#the-most-important-cats-game--)

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

# **THE MOST IMPORTANT: CAT´S GAME**  🐱
## Index
[*1-How to run*](#1-how-to-run--)  

[*2-Things of consider*](#2-things-of-consider--)

[*3-Flowchart*](#3-flowchart-)

[*4-Code and explanation*](#4-code-and-explanation--)

[*5-Ending*](#5-ending--)



# **1-How to run**  🏃🏽
*In this game you can select two players, player A and player B, where either "x" or "0" will be selected, it depends on the player's choice to previously play on the printed table by selecting the space in which they want to place their respective movement.*

# **2-Things of consider**  🤔
*>One player: The player will go first and then the intelligence assuming that the player will be "0" and the CPU "X".*

*>Vs someone: The machine recognizes that player one gets "0" and player two gets "X".*

## Possible mistake  😨
*This program may have some flaws since there will always be some vulnerability.
1-This can be returned in an infinite loop if a number with decimal is entered or also if a letter is entered.
2-If it moves in the slightest it can move from place or enter unwanted values.*

# **3-Flowchart** 🤑
![Image text](https://github.com/UP210719/UP210719_CPP/blob/main/imagenes/00718a57-8398-47e1-90a7-b8a23d2e914c.jpeg)

# **4-Code and explanation**  🤷

![Image text](https://github.com/UP210719/UP210719_CPP/blob/main/imagenes/Captura%20de%20pantalla%20de%202022-11-17%2010-24-22.png)

*In this code too many lines of text were used since it had too many flaws which had to be covered.
In it, the table of the cat was printed giving numbers to each box from 1 to 9 so that each player selects the box that is most convenient for him.
The program gave you to choose player 1 with the "0" and player 2 with "X". When you play against the machine it is automatically assigned the "X" and the player the "0". At the end the winning player is printed.*

![Image text](https://github.com/UP210719/UP210719_CPP/blob/main/imagenes/Captura%20de%20pantalla%20de%202022-11-18%2009-29-17.png)

*Here we are choosing whether to play with the machine or with a friend, in this case it is against the CPU in which we will choose the first option.*

![Image text](https://github.com/UP210719/UP210719_CPP/blob/main/imagenes/Captura%20de%20pantalla%20de%202022-11-18%2009-33-02.png)

*Well, here is the representation of how I lost against the machine and where my assigned player was the "0".*

![Image text](https://github.com/UP210719/UP210719_CPP/blob/main/imagenes/Captura%20de%20pantalla%20de%202022-11-18%2009-34-34.png)

*In this case we are playing with a friend where the second option will be selected as printed in the program so that player one is "0" and player two is "X".*

![Image text](https://github.com/UP210719/UP210719_CPP/blob/main/imagenes/Captura%20de%20pantalla%20de%202022-11-18%2009-35-27.png)

*Lastly, we have that the winner was player 1 where this is implicitly made to the last of the table.*

# **5-Ending**  🎓
*In this unit 3 project we were in too much constant work since it was a fairly extensive program and with many delays because it was failure after failure, which is pure trial and error programming.
It was too much fun because we had a lot of collaboration and teamwork, helping each other to solve doubts among themselves, without a doubt, despite the stress that it generated for us, we were able to obtain a result that was not so satisfactory but adequate to have a good grade in this unit.*

[Index](#index)

✨  *Thanks for watching Mr.Anaya.*  ✨
