/*
10. Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales).
*/

#include <iostream>
using namespace std;

//Function declaration
int factorial_nro(int n);


int main() {

    int n = 0, result_sum = 0;;

    cout << "\n\t\tPrograma que calcula la suma de los factoriales de 'n'." << endl;
    cout << "\nIngrese un valor 'n': "; cin >> n;

    for(int i = 1; i <= n; i++) {

        result_sum += factorial_nro(i);
    }

    cout << "\n\t\tEl resultado de la suma de los factoriales de " << n << " es: " << result_sum;

    return 0;
}

int factorial_nro(int n) {

    int result_factorial = 1;
    for(int i = 1; i <= n; i++) {

        result_factorial *= i;
    }

    return result_factorial;
}
