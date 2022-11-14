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

![Image text](https://github.com/UP210719/UP210719_CPP/blob/main/imagenes/Captura%20de%20pantalla%20de%202022-11-14%2009-20-59.png)

#include <iostream>

using namespace std;

void hacertablero();
char Gato[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
bool ComprobarJugada(int jugada);
int seleccionarJugada();
void colocarlajugada(int);
bool comprobarganador();

int row, col;
int turno = 1;
int ganador;


int main(){
    int jugada;
    bool juegoterminado = false;
    bool CasillaOcupada = true;
    char juego;
    char jugador1[20];
    char jugador2[20];


    cout << "Juego de Gato " << endl;
    cout << "Presione Y para jugar y N para salir: "; 
    cin >> juego;
    

    system("cls");

    cout << "Bienvenido Jugador 1 dame tu nombre: " << endl;
    cin >> jugador1;

    system("cls");

    cout << "Bienvenido Jugador 2 dame tu nombre: " << endl;
    cin >> jugador2;

    if(juego == 'Y' || juego == 'y'){
        do{
        system("cls");
        hacertablero();
        do{
            jugada = seleccionarJugada();
            CasillaOcupada = ComprobarJugada(jugada);
            if(CasillaOcupada == true){
                cout << "Otra Vez \n";
                hacertablero();
            }
        }while(CasillaOcupada == true);
        colocarlajugada(jugada);
    
       juegoterminado = comprobarganador();
      
    }while(juegoterminado == false and turno < 10);

    system("cls");
    hacertablero();

    if(juegoterminado == true){
        if((turno - 1) %2 == 0){
            cout << "Gano el jugador " << jugador2 << endl;
        }else{
            cout << "Gano el jugador " << jugador1 << endl;
        }
    }
    else{
            cout << "Empate";
        }
    }else{
        system("cls");
        cout << "El juego se termino";
    }
    

    return 0;
}

void hacertablero(){
    int row = 0;
    int col = 0;
    
    for(int fila = 0; fila < 6; fila++){
        for(int columna = 0; columna < 3; columna++){
            if(fila < 5 && fila % 2 == 1){
                cout << "___";
            }else{
                
                if(fila < 5){
                    cout << " " << Gato[row][col] << " ";
                    col++;
                }else{
                    cout << "   ";
                }
            }
            
            if(columna < 2){
                cout << "|";
            }
          
        }
        col = 0;
        if(fila % 2 == 0){
            row++;
        }
       
       cout << endl;
    }
    
}

bool ComprobarJugada(int jugada){
    if(jugada == 1){
        row = 0;
        col = 0;
    }else if(jugada == 2){
        row = 0;
        col = 1;
    }else if(jugada == 3){
        row = 0;
        col = 2;
    }else if(jugada == 4){
        row = 1;
        col = 0;
    }else if(jugada == 5){
        row = 1;
        col = 1;
    }else if(jugada == 6){
        row = 1;
        col = 2;
    }else if(jugada == 7){
        row = 2;
        col = 0;
    }else if(jugada == 8){
        row = 2;
        col = 1;
    }else if(jugada == 9){
        row = 2;
        col = 2;
    }
    if(Gato[row][col] == 'O' || Gato[row][col] == 'X'){
        return true;
    }else{
        return false;
    }
}

int seleccionarJugada(){
    int jugada;

    cout << "OPCIONES DE JUEGO" << endl;

    for(int fila = 0; fila < 3; fila++){
        for(int columna = 0; columna < 3; columna++){
            cout << "[" << fila << ", " << columna << "]";
            cout << endl;
        }
    }

   do{
     cout << "Dame tu jugada: ";
     cin >> jugada;  
   }while(jugada > 9 && jugada < 0);
   return jugada; 

}

void colocarlajugada(int jugada){
    char seleccionJugada;
    if(turno % 2 == 0){
        seleccionJugada = 'O';
    }else{
        seleccionJugada = 'X';
    }

    if(jugada == 1){
        Gato[0][0] = seleccionJugada;
    }else if(jugada == 2){
        Gato[0][1] = seleccionJugada;
    }else if(jugada == 3){
        Gato[0][2] = seleccionJugada;
    }else if(jugada == 4){
        Gato[1][0] = seleccionJugada;
    }else if(jugada == 5){
        Gato[1][1] = seleccionJugada;
    }else if(jugada == 6){
        Gato[1][2] = seleccionJugada;
    }else if(jugada == 7){
        Gato[2][0] = seleccionJugada;
    }else if(jugada == 8){
        Gato[2][1] = seleccionJugada;
    }else if(jugada == 9){
        Gato[2][2] = seleccionJugada;
    }
    turno++;
}

bool comprobarganador(){
    bool ganar = false;
     if(Gato[0][0] == 'X' && Gato[0][0] == Gato[0][1] && Gato[0][0] == Gato[0][2]
    || Gato[1][0] == 'X' && Gato[1][0] == Gato[1][1] && Gato[1][0] == Gato[1][2]
    || Gato[2][0] == 'X' && Gato[2][0] == Gato[2][1] && Gato[2][0] == Gato[2][2]
    
    || Gato[0][0] == 'X' && Gato[0][0] == Gato[1][0] && Gato[0][0] == Gato[2][0]
    || Gato[0][1] == 'X' && Gato[0][1] == Gato[1][1] && Gato[0][1] == Gato[2][1]
    || Gato[0][2] == 'X' && Gato[0][2] == Gato[1][2] && Gato[0][2] == Gato[2][2]
    
    || Gato[0][0] == 'X' && Gato[0][0] == Gato[1][1] && Gato[0][0] == Gato[2][2]
    || Gato[0][2] == 'X' && Gato[0][2] == Gato[1][1] && Gato[0][2] == Gato[2][0]){
            ganar = true;
    }
    if(Gato[0][0] == 'O' && Gato[0][0] == Gato[0][1] && Gato[0][0] == Gato[0][2]
    || Gato[1][0] == 'O' && Gato[1][0] == Gato[1][1] && Gato[1][0] == Gato[1][2]
    || Gato[2][0] == 'O' && Gato[2][0] == Gato[2][1] && Gato[2][0] == Gato[2][2]
    
    || Gato[0][0] == 'O' && Gato[0][0] == Gato[1][0] && Gato[0][0] == Gato[2][0]
    || Gato[0][1] == 'O' && Gato[0][1] == Gato[1][1] && Gato[0][1] == Gato[2][1]
    || Gato[0][2] == 'O' && Gato[0][2] == Gato[1][2] && Gato[0][2] == Gato[2][2]
    
    || Gato[0][0] == 'O' && Gato[0][0] == Gato[1][1] && Gato[0][0] == Gato[2][2]
    || Gato[0][2] == 'O' && Gato[0][2] == Gato[1][1] && Gato[0][2] == Gato[2][0]){
        ganar = true;
    }
     

    return ganar;

}
