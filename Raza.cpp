#include "Raza.h"
#include<iostream>


Raza::Raza(){

}

Raza::Raza(string nombre, string paisOrigen){
	this->nombre = nombre;
        this->paisOrigen = paisOrigen;
}

string Raza::getNombre(){
        return nombre;
}


void Raza::setNombre(string nombre){
        this->nombre = nombre;
}

string Raza::getPaisOrigen(){
        return paisOrigen;
}
        