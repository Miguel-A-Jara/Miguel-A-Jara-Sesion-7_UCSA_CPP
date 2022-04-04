/*
    2. Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero.
    En ese momento el programa debe terminar y mostrar en la salida estándar el número de valores mayores que cero leídos.
*/

#include <iostream>
#include <vector>
using namespace std;


int main() {

    int nro_usuar = 1;
    bool nro_flag = false;
    vector < int > nro_vector;


    cout << "\n\t\t\tPrograma que ingresa numeros y los imprime al final cuando se ingresa cero." << endl;

    while(nro_flag == false) {
        cout << "\n\tIngrese un numero cualquiera, o ingrese cero '0' para finalizar el programa: "; cin >> nro_usuar;

        if(nro_usuar == 0) {

            nro_flag = true;
        } else {

            nro_vector.push_back(nro_usuar);
            system("CLS");
        }
    }

    if(nro_vector.size() > 0) {

        cout << "\n\tAntes de ingresar el numero cero '0', usted ingreso " << nro_vector.size() << " numero(s). " << endl;

        for(int i = 0; i < nro_vector.size(); i++) {
            cout << "\n\tEl intento " << i + 1 << " fue: " << nro_vector[i];
        }
    } else {

        cout << "\n\tSe ingreso el numero 0 al primer intento.";
    }

    return 0;
}
