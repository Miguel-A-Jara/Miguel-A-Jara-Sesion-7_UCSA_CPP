/*
14. En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de:

    a) Alumnos que aprobaron todos los exámenes.
    b) Alumnos que aprobaron al menos un examen.
    c) Alumnos que aprobaron únicamente el último examen.

    Realice un programa que permita la lectura de los datos y el cálculo de las estadísticas.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int alum_calif = 0;
    /*vector <vector <int>> calif_vector;*/
    int calif_vector[5][3];


    cout << "Programa que calcula si los alumnos de una clase han aprobado un examen." << endl;

    for(int i = 0; i < 5; i++) {

        for(int j = 0; j < 3; j++) {

            cout << "\n\tIngrese la calificacion " << j + 1 << " del alumno " << i + 1 << endl; cin >> alum_calif;
            calif_vector[i][j] = alum_calif;
        }
        cout << "\n";
        system("CLS");
    }

    //Imprimimos los datos de todos los estudiantes.
    for(int i = 0; i < 5; i++) {

        cout << "Alumno " << i + 1 << ": " <<endl;
        for(int j = 0; j < 3; j++) {

            cout << "\t | " << calif_vector[i][j] << " | ";
        }
        cout << "\n\n";
    }


    //Imprimos los que aprobaron/desaprobaron los examenes
    for(int i = 0; i < 5; i++) {

        cout << "\n\n";

        if((calif_vector[i][0] >= 3) && (calif_vector[i][1] >= 3) && (calif_vector[i][2] >= 3)) {

            cout << "\nEl almuno Nro " << i + 1<< " ha aprobado todos los examenes";
            continue;
        }

        if((calif_vector[i][0] >= 3) || (calif_vector[i][1] >= 3) || (calif_vector[i][2] >= 3)) {

            cout << "\nEl alumno Nro " << i + 1<< " ha aprobado al menos una materia.";
            //Continua a revisar el proximo por si es el ultimo examen.
        }

        if((calif_vector[i][0] < 3) && (calif_vector[i][1] < 3) && (calif_vector[i][2] >= 3)) {

            cout << "\nEl alumno Nro " << i + 1<< " ha aprobado solo el ultimo examen.";
        }
    }

    return 0;
}
