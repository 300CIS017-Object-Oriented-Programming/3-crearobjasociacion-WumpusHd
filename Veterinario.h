#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <string>
#include <iostream>

using namespace std;

class Veterinario{
private:
    string nombre;
    int aniosExperiencia;
public:
    Veterinario();
    Veterinario(string nombre, int aniosExperiencia);
    void setNombre(string nombre);
    void setAniosExperiencia(int aniosExperiencia);
    string getNombre();
    int getAniosExperiencia();
};

#endif