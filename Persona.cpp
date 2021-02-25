#include "Persona.h"
#include <iostream>
using namespace std;

Persona::Persona(int id, string nombre, string apellido) {
    this->id = id;
    this->nombre = nombre;
    this->apellido = apellido;
}

void Persona::showInfo() {
    cout << endl << "La información de la persona es: ID: " << id << ", Nombre: " << nombre << ", Apellido: " << apellido << endl;
}

