//Clase DothRaki implementacion
//TODO CONSTRUCTOREx
#include "Dothraki.h"

//COnstructor y destructor
Dothraki::Dothraki(string nombre , string jefeBarbaro , string nombreCaballo , string colorCaballo , int ataque , int defensa){
	cout<<"Nace un Dothraki"<<endl;
	setNombre(nombre);
	setJefeBarbaro(jefeBarbaro);
	setNombreCaballo(nombreCaballo);
	setColorCaballo(colorCaballo);
	setAtaque(ataque);
	setDefensa(defensa);
}
Dothraki::~Dothraki(){
	cout<<"Muere con deshonra Dothraki"<<endl;
}

//Setters

void Dothraki::setNombre(string nombre){
	this->nombre = nombre;
}
void Dothraki::setJefeBarbaro(string jefeBarbaro){
	this->jefeBarbaro = jefeBarbaro;
}
void Dothraki::setNombreCaballo(string nombreCaballo){
	this->nombreCaballo = nombreCaballo;
}
void Dothraki::setColorCaballo(string colorCaballo){
	this->colorCaballo = colorCaballo;
}
void Dothraki::setAtaque(int ataque){
	this->ataque = ataque;
}
void Dothraki::setDefensa(int defensa){
	this->defensa = defensa;
}
//Getters

string Dothraki::getNombre(){
   return nombre;
}
string Dothraki::getJefeBarbaro(){
   return jefeBarbaro;
}
string Dothraki::getNombreCaballo(){
   return  nombreCaballo;
}
string Dothraki::getColorCaballo(){
	 return  colorCaballo;
}
int Dothraki::getAtaque(){
	return  ataque;
}
int Dothraki::getDefensa(){
	 return defensa;
}

















