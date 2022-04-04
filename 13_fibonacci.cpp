/*
13. Hacer un que realize la serie fibonacci -> 1 1 2 3 5 8 13...n
*/

#include <iostream>
using namespace std;

int main() {

    int n = 0;
    int primer_nro = 1, almacen_nro, ult_nro = 1;

    cout << "Programa que realiza la serie fibonacci.";
    cout << "Ingrese la longitud de la sucesion: "; cin >> n;

    cout << primer_nro << " ";
    for(int i = 0; i < n; i++) {

        almacen_nro = ult_nro;
        ult_nro += primer_nro;
        primer_nro = almacen_nro;

        cout << primer_nro << " ";
    }
    cout << ult_nro;

    return 0;
}
