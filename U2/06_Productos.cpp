/*
Date: 07/10/2022 
Author: Eber Horacio Jimenez Mendoza
Email: UP210719@alumnos.upa.edu.mx
Description: Bonus to employees
Last Modification: 08/10/2022
*/
#include <iostream>
using namespace std;

int main(){
    double calificacion, bono=2400;
    cout << "Input the employee qualification\n";
    cin >> calificacion;
    if ((calificacion == 0.0) || (calificacion == 0.4) || (calificacion >= 0.6) && calificacion<=1){//Multiple If conditions, the number must be 0,0.4 or greater than 0.6 and being lower than 1.
        if (calificacion == 0.0){//Print out evaluation level of the employee
            cout << "An Unacceptable employee.";
        }
        else if (calificacion == 0.4){
            cout << "An Acceptable employee.";
        }   
        else if (calificacion >= 0.6){
            cout << "A Meritorous employee.";
        }
        cout << "\nWith an evaluation of " << calificacion << " , the employee will receive " << (calificacion*100) << "%: $" << (bono*calificacion) << "\n";//Print out percentage and value of the bonus
    } 
    else {
        cout << "\nThe value you inputted is invalid, try again.\n";//In case the number is invalid
    }
    return 0;
}