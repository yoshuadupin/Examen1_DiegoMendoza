#include"Starks.cpp"
#include"Targaryen.cpp"
#include"Lannister.cpp"
#include"PequenasFamilias.cpp"
#include"Dothraki.cpp"
#include"GuardiaReal.cpp"
#include<vector>
#include<string>
using namespace std;

int main(){
	Starks* famStarks = NULL;
	Targaryen* famTargaryen = NULL;
	Lannister* famLannister = NULL;
	cout<<"Mundo de tronos";	
	int opcion = 0 ; 
	do{
		cout<<"Bienvenidos a Juego de Tronos donde nadie vive para siempr\n";
		cout<<"1.Inicias las familias\n2.Agrega reclutas a tu ejercito\n3.Expulsar recluta de tus tropas\n4.Nuestra Era a terminado"<<endl;
		cin>>opcion;
		if(opcion==1){
			int opcionFam;
			cout<<"\nQue familia desea iniciar: 1.Starks ,2.Targaryen  ,3. Lannister "<<endl;
			cin>>opcionFam;

			if(opcionFam ==1){
				
				string jefeFamilia;
				int cantLobosHuargo;
				string animalEmblema;
				string lema;
				string guerreroValioso;
				int cantIntegrantes;

				cout<<"Ingresara estos datos en este orden:jefeFamilia , cantLobosHuargo , animalEmblema , lema , guerreroValioso , cantIntegrantes:"<<endl;
				cin>>jefeFamilia;
				cin>>cantLobosHuargo;
				cin>>lema;
				cin>>guerreroValioso;
				cin>>cantIntegrantes;
				famStarks = new Starks(jefeFamilia , cantLobosHuargo , animalEmblema ,lema ,guerreroValioso ,cantIntegrantes);
			



			}else if(opcionFam == 2){
				
				string reina;
	   	   string animalEmblema;
   			string lema;
 		  	   int cantDragones;
     		   int cantBarcos;
				cout<<"Ingresarra estos datos de esta forma:reina , animalEmblema , lema , cantDragones , cantBarcos"<<endl;
				cin>>reina;
				cin>>animalEmblema;
				cin>>lema;
				cin>>cantDragones;
				cin>>cantBarcos;
				 famTargaryen = new Targaryen(reina , animalEmblema , lema , cantDragones , cantBarcos);
	
			}else if(opcionFam == 3){
				
				string jefeFamilia;
      		string animalEmblema;
      	   string lema;
      		int cantDinero;
      		int fuerzaMontana;
      		int cantIntegrantes;
				cout<<"\nIngresara estos datos de esta forma";
				cout<<"jefeFamilia ,animalEmblema , lema , cantDinero , fuerzaMontana ,cantIntegrantes \n";
				cin>>jefeFamilia;
				cin>>animalEmblema;
				cin>>lema;
				cin>>cantDinero;
				cin>>fuerzaMontana;
				cin>>cantIntegrantes;
				 famLannister = new Lannister(jefeFamilia ,animalEmblema , lema , cantDinero , fuerzaMontana ,cantIntegrantes );
				
				
			}
		//Cierre primer if agregar familia	
		}else if(opcion ==2){
			int opcionEjercito =0;
			cout<<"Ingrese que ejercito quiere ingresar:Starks , Targaryen ,Lannister"<<endl;
				
			
			if(opcionEjercito == 1){
					string nombre;
			      string simboloEscudo;
   			   string lema;
     				int cantPersonas;
    		   	int ataque;
      			int defensa;
					//PequenasFamilias
					famStarks->setIntegranteFamilia(new PequenasFamilias(nombre ,simboloEscudo , lema , cantPersonas , ataque , defensa));	

			}else if(opcionEjercito == 2){
					string nombre;
			      string jefeBarbaro;
     		   	string nombreCaballo;
      			string colorCaballo;
      			int ataque;
      			int defensa;
				//Dothraki	
					famTargaryen->setIntegranteDothraki(new Dothraki(nombre , jefeBarbaro , nombreCaballo , colorCaballo , ataque , defensa));
			}else if(opcionEjercito == 3){
					string nombre;
     				int edad;
      			string tipoSoldado;
     				int ataque;
      			int defensa;
					//GuardiaReal
					famLannister->setIntegranteGuardiaReal(new GuardiaReal(nombre, edad , tipoSoldado ,ataque ,defensa));
			}
		
		//Cierre del segundo IF agregar soldado
		}else if(opcion == 3){
			cout<<"Que quieres listar: 1. Starks 2. Targaryen . 3. Lannister"<<endl;
		}
	}while(opcion == 0);	

	return 0;
}
