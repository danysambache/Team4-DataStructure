/*	UNIVERSITY OF THE ARMED FORCES ESPE
	COMPUTER SCIENCE DEPARTMENT
    SOFTWARE ENGINEER
                
	AUTHORS:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALEXANDER MAILA - jamaila@espe.edu.ec
				JIMMY SIMBANA - jasimbana14@espe.edu.ec
				DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)
	
	STATEMENT: Requires overloading operators, using templates and classes				
				
	CREATION DATE:        28-05-21 	
	MODIFICATION DATE:    30-05-21*/
#include "Operations.h"
#include <iostream>
#include<stdlib.h>
using namespace std;
/**
 * @brief Construct a new Operations< H>:: Operations object
 * 
 * @tparam H 
 */
template<typename H>
Operations<H>::Operations()
{
}
/**
 * @brief Set the memory space to 0
 * 
 * @tparam H 
 * @param vect 
 */
template<typename H>
void Operations<H>::encerar(H vect[10] ) {
	for (int i = 0; i < 10; i++) {
		vect[i] = 0;
	}
}
/**
 * @brief Generate a random number from 0 to 10
 * 
 * @tparam H 
 * @param vect 
 */
template<typename H>
void Operations<H>::generar(H vect[10]) {
	for (int i = 0; i < 10; i++) {
		vect[i] = rand() % 11;
	}
}
/**
 * @brief Calculate the average
 * 
 * @tparam H 
 * @param vect 
 * @return float 
 */
template<typename H>
float Operations<H>::procesar(H vect[10]) {
	float promedio = 0.0f;
	for (int i = 0; i < 10; i++) {
		promedio += vect[i];
	}
	return promedio / 10.0f;
}
/**
 * @brief Print the random numbers
 * 
 * @tparam H 
 * @param vect 
 */
template<typename H>
void Operations<H>::imprimir(H vect[10]) {
	for (int i = 0; i < 10; i++) {
		cout << "Vector [" << i << "]" << " = " << vect[i] << endl;
	}
}
