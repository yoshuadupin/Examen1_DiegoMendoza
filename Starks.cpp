//Clase Starks
#include "Starks.h"

//Setter
void Starks::setJefeFamilia(string jefeFamilia){
	this->jefeFamilia = jefeFamilia;
}
void Starks::setCantLobosHuargo(int setCantLobosHuargo){
	this->cantLobosHuargo = cantLobosHuargo;
}
void Starks::setAnimalEmblema(string animalEmblema){
	this->animalEmblema = animalEmblema;
}
void Starks::setLema(string lema){
	this->lema = lema;
}
void Starks::setIntegranteFamilia(PequenasFamilias* integrante){
    this->ejercitoFamilias.push_back(integrante);
 }
void Starks::setGuerreroValioso(string guerreroValioso){
   this->guerreroValioso = guerreroValioso;
}
void Starks::setCantIntegrantes(int cantIntegrantes){
	this->cantIntegrantes = cantIntegrantes;
}
//Getter
string Starks::getJefeFamilia(){
	return jefeFamilia;
}
int Starks::getCantLobosHuargo(){
	return cantLobosHuargo;
}
string Starks::getAnimalEmblema(){
	return animalEmblema;
}
string Starks::getLema(){
	return lema;
}

PequenasFamilias* Starks::getIntegranteFamilia(int pos){
	return ejercitoFamilias[pos];
}
string Starks::getGuerreroValioso(){
	return guerreroValioso;
}
int Starks::getCantIntegrantes(){
	return cantIntegrantes; 
}


	



