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

#include <iostream>

using namespace std;

class Operations{	
	private: 
		float a,b;
		
	public:
		Operations(float, float);
		
		float multiplication(float a,float b){
			return a*b;
		};					
};

Operations::Operations(float a_1, float b_2){
	a=a_1;
	b=b_2;
}

int main(){
	float a,b;
	cout<<"Please, enter your number: ";
	cin>>a;
	cout<<"Please, enter your number: ";
	cin>>b;
	
	Operations ope = Operations(a,b);
	cout<<"MULTIPLICATION = "<<ope.multiplication(a,b);
};


