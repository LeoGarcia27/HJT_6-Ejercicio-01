#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>


using namespace std;


struct informacion{
	int peso;
	
};


main(){
	
	int n , p, a, e;
	char g [30]; 
	
	
	cout<<"\n\n\n\t\t\t ----- DATOS GENERALIZADOS -----\n";
	cout<<"\n\t Ingrese el numero de personas que desee almacenar sus datos (Max. 10) \n";
	cout<<"\n\n\t\t Personas: "; cin>>n;
	
	system("cls");
	
	ifstream datos;
	
		datos.open("datos.txt");
	
	for(int x=0; x<=n; x++){
		
		cout<<"\n Persona "<<x+1;
		cout<<"\n\n\t Peso (Kilos)): "; cin>>p;
		cout<<"\n\t Altura (cm): "; cin>>a;
		cout<<"\n\t Edad: "; cin>>e;
		cout<<"\n\t Genero: "; cin>>g;
		cout<<"\n\n";
	
	system("cls");	
		
		
		for(int y = 0; y<x; y++){
			
			datos<<"Persona "<<y+1<<" :"<<p;
		}
	}
	
	
		
	
	
	
	
	
	
	
	
getch();	
}
