/*	UNIVERSITY OF THE ARMED FORCES ESPE
	COMPUTER SCIENCE DEPARTMENT
    SOFTWARE ENGINEER
                
	AUTHORS:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALEXANDER MAILA - jamaila@espe.edu.ec
				JIMMY SIMBAÑA - jasimbana14@espe.edu.ec
				DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)
	
	STATEMENT: YOU WANT TO ADD, SUBTRACT, MULTIPLY AND DIVIDE TWO NUMBERS USING TEMPLATES, BASED ON CLASSES.				
				
	CREATION DATE:        19-05-21 	
	MODIFICATION DATE:    20-05-21*/
	
//LIBRARY STATEMENT	
#include<iostream>
#include<stdio.h>
#include<conio.h>

//CALL TO CLASS FUNCTIONS
#include"Functions.cpp"


int main(){
	
	//ATTRIBUTE STATEMENT
	float value_1,value_2;
	Operations<float> ope;
	
	//STRUCTURE
	cout<<"**********************************"<<endl;
	cout<<"\tBASIC OPERATIONS"<<endl;
	cout<<"Please, enter the desired number: ";
	cin>>value_1;
	ope.setValue_1(value_1);
	cout<<"Please, enter the desired number: ";
	cin>>value_2;
	cout<<endl;
	ope.setValue_2(value_2);
	
	//CALL TO METHODS
	Functions<float> operation;
	cout<<"---------------------------------"<<endl;
	cout<<"\tRESULTS"<<endl;
	cout<<"SUM = "<<"\t\t\t"<<operation.add(ope)<<endl;	
	cout<<"SUBTRACTION = "<<"\t\t"<<operation.subtract(ope)<<endl;	
	cout<<"MULTIPLICATION = "<<"\t"<<operation.multiply(ope)<<endl;	
	cout<<"DIVISION = "<<"\t\t"<<operation.divide(ope)<<endl;	
	cout<<"---------------------------------";
	return 0;
}
