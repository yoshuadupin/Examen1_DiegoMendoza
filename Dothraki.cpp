//Clase DothRaki implementacion
//TODO CONSTRUCTOREx
#include "Dothraki.h"
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
void Dothraki::setColorCaballo(string coloCaballo){
	this->coloCaballo = coloCaballo;
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
	 return  coloCaballo;
}
int Dothraki::getAtaque(){
	return  ataque;
}
int Dothraki::getDefensa(){
	 return defensa;
}

















