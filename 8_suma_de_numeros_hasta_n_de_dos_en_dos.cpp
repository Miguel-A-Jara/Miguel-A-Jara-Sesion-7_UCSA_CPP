/*
8. Escriba un programa que calcule el valor de: 1+3+5+...+2n-1
*/

#include <iostream>
using namespace std;

int main() {

    int result = 0, n = 0;

    cout << "\n\n\tPrograma que suma los numeros desde 1 hasta '2n - 1'." << endl;
    cout << "\nIngrese un numero 'n': "; cin >> n;

    for(int i = 1; i <= ((2 * n) - 1); i+= 2){

        cout << i << "\n";
        result += i;
    }

    cout << "\nEl resultado final es: " << result;

    return 0;
}

