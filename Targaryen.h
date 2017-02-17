//Clase Targaryen Header
#include<string>
#include<vector>

class Targaryen{
	private:

		string reina;
		string animalEmblema;
		string lema;
		int cantDragones;
		vector<Dothraki*>ejercitoDothraki;
		int cantBarcos;

	public:

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
      
      //Metodo del vector
      Dothraki* getIntegranteDothraki();
      
      int getCantBarcos();
};
