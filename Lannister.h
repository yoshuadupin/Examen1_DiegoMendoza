//Clase Lannister
#include<string>
#include<vector>

#pragma once

class Lannister{

	private:

      string jefeFamilia;
      string animalEmblema;
      string lema;
      vector<EjercitoGuardiaReal*> ejercitoReal;
      int cantDinero;
		int fuerzaMontana;
      int cantIntegrantes;

	public:

		 //Setter
      void setJefeFamilia(string);
      void setAnimalEmblema(string);
      void setLema(string);
      //Metodos set del Vector
      void setIntegranteGuardiaReal(EjercitoGuardiaReal*);
    
      void setCantDinero(int);
		void setFuerzaMontana(int);
      void setCantIntegrantes(int);
    
      //Getter
      string getJefeFamilia();
      string getAnimalEmblema();
      string getLema();

		 //Metodos get del vector
      EjercitoGuardiaReal* getIntegranteGuardiaReal(int);

      int getCantDinero();
		int getFuerzaMontana();
      int getCantIntegrantes();



};

