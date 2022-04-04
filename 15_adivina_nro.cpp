/*
15. Realice un programa que solicite al usuario que piense un número entero entre el 1 y el 100.
El programa debe generar un numero aleatorio en ese mismo rango[1-100],e indicarle al usuario
si el numero que digito es menor o mayor al numero aleatorio, así hasta que lo adivine.
Y por ultimo mostrarle el numero de intentos que le llevo.


variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior);
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int nro_usuar = 0, nro_rand = 0;
    vector < int > intentos_usuar;

    cout << "\n\t\tAdivine el numero en que estoy pensando!" << endl;


    //Inicializamos el generador de numeros random
    srand((unsigned) time(0));
    nro_rand = ((rand() % 100) + 1);

    while(nro_rand != nro_usuar) {

        cout << "\n\tIngrese un numero entre [1 - 100]: "; cin >> nro_usuar;
        if(nro_rand < nro_usuar) {

            cout << "Numero muy grande";
            intentos_usuar.push_back(nro_usuar);
            continue;
        }

        if(nro_rand > nro_usuar) {

            cout << "Numero muy chico";
            intentos_usuar.push_back(nro_usuar);
            continue;
        }

        if(nro_rand == nro_usuar) {

            intentos_usuar.push_back(nro_usuar);
        }
    }

    system("CLS");
    cout << "\n\t\tGanaste! El numero en el que estaba pensando era: " << nro_usuar;
    if(intentos_usuar.size() > 0) {

        cout << "\n\tEstos fueron sus intentos: ";
        for(int i = 0; i < intentos_usuar.size(); i++) {

            cout << " | " << intentos_usuar[i] << " | ";
        }
    } else {

        cout << "\n\tWow! Adivinaste el numero a la primera, felicidades!";
    }

    return 0;
}
