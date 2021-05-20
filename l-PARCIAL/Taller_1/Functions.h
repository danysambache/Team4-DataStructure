/*	UNIVERSITY OF THE ARMED FORCES ESPE
	COMPUTER SCIENCE DEPARTMENT
    SOFTWARE ENGINEERING
                
	AUTHORS:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALEXANDER MAILA - jamaila@espe.edu.ec
				JIMMY SIMBAÑA - jasimbana14@espe.edu.ec
				DANNY SAMBACHE - dasambache@espe.edu.ec (LEADER)
	
	STATEMENT: YOU WANT TO ADD, SUBTRACT, MULTIPLY AND DIVIDE TWO NUMBERS USING TEMPLATES, BASED ON CLASSES.				
				
	CREATION DATE:        19-05-21 	
	MODIFICATION DATE:    -------*/
	
#include"Operations.cpp"

template<typename function>

class Functions{
	
	private:
		Operations<function> ope;
		
	public:			
		function add(Operations<function>);
		function subtract(Operations<function>);
		function multiply(Operations<function>);
		function divide(Operations<function>);
	
};
