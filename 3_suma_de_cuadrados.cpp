/*
    3. Realice un programa que calcule y muestre en la salida estándar la suma de los cuadrados de los 10
    primeros enteros mayores que cero.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int suma_cuad = 0;

    cout << "\n\tPrograma que calcula la suma de los cuadrados de los 10 primeros numeros mayores que cero." << endl;

    for(int i = 1; i <= 10; i++) {

        suma_cuad += pow(i, 2);
    }

    cout << "\n\tLa suma de los 10 primeros cuadrados de numeros enteros es: " << suma_cuad;
    return 0;
}
