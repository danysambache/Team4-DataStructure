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
	
#include"Operations.h"
#include<iostream>

using namespace std;

template <typename data>
Operations<data>::Operations(){	
}

template <typename data>
void Operations<data>::setValue_1(data val_1){
	value_1=val_1;
}
template <typename data>
void Operations<data>::setValue_2(data val_2){
	value_2=val_2;
}
template <typename data>
data Operations<data>::getValue_1(){
	return value_1;
}
template <typename data>
data Operations<data>::getValue_2(){
	return value_2;
}
