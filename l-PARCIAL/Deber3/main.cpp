/*	UNIVERSITY OF THE ARMED FORCES ESPE
	COMPUTER SCIENCE DEPARTMENT
    SOFTWARE ENGINEER
                
	AUTHORS:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALEXANDER MAILA - jamaila@espe.edu.ec
				JIMMY SIMBANA - jasimbana14@espe.edu.ec
				DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)
	
	STATEMENT: Generate an array of random numbers, using classes and templates				
				
	CREATION DATE:        28-05-21 	
	MODIFICATION DATE:    30-05-21*/
#include "Operations.cpp"
#include "Data.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	int vect[10];
	srand(time(0));
	Operations<int> op;
	op.encerar(vect);
	op.generar(vect);
	op.imprimir(vect);
	return 0;
}
