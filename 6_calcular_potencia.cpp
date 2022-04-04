/*
6. Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin utilizar la función pow.
*/

#include <iostream>
using namespace std;

int main() {

    int x = 0, y = 0, result = 0;

    cout << "\n\tPrograma para calcular la potenciacion de un entero 'x^y'." << endl;
    cout << "\nIntroduzca un entero 'x': "; cin >> x;
    cout << "\nIntroduzca una potencia 'y': "; cin >> y;

    for(int i = 0; i < y; i++) {

        result += x;
    }

    cout << "El resultado final es: " << result;

    return 0;
}
