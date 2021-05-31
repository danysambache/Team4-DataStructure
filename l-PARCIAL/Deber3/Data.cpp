/*	UNIVERSITY OF THE ARMED FORCES ESPE
	COMPUTER SCIENCE DEPARTMENT
    SOFTWARE ENGINEER
                
	AUTHORS:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALEXANDER MAILA - jamaila@espe.edu.ec
				JIMMY SIMBANA - jasimbana14@espe.edu.ec
				DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)
	
	STATEMENT: Generate an array of random numbers, using classes and templates				
				
	CREATION DATE:        28-05-21 	
	MODIFICATION DATE:    30-05-21*/
#include "Data.h"
#include <iostream>
/**
 * @brief Construct a new Data< T>:: Data object
 * 
 * @tparam T 
 * @param vect1 
 */
template<typename T>
Data<T>::Data(T vect1[10])
{
	for (int i = 0; i < 10; i++) {
		vect[i] = vect1[i];
	}
}
/**
 * @brief Destroy the Data< T>:: Data object
 * 
 * @tparam T 
 */
template<typename T>
Data<T>::~Data()
{
}
/**
 * @brief Get Method
 * 
 * @tparam T 
 * @return T* 
 */
template<typename T>
T *Data<T>::getVect() {
	return vect;
}
/**
 * @brief Set Method
 * 
 * @tparam T 
 * @param vect1 
 */
template<typename T>
void Data<T>::setVect(T vect1[10])
{
	for (int i = 0; i < 10; i++) {
		vect[i] = vect1[i];
	}
}
