/*
11. Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n = 0, result_sum = 0;

    cout << "\n\tPrograma para resolver la suma de potencias de un numero 'n'." << endl;
    cout << "\n\tIngrese un numero: "; cin >> n;

    for(int i = 1; i <= n; i++) {

        result_sum += pow(2, i);
    }

    cout << "\n\tEl resultado de la suma de las potencias es: " << result_sum;

    return 0;
}
