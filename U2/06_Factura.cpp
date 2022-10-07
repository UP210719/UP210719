/* Unidad 2. Uso de ciclo Do While
   Autor: Eber Horacio Jimenez Mendoza
   Fecha: 05/10/2022
   Descripción: Program that reads indefinitely quantities of products and their price, and at the end
indicate the total of the invoice.
*/
#include<iostream>
using namespace std;

int main()
{
    int products=1;
    float price, total, multi;

    while(products!=0){
        cout<<"Enter the number of products: ";
        cin>>products;
        cout<<"Enter the price of products: ";
        cin>>price;
        multi=products*price;
        total+=multi;
        multi=0;

    }
    cout<<"The final price is: " <<total;

    return 0;

}