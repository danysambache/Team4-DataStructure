#include <iostream>
#include "Persona.cpp"
#include "Fecha.cpp"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	string nom,ape,ced;
	int d,m,a;
	cout<<"Registro"<<endl;
	cout<<"Nombre: ";
	cin>>nom;
	cout<<"Apellido: ";
	cin>>ape;
	cout<<"Cedula: ";
	cin>>ced;
	cout<<endl;
	cout<<"Fecha nacimiento"<<endl;
	cout<<"Dia: ";
	cin>>d;
	cout<<"Mes: ";
	cin>>m;
	cout<<"Anio: ";
	cin>>a;
	Fecha fech(d,m,a);
	Persona juanito;
	juanito.setNombre(nom);
	juanito.setApellido(ape);
	juanito.setCedula(ced);
	juanito.setFecha(&fech);
	cout<<"Nombre y apellido: ";
	cout<<juanito.getNombre()<<" "<<juanito.getApellido()<<endl;
	cout<<"Cedula: ";
	cout<<juanito.getCedula()<<endl;
	return 0;
}
