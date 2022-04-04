/*
    4. Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un período de 24 horas.
    Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día, la temperatura más alta y la más baja.
*/

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;


int main() {

    int temper_usuar;
    vector < int > vector_temper;

    cout << "Programa para leer las temperaturas del dia en 6 periodos." << endl;

    for(int i = 0; i < 6; i++) {

        cout << "Ingrese la temperatura del periodo " << i + 1 << endl; cin >> temper_usuar;
        vector_temper.push_back(temper_usuar);
    }

    //Ordenamos el arreglo
    sort(vector_temper.begin(), vector_temper.end());

    cout << "La temperatura mas baja es: " << vector_temper[0] << endl;

    //Obtenemos el valor medio del arreglo
    cout << "La temperatura media del dia es: " << ((vector_temper[(6 / 2) - 1]) + (vector_temper[(6 / 2)])) / 2 << endl;

    cout << "La temperatura mas alta es: " << vector_temper[5] << endl;
    return 0;
}
