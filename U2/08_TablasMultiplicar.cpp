/* 
Unidad 2. Uso de ciclo Do While
Author: Eber Horacio Jimenez Mendoza
Date: 12/10/2022
Description: Program to enter multiplication tables
Last modification: 12/10/2022
*/
#include <iostream>
using namespace std;

int main(){
    int number, multi, i, limite;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Enter a limit: ";
    cin>>limite;

    cout<<"-----------------------\n";

    for(i=1; i<=limite; i++){
        multi= number *1;
        cout<<"|\t" <<i <<"\tx\t" <<number <<"\t=\t" <<multi <<"\t|\n";
        cout<<"-----------------------\n"; 
    }
    return 0;


}