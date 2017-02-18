//Implementacion de las clases
#include "GuardiaReal.h"

GuardiaReal::GuardiaReal(string nombre , int edad , string tipoSoldado , int ataque , int defensa){
	cout<<"Reclutamos a los mejores Guardias"<<endl;
	setNombre(nombre);
	setEdad(edad);
	setTipoSoldado(tipoSoldado);
	setAtaque(ataque);
	setDefensa(defensa);
}
GuardiaReal::~GuardiaReal(){
	cout<<"Acaba tu vida de seguir ordenes"<<endl;
}
//Setters
void GuardiaReal::setNombre(string nombre){
	this->nombre = nombre;
}

void GuardiaReal::setEdad(int edad){
	this->edad = edad;
}
void GuardiaReal::setTipoSoldado(string tipoSoldado){
	this->tipoSoldado = tipoSoldado;
}
void GuardiaReal::setAtaque(int ataque){
	this->ataque = ataque;
}
void GuardiaReal::setDefensa(int defensa){
	this->defensa = defensa;
}
//Getters
string GuardiaReal::getNombre(){
   return nombre;
}

int GuardiaReal::getEdad(){
   return edad;
}
string GuardiaReal::getTipoSoldado(){
  	return tipoSoldado;
}
int GuardiaReal::getAtaque(){
  return ataque;
}
int GuardiaReal::getDefensa(){
  return defensa;
}




















