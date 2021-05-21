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
	
//LIBRARY STATEMENT
#include <iostream>

using namespace std;

//CLASS DECLARATION
class Operations{
	
//ATTRIBUTES DECLARATION	
	private: 
		float a,b;
		
//STRUCTURE
	public:
		Operations(float, float);
	
		float add(float a,float b){
			return a+b;
		};					
};

//CONSTRUCTOR METHOD
Operations::Operations(float a_1, float b_2){
	a=a_1;
	b=b_2;
}
//MAIN
int main(){
	float a,b;
	cout<<"****************************"<<endl;
	cout<<"Please, enter your number: "<<endl;
	cin>>a;
	cout<<"Please, enter your number: "<<endl;
	cin>>b;
	
//CALL OF METHODS
	Operations ope = Operations(a,b);
	cout<<"****************************"<<endl;
	cout<<"ADD = "<<ope.add(a,b);
};







