#include "Veterinario.h"
#include<iostream>


Veterinario::Veterinario(){

}

Veterinario::Veterinario(string nombre, int aniosExperiencia){
	this->nombre = nombre;
	this->aniosExperiencia = aniosExperiencia;
}

void Veterinario::setNombre(string nombre){
	this->nombre = nombre;
}

void Veterinario::setAniosExperiencia(int aniosExperiencia){
	this->aniosExperiencia = aniosExperiencia;
}
string Veterinario::getNombre(){
	return nombre;
}

int Veterinario::getAniosExperiencia(){
	return aniosExperiencia;
}
