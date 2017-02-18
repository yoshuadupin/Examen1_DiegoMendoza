//Clase Starks
#include "Starks.h"

//COnstructor
Starks::Starks(string jefeFamilia , int cantLobosHuargo , string animalEmblema , string lema , string guerreroValioso , int cantIntegrantes){
	//Les damos un valor 
	cout<<"Nace un Starks"<<endl;
	setJefeFamilia(jefeFamilia);
	setCantLobosHuargo(cantLobosHuargo);
	setAnimalEmblema(animalEmblema);
	setLema(lema);
	setGuerreroValioso(guerreroValioso);
	setCantIntegrantes(cantIntegrantes);	
}
Starks::~Starks(){
	cout<<"Matando Starks`"<<endl;
	for(int i = 0 ; i < ejercitoFamilias.size() ; i++){
		delete ejercitoFamilias[i];
	}
	ejercitoFamilias.clear();
}

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


	



