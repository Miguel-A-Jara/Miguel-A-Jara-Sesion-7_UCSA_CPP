/*
9. Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)
*/

#include <iostream>
using namespace std;

int main() {

    int result = 1, n = 0;

    cout << "\n\n\tPrograma que halla el factorial de un numero." << endl;
    cout << "\nIngrese un numero 'n': "; cin >> n;

    for(int i = 1; i <= n; i++) {

        result *= i;
    }

    cout << "\nEl factorial de " << n << " es: " << result;

    return 0;
}

