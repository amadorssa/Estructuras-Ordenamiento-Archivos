//#define mylib.h
//Prototype for functions
#include <string>

using namespace std;

// Estructura para almacenar los datos de la asignatura
struct Asignatura {
    int clave;
    string nombre;
    int creditos;
};

// Estructura para almacenar los datos de los alumnos
struct Alumno {
    int expediente;
    string nombre;
    string apellido_paterno;
};

void intercambiar(Alumno &a, Alumno &b);
void ordenarExpediente(Alumno estudiante[], int n);
void ordenarApellidoPaterno(Alumno estudiante[], int n);
void imprimirAlumnos(Alumno estudiante[], int n);
void escribirArchivo(string filename, Alumno alumnos[], int n, Asignatura materia);