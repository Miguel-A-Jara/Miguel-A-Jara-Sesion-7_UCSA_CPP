/*
    1.Realice un programa que solicite de la entrada estándar un entero del
    1 al 10 y muestre en la salida estándar su tabla de multiplicar.
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {

    int nro_usuar = 0;

    cout << "Programa que solicita un numero del 1 al 10 y muestra su tabla de multiplicar." << endl;

    while(nro_usuar < 1 || nro_usuar > 10) {
        cout << "\n\tIngrese un numero del 1 al 10: "; cin >> nro_usuar;
    }


    for(int i = 1; i <= 10; i++){

        cout << "\n\t\t" << nro_usuar << " x " << i << " es: " << (nro_usuar * i) << endl;
    }

    cout << "Fin programa.";

    return 0;
}
