#include<iostream>
#include "Operaciones.h"
using namespace std;
int main(){
	int valor,valAprox;
	float res;
	cout<<"Ingrese la potencia aproximada: ";
	cin>>valAprox;
	cout << "Ingrese el valor del f(x): ";
	cin>>valor;
	cout<<endl;
	Operaciones op;
	//Cos
	res=op.calc_cos(valAprox,valor);
	cout.setf(ios::fixed);
    cout.precision(9);
	cout<<"Resultado Cos(x): "<<res<<endl;
	//Csc
	res=op.calc_csc(valAprox,valor);
	cout.setf(ios::fixed);
    cout.precision(9);
	cout<<"Resultado Csc(x): "<<res<<endl;
	return 0;
}
