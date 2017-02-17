//Metodos de Pequenas Familias

#include "PequenasFamilias.h"
//TODO:CONSTRUctores
//Setters
void PequenasFamilias::setNombre(string nombre){
	this->nombre = nombre;
}
void PequenasFamilias::setSimboloEscudo(string simboloEscudo){
	this->simboloEscudo = simboloEscudo;
}
void PequenasFamilias::setLema(string lema){
	this->lema = lema;
}
void PequenasFamilias::setCantPersonas(int cantPersonas){
	this->cantPersonas = cantPersonas;
}
void PequenasFamilias::setAtaque(int ataque){
	this->ataque = ataque;
}
void PequenasFamilias::setDefensa(int defensa){
	this->defensa = defensa;
}

//getters
string PequenasFamilias::getNombre(){
   return nombre;
}
string PequenasFamilias::getSimboloEscudo(){
   return simboloEscudo;
}
string PequenasFamilias::getLema(){
   return lema;
}
int PequenasFamilias::getCantPersonas(){
   return cantPersonas;
}
int PequenasFamilias::getAtaque(){
   return ataque;
}
int PequenasFamilias::getDefensa(){
   return defensa;
}

