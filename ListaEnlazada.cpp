
#include <cstdlib>
#include "Persona.h"
#include <string>
#include <iostream>
typedef Persona* Person;
using namespace std;

Persona* insertar(Persona *lista) {
    Persona *temp;
    string nombre, apellido;
    int idPersona;
    
    cout << "Ingrese el Nombre de la persona: ";
    cin >> nombre;
    cout << "Ingrese el Apellido de la persona: ";
    cin >> apellido;
    cout << "Ingrese el ID de la pesona: ";
    cin >> idPersona;

    if(lista == NULL) {
        lista = new Persona(idPersona,nombre,apellido);
        temp = lista;
    } else {
        temp = lista;
        while(temp->siguiente != NULL) {
            temp=temp->siguiente;
        }
        temp->siguiente = new Persona(idPersona,nombre,apellido);
        temp = temp->siguiente;

    }

    cout << "Persona ingresada con éxito" << endl << endl;

    return lista;

}


void mostrarListado(Persona *lista) {
    Persona *temp;
    if (lista == NULL) {
        cout << "La lista está vacía" << endl << endl;
    } else {
        cout << endl << endl << "----------LISTADO----------"<< endl << endl;
        temp = lista;
        while(temp != NULL) {
            cout << "ID: " << temp->id << endl;
            cout << "Nombre: " << temp->nombre << endl;
            cout << "Apellido: " << temp->apellido << endl << endl;
            temp = temp->siguiente;
        }
        cout << "---------------------------"<< endl << endl;
        
    }
}

int main(int argc, char** argv) {
    int op;
    Persona *listaEnlazada = NULL;

    do {

        cout << "Ejemplo de Listas Enlazadas por Medio de Clases" << endl;
        cout << "1.- Insertar Persona" << endl;
        cout << "2.- Mostrar listado" << endl;
        cout << "3.- Salir" << endl;
        cin >> op;

        switch (op)
        {
        case 1:
            listaEnlazada=insertar(listaEnlazada);
            listaEnlazada->showInfo();
            break;
        case 2:
            mostrarListado(listaEnlazada);
            break;
        case 3:
            cout << endl << "GRACIAS" << endl;
            break;
        default:
            cout << "ERROR: usted ha ingresado una opción inválida" << endl << endl;
            break;
        }


    }while(op!=3);

    return 0;
}