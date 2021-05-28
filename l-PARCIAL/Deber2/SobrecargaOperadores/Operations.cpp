/*	UNIVERSITY OF THE ARMED FORCES ESPE
	COMPUTER SCIENCE DEPARTMENT
    SOFTWARE ENGINEER
                
	AUTHORS:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALEXANDER MAILA - jamaila@espe.edu.ec
				JIMMY SIMBANA - jasimbana14@espe.edu.ec
				DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)
	
	STATEMENT: Requires overloading operators, using templates and classes				
				
	CREATION DATE:        27-05-21 	
	MODIFICATION DATE:    27-05-21*/
#include "Operations.h"
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
/**
 * @brief Construct a new Operations< H>:: Operations object
 * 
 * @tparam H 
 */
template<typename H>
Operations<H>::Operations(){	
}
/**
 * @brief This function add two numbers
 * 
 * @tparam H 
 * @param info 
 * @return H 
 */
template<typename H>
H Operations<H>::operator +(Data <H> info){
   return(info.getData()+H(info.getValue()));
}
/**
 * @brief This function subtract two numbers
 * 
 * @tparam H 
 * @param info 
 * @return H 
 */
template<typename H>
H Operations<H>::operator -(Data <H> info){
	return(info.getData()-H(info.getValue()));
}
/**
 * @brief This function multiply two numbers
 * 
 * @tparam H 
 * @param info 
 * @return H 
 */
template<typename H>
H Operations<H>::operator *(Data <H> info){
	return(info.getData()*(info.getValue()));
}
