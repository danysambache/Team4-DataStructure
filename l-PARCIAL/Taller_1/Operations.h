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
	
//TEMPLATE DECLARATIONS
template <typename data>

//CLASS DECLARATION
class Operations{
	
//ATTRIBUTES DECLARATION
	private:
		data value_1;
		data value_2;
		
//ESTRUCTURE 	
	public:		
		Operations();		

		/**
		* @brief to the operation to add two numbers 
		*
		* @param 
		*/
		void setValue_1(data);

		/**
		* @brief to the operation to subtract two numbers
		*
		* @param 
		*/
    	void setValue_2(data);

		/**
		* @brief to the operation to multiply two numbers 
		*
		* @param multiply of two numbers
		*/
		data getValue_1();

		/**
		* @brief to the operation to divide two numbers 
		*
		* @param divide of two numbers
		*/
    	data getValue_2();	
    	
};
