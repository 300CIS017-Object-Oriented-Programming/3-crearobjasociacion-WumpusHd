//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"

//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros


Propietario::Propietario(string nombre, string docIdentidad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
}

/* Parte 1 - Segundo Item - Constructor con un Parametro*/
Propietario::Propietario(string nombre){
    this->nombre = nombre;
}

string Propietario::getNombre()  {
    return nombre;
}

int Propietario::getEdad(){
    return edad;
}
void Propietario::setNombre(string nombre) {
    this->nombre = nombre;
}

void Propietario::setDocIdentidad(string nombre){
    this->docIdentidad = nombre;
}

void Propietario::setEdad(int aux){
    this->edad = aux;
}

/*Parte 1- Item 5*/
string Propietario::mostrarInfo(){
    string ans = " ";
    ans+= nombre;
    ans+= " ";
    ans+= docIdentidad;
    ans+= " ";
    ans+= to_string(edad);
    ans+= " ";

    return ans;
}