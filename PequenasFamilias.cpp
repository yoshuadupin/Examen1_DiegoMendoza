//Metodos de Pequenas Familias

#include "PequenasFamilias.h"
//TODO:CONSTRUctores
PequenasFamilias::PequenasFamilias(string nombre , string simboloEscudo , string lema , int cantPersonas , int ataque , int defensa){
	cout<<"Soldado de pequena familia listo"<<endl;
	setNombre(nombre);
	setSimboloEscudo(simboloEscudo);
	setLema(lema);
	setCantPersonas(cantPersonas);
	setAtaque(ataque);
	setDefensa(defensa);
}	
PequenasFamilias::~PequenasFamilias(){
	cout<<"Ah muerto un soldado Noble"<<endl;
}

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

