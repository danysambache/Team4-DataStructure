#include<iostream>
#include "Operaciones.h"
using namespace std;
int main(){
	int valor,valAprox;
	float res;
	cout<<"Ingrese el valor de aproximacion (50 o mas para mayor aproximacion): ";
	cin>>valAprox;
	cout << "Ingrese el valor del f(x): ";
	cin>>valor;
	cout<<endl;
	Operaciones op;
	//Cos Jean Carlo Cembranos
	res=op.calc_cos(valAprox,valor);
	cout.setf(ios::fixed);
    cout.precision(9);
	cout<<"Resultado Cos(x): "<<res<<endl;
	//Sen Ricardo Grijalva
	res=op.calc_sen(valAprox,valor);
	cout.setf(ios::fixed);
    cout.precision(9);
    cout<<"Resultado Sen(x): "<<res<<endl;
	//Csc Danny Sambache
	res=op.calc_csc(valAprox,valor);
	cout.setf(ios::fixed);
    cout.precision(9);
	cout<<"Resultado Csc(x): "<<res<<endl;
	//Sec Jimmy Simbaña
	res=op.calc_sec(valAprox,valor);
	cout.setf(ios::fixed);
    cout.precision(9);
	cout<<"Resultado Sec(x): "<<res<<endl;
	//Tan Alexander Maila
	res=op.calc_tan(valAprox,valor);
	cout.setf(ios::fixed);
    cout.precision(9);
	cout<<"Resultado Tang(x): "<<res<<endl;
	return 0;
}
