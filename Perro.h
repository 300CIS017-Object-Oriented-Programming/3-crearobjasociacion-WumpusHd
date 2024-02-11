//
// Created by lufe0 y Gonzo Feb2024.
//
#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include "Propietario.h"
#include "Veterinario.h"
#include "Raza.h"

using namespace std;
class Perro {
private:
    int edad;
    string nombre;
    string raza;
    string tamanio;
    string color;
    Propietario* pPropietario;

    /*Parte 2 - Item 3 */
    Veterinario* veterinaria;

    /*Parte 3 - Item 4 */
    Raza* tipoRaza;

public:
    Perro();

    /* Parte 1 - Primer Item - Constructor con Parametros de los atributos nombre,raza,edad,tamanio y color*/
    Perro(string nombre, int edad, string raza, string color, string tamanio);
    
    void ladrar();


    /* Parte 1 - Adicional - Item 1. 
    Sirve para relacionar un objeto de la clase Propietario a su respectivo objeto de la clase Perro
    De tal forma que inicializa un objeto de la clase Propietario de forma dinámica para hacer la relación 
    del perro con el Propietario.*/
    void agregarPropietario(string nombre, string docIdentidad);
    // Sirve para relacionar dos clases cuando ya se tiene un objeto
    void setPropietario(Propietario * pPropietario);
    Propietario* getPropietario();


    /*Parte 2 - Item 4 */
    void agregarVeterinario(string nombre, int aniosExperiencia);
    void setVeterinario(Veterinario* veterinaria);
    Veterinario* getVeterinario();

    /*Parte 3 - Item 4 */
    void agregarRaza(string nombre, string paisOrigen);
    void setRaza(Raza* raza);
    Raza* getRaza();
    
    int getEdad();
    void setEdad(int edad);
    //string getRaza();
    //void setRaza(string raza);
    string getNombre();
    void setNombre(string nombre);
    string getTamanio();
    void setTamanio(string tamanio);
    string getColor();
    void setColor(string color);
    ~Perro(); //Destructor
};
#endif

