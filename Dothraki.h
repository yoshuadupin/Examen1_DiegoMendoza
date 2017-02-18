//Clase DothRaki
#include<string>
#include<iostream>
using namespace std;

#pragma once
class Dothraki{
	private:
		string nombre;
		string jefeBarbaro;
		string nombreCaballo;
		string colorCaballo;
		int ataque;
		int defensa;
	public:
		//TODO CONSTRUCTORES
		~Dothraki();
		Dothraki(string  ,string ,string , string ,int , int);
		//Setters
		void setNombre(string);
      void setJefeBarbaro(string);
      void setNombreCaballo(string);
      void setColorCaballo(string);
      void setAtaque(int);
      void setDefensa(int);
		//Getters
		string getNombre();
      string getJefeBarbaro();
      string getNombreCaballo();
      string getColorCaballo();
      int getAtaque();
      int getDefensa();


};
