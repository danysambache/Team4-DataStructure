#if !defined(__Class_Diagram_1_VALIDAR_h)
#define __Class_Diagram_1_VALIDAR_h
#include <iostream>
using namespace std;

class Validar{
	public:
		Validar() = default;
		string ingreso(const string,int,bool);
		string validarLetras(const string,int,bool);
		string validarNumeros( const string,int);
		string validarTelfeno();
		string validarCedula();
};
#endif