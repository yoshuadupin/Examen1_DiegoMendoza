//Clase Starks
#include<string>
#include<vector>
#include"PequenasFamilias.h"
using namespace std;
#pragma once
class Starks{
	private:

		string jefeFamilia;
		int cantLobosHuargo;
		string animalEmblema;
		string lema;
		vector<PequenasFamilias*> ejercitoFamilias;
		string guerreroValioso;
		int cantIntegrantes;
	public:
		//Constructor y destructor
		Starks();
		Starks(string , int , string , string , PequenasFamilias* , string , int);
	
		~Starks();
		
		//Setter
		void setJefeFamilia(string);
		void setCantLobosHuargo(int);
		void setAnimalEmblema(string);
		void setLema(string);
		//Metodos set del Vector
		void setIntegranteFamilia(PequenasFamilias*);
		
		void setGuerreroValioso(string);
		void setCantIntegrantes(int);
		
		//Getter
		string getJefeFamilia();
		int getCantLobosHuargo();
		string getAnimalEmblema();
		string getLema();
		
		//Metodos get del vector
		PequenasFamilias* getIntegranteFamilia(int);
		
		string getGuerreroValioso();
		int getCantIntegrantes();

};
