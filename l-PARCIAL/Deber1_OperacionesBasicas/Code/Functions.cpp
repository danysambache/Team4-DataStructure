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

//CALL TO CLASS FUNCTIONS	
#include"Functions.h"
//LIBRARY STATEMENT	
#include<iostream>

using namespace std;

//USE OF METHODS
template <typename function>
function Functions <function>::add(Operations<function> ope){
	return ope.getValue_1()+ope.getValue_2();
}
template <typename function>
function Functions <function>::subtract(Operations<function> ope){
	return ope.getValue_1()-ope.getValue_2();
}
template <typename function>
function Functions <function>::multiply(Operations<function> ope){
	return ope.getValue_1()*ope.getValue_2();
}
template <typename function>
function Functions <function>::divide(Operations<function> ope){
	if(ope.getValue_2()==0){
	try{
		throw ope.getValue_2();
	}catch (float)
	{
    cout<<"! DIVISION BY ZERO ERROR !"<<endl;
	}	
	}else
	return ope.getValue_1()/ope.getValue_2();
}
