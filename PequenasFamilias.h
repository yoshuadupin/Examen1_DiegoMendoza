//Clase Pequenas Familias header
#include<string>

class PequenasFamilias{
	private:
		string nombre;
		string simboloEscudo;
		string lema;
		int cantPersonas;
		int ataque;
		int defensa;

	public:
		//Setter
		void setNombre(string);
		void setSimboloEscudo(string);
		void setLema(string);
		void setCantPersonas(int);
		void setAtaque(int);
		void setDefensa(int);
		//Getter
		string getNombre();
      string getSimboloEscudo();
      string getLema();
      int getCantPersonas();
      int getAtaque();
      int getDefensa();

};