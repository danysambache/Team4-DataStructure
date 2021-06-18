/*	UNIVERSITY OF THE ARMED FORCES ESPE
	COMPUTER SCIENCE DEPARTMENT
    SOFTWARE ENGINEER
              
	AUTHORS:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALEXANDER MAILA - jamaila@espe.edu.ec
				JIMMY SIMBANA - jasimbana14@espe.edu.ec
				DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)
	
	STATEMENT: It is required to overload 3 methods for each member of the group.				
				
	CREATION DATE:        27-05-21 	
	MODIFICATION DATE:    27-05-21*/
#include "Data.h"
/**
 * @brief Construct a new Data:: Data object
 * 
 */
Data::Data(int val1, int val2,float val3, float val4){
	this->value_1=val1;
	this->value_2=val2;
	this->value_3=val3;
	this->value_4=val4;
}
/**
 * @brief Construct a new Data:: Data object
 * 
 */
Data::Data(){	
}
/**
 * @brief This function returns val_1
 * 
 * @return int 
 */
int Data::getval_1(){
	return value_1;
}
/**
 * @brief This function returns val_2
 * 
 * @return int 
 */
int Data::getval_2(){
	return value_2;
}
/**
 * @brief This function returns val_3
 * 
 * @return float 
 */
float Data::getval_3(){
	return value_3;
}
/**
 * @brief This function returns val_4
 * 
 * @return float 
 */
float Data::getval_4(){
	return value_4;
}
/**
 * @brief This function set val_1
 * 
 * @param val_1 
 */
void Data::setVal_1(int val_1){
	value_1=val_1;
}
/**
 * @brief This function set val_2
 * 
 * @param val_2 
 */
void Data::setVal_2(int val_2){
	value_2=val_2;
}
/**
 * @brief This function set val_3
 * 
 * @param val_3 
 */
void Data::setVal_3(float val_3){
	value_3=val_3;
}
/**
 * @brief This function set val_4
 * 
 * @param val_4 
 */
void Data::setVal_4(float val_4){
	value_4=val_4;
}
