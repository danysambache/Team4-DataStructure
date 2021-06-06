#include<iostream>
#include "Operaciones.h"
using namespace std;
int main(){
	int valor,valAprox;
	float res;
	cout<<"Ingrese la potencia aproximada: "<<endl;
	cin>>valAprox;
	cout << "Ingrese el valor del cos(x): "<<endl;
	cin>>valor;
	Operaciones op;
	res=op.calc_cos(valAprox,valor);
	cout.setf(ios::fixed);
    cout.precision(9);
	cout<<"resultado Cos(x): "<<res<<endl;
	return 0;
}
