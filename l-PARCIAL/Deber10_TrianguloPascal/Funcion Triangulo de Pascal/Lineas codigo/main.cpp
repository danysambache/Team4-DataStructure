/*  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERIA DE SOFTWARE

    AUTORES:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
                RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
                ALEXANDER MAILA - jamaila@espe.edu.ec
                JIMMY SIMBANA - jasimbana14@espe.edu.ec
                DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)

    ENUNCIADO: Funcion TRIANGULO DE PASCAL.

    FECHA DE CREACION:        04-06-21
    FECHA DE MODIFICACION:    06-06-21*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include "Operaciones.h"
#include "Vector.h"
using namespace std;
int main()
{
	Vector v1;
    int dim;
    int *vect1;
    cout<<"Ingrese la dimension para el Triangulo de Pascal: ";
    cin>>dim;
    Operaciones op;
    v1.setVector(op.segmentar(dim));
    vect1=v1.getVector();
    op.encerar(vect1,dim);

    cout<<"RESULTADO DEL TRIANGULO DE PASCAL: "<<endl;
	op.trianguloPascal(vect1,dim);

    return 0;
}
