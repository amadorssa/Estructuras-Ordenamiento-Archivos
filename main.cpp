#include <iostream>
#include <fstream>
#include <string>
#include "mylib.h"

using namespace std;


int main() {

    cout << "Bienvenido!" << endl;

    //Crear variable materia
    Asignatura materia;

    //Pedir los datos de la materia
    cout << "Ingresa la clave de la materia: ";
    cin >> materia.clave;
    cout << "Ingresa el nombre de la materia: ";
    cin >> materia.nombre;
    cout << "Ingresa la cantidad de creditos de la materia: ";
    cin >> materia.creditos;

    // Pedir al usuario la cantidad de alumnos
    int n;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> n;

    // Crear el arreglo de alumnos
    Alumno alumnos[n];

    // Pedir los datos de los alumnos
    for (int i = 0; i < n; i++) {
        cout << "Alumno #" << i+1 << ":" << endl;
        cout << "Expediente: ";
        cin >> alumnos[i].expediente;
        cout << "Nombre: ";
        cin >> alumnos[i].nombre;
        cout << "Apellido paterno: ";
        cin >> alumnos[i].apellido_paterno;
    }

    int opcion;
    
    do {
        // Pedir el tipo de ordenamiento

        cout << endl << "Ordenar por:" << endl;
        cout << "\t 1. Expediente" << endl;
        cout << "\t 2. Apellido paterno" << endl;
        cout << "\t 3. Salir" << endl;
        cout << "Seleccione una opcion --> ";
        cin >> opcion;
        
        while (opcion < 1 || opcion > 3) {
            cout << endl << "Opción inválida" << endl;
            cout << "Seleccione una opcion --> ";
            cin >> opcion;
        }

        // Ordenar el arreglo de alumnos según la opción seleccionada
        if (opcion == 1) {
            ordenarExpediente(alumnos, n);
        } else if (opcion == 2) {
            ordenarApellidoPaterno(alumnos, n);
        } else {
            cout << "Adioos chequetoo";
            break;
        } 

        // Almacenar los datos ordenados en un archivo de texto    
        string filename;
        cout << "Escribe el nombre del archivo de salida: ";
        cin >> filename;
        filename = filename + ".txt";

        escribirArchivo(filename, alumnos, n, materia);
    } while (opcion != 3);
}


   
