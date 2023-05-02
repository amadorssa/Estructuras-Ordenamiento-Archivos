#include <iostream>
#include <fstream>
#include <string>
#include "mylib.h"

using namespace std;

void escribirArchivo(string filename, Alumno alumnos[], int n, Asignatura materia) {
    
    ofstream archivo(filename);
    archivo << "Asignatura: " << materia.nombre << endl;
    archivo << "Clave: " << materia.clave << endl;
    archivo << "Creditos: " << materia.creditos << endl << endl;

    archivo << "Expediente\tNombre\tApellido paterno" << endl;
    for (int i = 0; i < n; i++) {
        archivo << alumnos[i].expediente << "\t" << alumnos[i].nombre << "\t" << alumnos[i].apellido_paterno << endl;
    }
    archivo.close();

    if (!archivo.is_open()) {
        cout << "El archivo se creo con exito";
    } else {
        cout << "Hubo un error al crear el archivo" << endl;
    }
}
