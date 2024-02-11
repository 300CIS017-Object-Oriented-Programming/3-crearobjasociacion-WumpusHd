#ifndef RAZA_H
#define RAZA_H

#include <string>
#include <iostream>

using namespace std;


class Raza{
    private:
        string nombre;
        string paisOrigen;
    public:
        Raza();
        Raza(string nombre, string paisOrigen);
        string getNombre();
        void setNombre(string nombre);
        string getPaisOrigen();
        void setPaisOrigen(string paisOrigen);
};

#endif