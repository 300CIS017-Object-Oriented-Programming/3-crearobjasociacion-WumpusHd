#include <iostream>
#include "Perro.h"
#include "Propietario.h"
#include "Raza.h"

int main() {

    // Instanciar
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    //firulais.setRaza("Mastin napolitano");

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    // Consultar el nombre del pPropietario del perro Firulais
    cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<<endl;

    /*Parte 1- Item 3 */

    Perro* scooby = new Perro("Scooby", 10 , "Golden", "Cafe" , "Grande");
    scooby->ladrar();

    Propietario* juan = new Propietario("Juan");
    juan->setEdad(25);
    juan->setDocIdentidad("1235645");

    /*Parte 1 - Item 6 */
    cout << juan->mostrarInfo() << endl;

    /*Parte 1- Adicional - item 1 */
    scooby->agregarPropietario("Santiago Arango", "11051");

    /*Parte 1 - Adicional - item 3 */
    cout << scooby->getPropietario()->getNombre() << endl;


    /*Relaciones - Item 1 */
    scooby->getPropietario()->setEdad(19);
    cout << scooby->getPropietario()->getEdad() << endl;


    /*Parte 2 - Item 4 y 5 */
    firulais.agregarVeterinario("Lanitas", 20);
    cout<< "El nombre del veterinario del perro "<<firulais.getNombre() << " es " << firulais.getVeterinario()->getNombre()<< " Con " << firulais.getVeterinario()->getAniosExperiencia() << " anios de experiencia" << endl;


    /*Parte 3 - Item 3 */ 
    Raza mastinNapolitano("Mastin Napolitano", "Italia");
    Raza maltes("Maltes", "Italia");

    /*Parte 3 - Item 5 */
    firulais.setRaza(&mastinNapolitano);
    cout << "El tipo de raza de " << firulais.getNombre() << " es " << firulais.getRaza()->getNombre() << " del pais " << firulais.getRaza()->getPaisOrigen() << endl;

    return 0;
}
