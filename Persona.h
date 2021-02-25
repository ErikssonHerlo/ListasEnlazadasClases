#ifndef PERSONA_H
#define PERSONA_H
#include <string>
class Persona {
public:
    Persona(int,std::string,std::string);
    int id;
    Persona* siguiente;
    std::string nombre;
    std::string apellido;
    void showInfo();
    void mostrarListado(Persona *lista);
    Persona* insertar(Persona *lista);
private:
    
};

#endif /* PERSONA_H */