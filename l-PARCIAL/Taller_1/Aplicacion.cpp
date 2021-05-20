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
	MODIFICATION DATE:    -------*/
	
//LIBRARY STATEMENT	
#include<iostream>
#include<stdio.h>
#include<conio.h>

//CALL TO CLASS FUNCTIONS
#include"Funciones.cpp"


int main(){
	
	//ATTRIBUTE STATEMENT
	float valor1,valor2;
	Operaciones<float> ope;
	
	//STRUCTURE
	cout<<"**********************************"<<endl;
	cout<<"\tBASIC OPERATIONS"<<endl;
	cout<<"Please, enter the desired number: ";
	cin>>valor1;
	ope.setValor1(valor1);
	cout<<"Please, enter the desired number: ";
	cin>>valor2;
	cout<<endl;
	ope.setValor2(valor2);
	
	//CALL TO METHODS
	Funciones<float> operacion;
	cout<<"---------------------------------"<<endl;
	cout<<"\tRESULTS"<<endl;
	cout<<"SUM = "<<"\t\t\t"<<operacion.suma(ope)<<endl;	
	cout<<"SUBTRACTION = "<<"\t\t"<<operacion.resta(ope)<<endl;	
	cout<<"MULTIPLICATION = "<<"\t"<<operacion.multiplicacion(ope)<<endl;	
	cout<<"DIVISION = "<<"\t\t"<<operacion.division(ope)<<endl;	
	cout<<"---------------------------------";
	return 0;
}
