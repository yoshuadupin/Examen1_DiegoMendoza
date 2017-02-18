//Clase Targaryen Header
#include<string>
#include<vector>
#include<iostream>
#include"Dothraki.h"
using namespace std;

#pragma once
class Targaryen{
	private:

		string reina;
		string animalEmblema;
		string lema;
		int cantDragones;
		vector<Dothraki*>ejercitoDothraki;
		int cantBarcos;

	public:
		//TODO:Hacer COnstructor y destructor y modificador 
		Targaryen(string , string ,string , int , int);
		~Targaryen();
		//Setter
		void setReina(string);
		void setAnimalEmblema(string);
		void setLema(string);
		void setCantDragones(int);
		
		//Metodo del vector
		void setIntegranteDothraki(Dothraki*);
		
		void setCantBarcos(int);
			
		//Getter
		string getReina();
      string getAnimalEmblema();
      string getLema();
      int getCantDragones();
		vector<Dothraki*> getEjercitoDothraki();      
      //Metodo del vector
      Dothraki* getIntegranteDothraki(int);
      
      int getCantBarcos();
};
