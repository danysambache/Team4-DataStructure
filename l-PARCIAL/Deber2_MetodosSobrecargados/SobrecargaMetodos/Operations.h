/*	UNIVERSITY OF THE ARMED FORCES ESPE
	COMPUTER SCIENCE DEPARTMENT
    SOFTWARE ENGINEER
                
	AUTHORS:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALEXANDER MAILA - jamaila@espe.edu.ec
				JIMMY SIMBANA - jasimbana14@espe.edu.ec
				DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)
	
	STATEMENT: It is required to overload 3 methods for each member of the group.				
				
	CREATION DATE:        27-05-21 	
	MODIFICATION DATE:    27-05-21*/
#if !defined(__Class_Diagram_1_Operaciones_h)
#define __Class_Diagram_1_Operaciones_h
#include "Data.h"
class Operations
{
public:
   Operations(Data);
   Operations();
   ~Operations();
   int add(int,int);
   int add(int,float,int,float);
   float add(float,int,float);
   int subtract(int);
   float subtract(int,float);
   float subtract(float,int,float);
   int multiply(int);
   float multiply(int,float);
   float multiply(float,int,float);
   int higher(int, int);
   int higher(int, int, int);
   int higher(int, int, int, int);
   int minor(int, int);
   int minor(int, int, int);
   int minor(int, int, int, int);
private:
   Data data;
};
#endif
