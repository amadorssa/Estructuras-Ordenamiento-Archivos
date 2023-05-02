#include <iostream>
#include <fstream>
#include <string>
#include "mylib.h"

using namespace std;

// Función para intercambiar dos elementos en un arreglo
void intercambiar(Alumno &a, Alumno &b) {
    Alumno temp = a;
    a = b;
    b = temp;
}

// Función para ordenar el arreglo de alumnos por expediente
void ordenarExpediente(Alumno estudiante[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (estudiante[j].expediente > estudiante[j+1].expediente) {
                intercambiar(estudiante[j], estudiante[j+1]);
            }
        }
    }
}

// Función para ordenar el arreglo de alumnos por apellido paterno
void ordenarApellidoPaterno(Alumno estudiante[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (estudiante[j].apellido_paterno > estudiante[j+1].apellido_paterno) {
                intercambiar(estudiante[j], estudiante[j+1]);
            }
        }
    }
}

// Función para imprimir los datos de un arreglo de alumnos
void imprimirAlumnos(Alumno estudiante[], int n) {
    for (int i = 0; i < n; i++) {
        cout << estudiante[i].expediente << "\t" << estudiante[i].nombre << "\t" << estudiante[i].apellido_paterno << endl;
    }
}