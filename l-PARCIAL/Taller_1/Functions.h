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
	MODIFICATION DATE:    20-05-21*/
	
//CALL OF CLASS
#include"Operations.cpp"

//TEMPLATES DECLARATION
template<typename function>

//CLASS CREATION
class Functions{
	
//ATTRIBUTES
	private:
		Operations<function> ope;
		
//METHODS DECLARATION
	public:			
		/**
		* @brief to the funcion to add two numbers 
		*
		* @return sum of two numbers
		*/
		function add(Operations<function>);
		/**
		* @brief to the funcion to subtract two numbers 
		*
		* @return subtract of two numbers
		*/
		function subtract(Operations<function>);
		/**
		* @brief to the funcion to multiply two numbers 
		*
		* @return multiply of two numbers
		*/
		function multiply(Operations<function>);
		/**
		* @brief to the funcion to divide two numbers 
		*
		* @return divide of two numbers
		*/
		function divide(Operations<function>);
	
};
