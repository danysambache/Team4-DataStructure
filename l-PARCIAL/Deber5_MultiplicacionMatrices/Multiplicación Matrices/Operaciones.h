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
#include "Matriz.cpp"
class Operaciones
{
public:
   Operaciones()=default;
   Operaciones(Matriz,Matriz);
   void multiplicar();
private:
   Matriz matriz1;
   Matriz matriz2;
};
