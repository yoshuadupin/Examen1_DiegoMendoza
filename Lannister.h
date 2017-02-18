//Clase Lannister
#include<string>
#include<vector>
#include<iostream>
#include"GuardiaReal.h"
using namespace std;

#pragma once

class Lannister{

	private:

      string jefeFamilia;
      string animalEmblema;
      string lema;
      vector<GuardiaReal*> ejercitoReal;
      int cantDinero;
		int fuerzaMontana;
      int cantIntegrantes;

	public:
		//Constructor
		Lannister(string , string , string , int , int, int );
		~Lannister();
		 //Setter
      void setJefeFamilia(string);
      void setAnimalEmblema(string);
      void setLema(string);
      //Metodos set del Vector
      void setIntegranteGuardiaReal(GuardiaReal*);
    
      void setCantDinero(int);
		void setFuerzaMontana(int);
      void setCantIntegrantes(int);
    
      //Getter
      string getJefeFamilia();
      string getAnimalEmblema();
      string getLema();

		 //Metodos get del vector
      GuardiaReal* getIntegranteGuardiaReal(int);
		vector<GuardiaReal*> getEjercitoReal();
      int getCantDinero();
		int getFuerzaMontana();
      int getCantIntegrantes();



};

