//Guardia real header
#include<string>
using namespace std;

#pragma once
class GuardiaReal{
	private:
		string nombre;
		int edad;
		string tipoSoldado;
		int ataque;
		int defensa;
	public:
		//Setters
		void setNombre(string);
		void setEdad(int);
		void setTipoSoldado(string);
		void setAtaque(int);
		void setDefensa(int);
		//Getters
		string getNombre(string);
      int getEdad(int);
      string getTipoSoldado(string);
      int getAtaque(int);
      int getDefensa(int);
		//TODO:Constructores
};
