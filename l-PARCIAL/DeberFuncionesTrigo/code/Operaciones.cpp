#include "Operaciones.h"
#include <stdlib.h>
#include <conio.h>
 Operaciones::Operaciones(void)
{
}
double Operaciones::calc_cos(int numAprox,int valor)
{
	int i;
	double res;
	int prod=-1;
	double *coeficiente=segmentar(double(numAprox)+1);      
    for (i = 0; i <= numAprox; i+=2) {      
        prod *= -1;     
        *(coeficiente+i) = prod * (1/factorial(i));
    }
    for (i = 1; i < numAprox; i+=2) {       
 
        *(coeficiente+i) = 0;
    }
    for (i = numAprox; i > 0; i--) {
        res = *(coeficiente+i) * valor + *(coeficiente+(i-1));
        *(coeficiente+(i-1))= res;
    }
    return res;
}
double Operaciones::calc_sen(int numAprox,int valor)
{
	int i;
	double res;
	int prod=-1;
	double *coeficiente=segmentar(double(numAprox)+1);      
    for (i = 1; i <= numAprox; i+=2) {      
        prod *= -1;     
        *(coeficiente+i) = prod * (1/factorial(i));
    }
    for (i = 0; i < numAprox; i+=2) {       
 
        *(coeficiente+i) = 0;
    }
    for (i = numAprox; i > 0; i--) {
        res = *(coeficiente+i) * valor + *(coeficiente+(i-1));
        *(coeficiente+(i-1))= res;
    }
    return res;
}
double Operaciones::calc_csc(int numAprox,int valor)
{
	int i;
	double res;
	int prod=-1;
	double *coeficiente=segmentar(double(numAprox)+1);      
    for (i = 1; i <= numAprox; i+=2) {      
        prod *= -1;     
        *(coeficiente+i) = prod * (1/factorial(i));
    }
    for (i = 0; i < numAprox; i+=2) {       
 
        *(coeficiente+i) = 0;
    }
    for (i = numAprox; i > 0; i--) {
        res = *(coeficiente+i) * valor + *(coeficiente+(i-1));
        *(coeficiente+(i-1))= res;
    }
    return 1/res;
}
double Operaciones::calc_sec(int numAprox,int valor)
{
	int i;
	double res;
	int prod=-1;
	double *coeficiente=segmentar(double(numAprox)+1);      
    for (i = 0; i <= numAprox; i+=2) {      
        prod *= -1;     
        *(coeficiente+i) = prod * (1/factorial(i));
    }
    for (i = 1; i < numAprox; i+=2) {       
 
        *(coeficiente+i) = 0;
    }
    for (i = numAprox; i > 0; i--) {
        res = *(coeficiente+i) * valor + *(coeficiente+(i-1));
        *(coeficiente+(i-1))= res;
    }
    return 1/res;
}
double Operaciones::calc_tan(int numAprox, int valor){
	int i;
	double resSen,aux1;
	int prod=-1;
	double *coeficiente=segmentar(double(numAprox)+1);      
    for (i = 1; i <= numAprox; i+=2) {      
        prod *= -1;     
        *(coeficiente+i) = prod * (1/factorial(i));
    }
    for (i = 0; i < numAprox; i+=2) {       
 
        *(coeficiente+i) = 0;
    }
    for (i = numAprox; i > 0; i--) {
        resSen = *(coeficiente+i) * valor + *(coeficiente+(i-1));
        *(coeficiente+(i-1))= resSen;
    }
    aux1=resSen;
    int j;
	double resCos,aux2;
	int prod2=-1;
	double *coeficiente2=segmentar(double(numAprox)+1);      
    for (j = 0; j <= numAprox; j+=2) {      
        prod2 *= -1;     
        *(coeficiente2+j) = prod2 * (1/factorial(j));
    }
    for (j = 1; j < numAprox; j+=2) {       
 
        *(coeficiente2+j) = 0;
    }
    for (j = numAprox; j > 0; j--) {
        resCos = *(coeficiente2+j) * valor + *(coeficiente2+(j-1));
        *(coeficiente2+(j-1))= resCos;
    }
    aux2=resCos;
    return aux1/aux2;
}
double *Operaciones::segmentar(double dim){
	double *vect;
	int j;
    vect=(double *)malloc(dim*sizeof(double *));
    for(j=0;j<dim;j++){
        vect=(double *)malloc(dim*sizeof(double));
    }
     return vect;
}
double Operaciones::factorial(int n)
{
   	return (n<1)?1:n*factorial(n-1);
}
