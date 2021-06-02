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
#include "Matriz.h"
/**
 * @brief return Matrix
 * 
 * @return int* 
 */
int* Matriz::getMatriz()
{
   return *matriz;
}
/**
 * @brief set Matrix
 * 
 * @param Matrix 
 */
void Matriz::setMatriz(int Matrix[3][3])
{
   for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			this->matriz[i][j]=Matrix[i][j];
		}
	}
}
/**
 * @brief Construct a new Matriz:: Matriz object
 * 
 * @param _matriz 
 */
Matriz::Matriz(int _matriz[3][3])
{
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			this->matriz[i][j]=_matriz[i][j];
		}
	}
}

