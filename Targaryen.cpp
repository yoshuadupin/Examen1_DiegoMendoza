#include "Targaryen.h"


//TODO:CONSTRUCTOR DESTRUCTOR Y MODIFICAR DE TODO
//setters

void Targaryen::setReina(string reina){
	this->reina = reina;

}

void Targaryen::setAnimalEmblema(string animalEmblema){
	this->animalEmblema = animalEmblema;
}

void Targaryen::setLema(string lema){
	this->lema = lema;
}

void Targaryen::setCantDragones(int cantDragones){
	this->cantDragones = cantDragones;
}

void Targaryen::setIntegranteDothraki(Dothraki* integrante){
	this->ejercitoDothraki.push_back(integrante);
}
void Targaryen::setCantBarcos(int cantBarcos){
	this->cantBarcos = cantBarcos;
}

//Getters
string Targaryen::getReina(){
   return reina;

}

string Targaryen::getAnimalEmblema(){
  	return animalEmblema;
}

string Targaryen::getLema(){
   return lema;
}

int Targaryen::getCantDragones(){
   return cantDragones;
}

Dothraki* Targaryen::getIntegranteDothraki(int pos){
   return ejercitoDothraki[pos];
}
int Targaryen::getCantBarcos(){
   return cantBarcos;
}


