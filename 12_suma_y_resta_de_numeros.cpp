/*
12. Hacer un programa que calcule el resultado de la siguiente expresion: 1-2+3-4+5-6...n
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n = 0, result = 0;
    vector < int > nro_vector;

    cout << "\n\tPrograma para calcular la suma y resta de un numero n" << endl;
    cout << "\n\tIngrese un numero entero: "; cin >> n;

    for(int i = 0; i < n; i++) {

        nro_vector.push_back(i + 1);
    }

    //Imprimiendo titulo:
    cout << "\n\tEl resultado de efectuar: ";
    for(int i = 0; i < nro_vector.size(); i++) {

        if(i % 2 != 0) {

            //Convertimos en negativo
            nro_vector[i] = nro_vector[i] * -1;
        }

        result += nro_vector[i];
        cout << " | " << nro_vector[i] << " | ";
    }

    cout << "\n\tes: " << result;

    return 0;
}
