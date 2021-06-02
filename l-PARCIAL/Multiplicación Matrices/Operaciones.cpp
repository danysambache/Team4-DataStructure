/*	UNIVERSITY OF THE ARMED FORCES ESPE
	COMPUTER SCIENCE DEPARTMENT
    SOFTWARE ENGINEER
                
	AUTHORS:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALEXANDER MAILA - jamaila@espe.edu.ec
				JIMMY SIMBAÑA - jasimbana14@espe.edu.ec
				DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)
	
	STATEMENT: Perform multiplication of two matrices, using classes.				
				
	CREATION DATE:        31-05-21 	
	MODIFICATION DATE:    1-06-21*/
#include "Operaciones.h"
#include <iostream>
using namespace std; 
/**
 * @brief Construct a new Operaciones:: Operaciones object
 * 
 * @param _matriz1 
 * @param _matriz2 
 */
Operaciones::Operaciones(Matriz _matriz1,Matriz _matriz2)
{
	int m=0,n=0;
      for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
				*(matriz1.getMatriz()+m)=*(_matriz1.getMatriz()+m);
				m++;
				*(matriz2.getMatriz()+n)=*(_matriz2.getMatriz()+n);
				n++;
			}
		}
}
/**
 * @brief Matrix multiply
 * 
 */
void Operaciones::multiplicar(){
	int m1[3][3];
	int m2[3][3];
	int mr[3][3];
	int m=0;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				m1[i][j]=*(matriz1.getMatriz()+m);
				m2[i][j]=*(matriz2.getMatriz()+m);
				m++;
		}
	}
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				mr[i][j]=0;
				for(int k=0;k<3;k++){
					mr[i][j]+=(m1[i][k]*m2[k][j]);
				}
		}	
	}
	for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cout<<" "<<mr[i][j];
		}
		cout<<endl; 
	}
}


