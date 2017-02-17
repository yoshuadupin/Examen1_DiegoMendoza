//Clase Lannister
#include"Lannister.h"

//Setter
void Lannister::setJefeFamilia(string jefeFamilia){
   this->jefeFamilia = jefeFamilia;
}
void Lannister::setAnimalEmblema(string animalEmblema){
   this->animalEmblema = animalEmblema;
}
void Lannister::setLema(string lema){
   this->lema = lema;
}
void Lannister::setIntegranteGuardiaReal(GuardiaReal* integrante){ 
    this->ejercitoReal.push_back(integrante);
 }
void Lannister::setCantDinero(int cantDinero){
	this->cantDinero = cantDinero; 
}
void Lannister::setFuerzaMontana(int fuerzaMontana){
	this->fuerzaMontana = fuerzaMontana;
}
void Lannister::setCantIntegrantes(int cantIntegrantes){
   this->cantIntegrantes = cantIntegrantes;
}

//Getter
string Lannister::getJefeFamilia(){
	return jefeFamilia;
}
string Lannister::getAnimalEmblema(){
   return animalEmblema;
}
string Lannister::getLema(){
   return lema;
}
GuardiaReal* Lannister::getIntegranteGuardiaReal(int pos){
    return ejercitoReal[pos];
 }
int Lannister::getCantDinero(){
   return cantDinero;
}
int Lannister::getFuerzaMontana(){
   return fuerzaMontana = fuerzaMontana;
}
int Lannister::getCantIntegrantes(){
   return cantIntegrantes;
}
