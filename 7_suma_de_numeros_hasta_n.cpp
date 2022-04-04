/*
7. Escriba un programa que calcule el valor de: 1+2+3+...+n
*/

#include <iostream>
using namespace std;

int main() {

    int result = 0, n = 0;

    cout << "\n\n\tPrograma que suma los numeros desde 1 hasta 'n'." << endl;
    cout << "\nIngrese un numero 'n': "; cin >> n;

    for(int i = 1; i <= n; i++){

        result += i;
    }

    cout << "\nEl resultado final es: " << result;

    return 0;
}
