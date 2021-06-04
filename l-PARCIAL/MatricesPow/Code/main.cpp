/*  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    DEPARTAMENTO DE CIENCIAS DE LA COMPUTACIÓN
    INGENIERÍA DE SOFTWARE

    AUTORES:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
                RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
                ALEXANDER MAILA - jamaila@espe.edu.ec
                JIMMY SIMBANA - jasimbana14@espe.edu.ec
                DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)

    ENUNCIADO:  IMPLEMENTAR LA FUNCION MATRIZ A LA N-ESIMA MEDIANTE PUNTEROS

    FECHA DE CREACIÓN:        02-06-21
    FECHA DE MODIFICACIÓN:    03-06-21*/
#include <iostream>
#include "Matrices.h"
#include "Operaciones.h"
#include <Math.h>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(int argc, char** argv) {
	srand(time(0));
	int dim,n;
	int **mat1, **mat2, **matr;
	cout<<"****************************************"<<endl;
	cout<<"Ingrese la dimension de la matriz: ";
	cin>>dim;
	cout<<endl;
	Operaciones op;
	mat1 = op.segmentar(dim);
	mat2 = op.segmentar(dim);
	matr = op.segmentar(dim);
	op.encerar(mat1, dim);
	op.encerar(mat2, dim);
	op.encerar(matr, dim);
	op.ingresar(mat1, dim);
	op.imprimir(mat1,dim);
	cout<<endl;
	cout<<"Ingrese la potencia para la matriz: ";
	cin>>n;
	cout<<endl;
	op.calcular(mat1,mat2,matr,dim,n);
	cout<<"Resultado: "<<endl;
	op.imprimir(mat2,dim);	
	cout<<endl;
	return 0;
}
