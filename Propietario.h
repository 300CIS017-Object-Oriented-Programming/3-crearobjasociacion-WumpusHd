//
// Created by lufe y Gonzo Feb2024.
//

#ifndef PROPIETARIO_H
#define PROPIETARIO_H
#include <iostream>
#include <string>
using namespace std;

class Propietario {
private:
    string nombre;
    string docIdentidad;
    int edad;
public:
    Propietario() = default; //Agrega constructor por defecto sin cuerpo
    Propietario(string nombre, string docIdentidad);

    /* Parte 1 - Segundo Item - Constructor con un Parametro*/
    Propietario(string aux);

    string getNombre();
    int getEdad();

    /*Parte 1 - Item 4 */
    void setNombre(string nombre);
    void setDocIdentidad(string nombre);
    void setEdad(int aux);

    /*Parte 1 - Item 5 */
    string mostrarInfo();

};


#endif //PROPIETARIO_H
