#include "Perro.h"
#include <iostream>


// Ejemplo de constructor por defecto con lista inicializadora
// Perro::Perro() : edad(0), raza(""), tamanio(""), color("") {}

// Ejemplo de constructor por defecto iniciando los atributos en el cuerpo del constructor
Perro::Perro() {
    this->edad = 0;
    this->raza = "";
    this->tamanio = "";
    this->color = "";
}


/* Parte 1 - Primer Item - Constructor con Parametros de los atributos nombre,raza,edad,tamanio y color*/
Perro::Perro(string nombre, int edad, string raza, string color, string tamanio){
    this->nombre = nombre;
    this-> edad = edad;
    this-> raza = raza;
    this-> color = color;
    this-> tamanio;
}

void Perro::ladrar() {
    cout << "Guau Guau" << endl;
}

void Perro::agregarPropietario(string nombre, string docIdentidad) {
    // Asocia a la variable de instancia pPropietario un nuevo pPropietario
    // Es memoria dinámica, en el destructor se debe liberar
    this->pPropietario = new Propietario(nombre, docIdentidad);
}



void Perro::setPropietario(Propietario *pPropietario) {
    this->pPropietario = pPropietario;
}

Propietario *Perro::getPropietario() {
    return this->pPropietario;
}
/* Parte 2- Item 4 */
void Perro::agregarVeterinario(string nombre, int aniosExperiencia){
    this->veterinaria = new Veterinario(nombre, aniosExperiencia);
}

void Perro::setVeterinario(Veterinario *veterinaria){
    this->veterinaria = veterinaria;
}

Veterinario *Perro::getVeterinario(){
    return this->veterinaria;
}

/*Parte 3 - Item 4 */

void Perro::agregarRaza(string nombre, string paisOrigen){
    this->tipoRaza = new Raza(nombre,paisOrigen);
}

void Perro::setRaza(Raza* raza){
    this->tipoRaza = raza;
}

Raza *Perro::getRaza(){
    return tipoRaza;
}

int Perro::getEdad() {
    return edad;
}

void Perro::setEdad(int edad) {
    this->edad = edad;
}

/*string Perro::getRaza() {
    return raza;
}

void Perro::setRaza(string raza) {
    this->raza = raza;
}
*/
string Perro::getTamanio() {
    return tamanio;
}

void Perro::setTamanio(string tamanio) {
    this->tamanio = tamanio;
}

string Perro::getNombre() {
    return nombre;
}

void Perro::setNombre(string nombre) {
    this->nombre = nombre;
}

string Perro::getColor() {
    return color;
}

void Perro::setColor(string color) {
    this->color = color;
}

Perro::~Perro() {
    delete pPropietario;
}




