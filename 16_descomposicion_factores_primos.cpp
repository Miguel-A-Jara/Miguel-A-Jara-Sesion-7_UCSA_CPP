/*
16. Realice un programa que calcule la descomposición en factores primos de un número entero.

Por ejemplo: 20 = 2*2*5.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int nro_usuar = 0, result = 0, divisor = 1;
    vector < int > divisores;

    cout << "Programa que calcula la descomposicion en factores primos de un numero entero." << endl;
    cout << "Ingrese un numero entero: "; cin >> nro_usuar;

    result = nro_usuar;

    while(result != 1) {

        ++divisor;
        if(result % divisor == 0) {

            result = result / divisor;
            divisores.push_back(divisor);
            divisor = 1;
        }
    }

    cout << "La descomposicion en los factores primos de " << nro_usuar << " es: " << endl;
    for(int i = 0; i < divisores.size(); i++) {

        cout << " | " << divisores[i] << " | ";
    }
    return 0;
}
