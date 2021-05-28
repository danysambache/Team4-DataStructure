/*	UNIVERSITY OF THE ARMED FORCES ESPE
	COMPUTER SCIENCE DEPARTMENT
    SOFTWARE ENGINEER
                
	AUTHORS:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALEXANDER MAILA - jamaila@espe.edu.ec
				JIMMY SIMBANA - jasimbana14@espe.edu.ec
				DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)
	
	STATEMENT: Requires overloading operators, using templates and classes				
				
	CREATION DATE:        27-05-21 	
	MODIFICATION DATE:    27-05-21*/

#if !defined(__Class_Diagram_1_Operaciones_h)
#define __Class_Diagram_1_Operaciones_h
#include "Data.h"
template<typename H>
class Operations
{
public:
   Operations(); 
	H operator +(Data <H>);
	H operator -(Data <H>);
	H operator *(Data <H>);
	H operator |(Data <H>);
	H operator %(Data <H>);
	H operator ^(Data <H>);
	H operator <(Data <H>);
	H operator >(Data <H>);
	H operator =(Data <H>);
   	H operator /=(Data <H>);
   	H operator *=(Data <H>);
   	H operator +=(Data <H>);	
   	H operator -=(Data <H>);
   	H operator ^=(Data <H>);
   	H operator |=(Data <H>); 	
private:
   Data <H> data;
};
#endif
