/*	UNIVERSITY OF THE ARMED FORCES ESPE
	COMPUTER SCIENCE DEPARTMENT
    SOFTWARE ENGINEER
                
	AUTHORS:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALEXANDER MAILA - jamaila@espe.edu.ec
				JIMMY SIMBAÑA - jasimbana14@espe.edu.ec
				DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)
	
	STATEMENT: Generate payment dates by number of installments. Using classes.				
				
	CREATION DATE:        31-05-21 	
	MODIFICATION DATE:    1-06-21*/

#if !defined(__Class_Diagram_1_Validate_h)
#define __Class_Diagram_1_Validate_h
#include <iostream>
#include "Date.h"

class Validate
{
public:
	
	void printDate(int);
	void controlDate();
   	bool controlBinary(int);
   	Validate();
   	~Validate();

protected:
private:

};

#endif
