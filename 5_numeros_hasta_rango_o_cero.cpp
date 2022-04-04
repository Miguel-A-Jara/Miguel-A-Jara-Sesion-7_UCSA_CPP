/*
    5. Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se introduzca el valor 0.
    El programa debe entregar la suma de los valores mayores a 0 introducidos.
*/

#include <iostream>
#include <vector>
using namespace std;


int main() {

    int nro_usuar = 1, suma_valores = 0;
    bool nro_flag = false;
    vector < int > nro_vector;


    cout << "\n\t\t\tPrograma que ingresa numeros y finaliza al ingresar numero dentro de rango o igual a cero '0'." << endl;

    while(nro_flag == false) {
        cout << "\n\tIngrese un numero cualquiera, ingrese cero '0' o [20 a 30 ] para finalizar el programa: "; cin >> nro_usuar;

        if(nro_usuar > 0) {
            nro_vector.push_back(nro_usuar);
        }

        if(nro_usuar == 0 || nro_usuar >= 20 && nro_usuar <= 30) {

            nro_flag = true;
        } else {

            system("CLS");
        }
    }

    if(nro_vector.size() > 0) {

        for(int i = 0; i < nro_vector.size(); i++) {
            suma_valores += nro_vector[i];
        }

        cout << "\n\tLa suma de todos los valores introducidos mayores a cero son: " << suma_valores;
    } else {

        cout << "\n\tCumplio la condicion en el primer intento.";
    }

    return 0;
}
