/*	UNIVERSITY OF THE ARMED FORCES ESPE
	COMPUTER SCIENCE DEPARTMENT
    SOFTWARE ENGINEER
                
	AUTHORS:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALEXANDER MAILA - jamaila@espe.edu.ec
				JIMMY SIMBAÑA - jasimbana14@espe.edu.ec
				DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)
	
	STATEMENT: Generate payment dates by number of installments. Using classes.				
				
	CREATION DATE:        31-05-21 	
	MODIFICATION DATE:    1-06-21*/

#include "Date.h"

/**
 * @brief Construct a new Date< T>:: Date object
 * 
 * @tparam T 
 */
template<typename T>
Date<T>::Date()
{
}

/**
 * @brief Destroy the Date< T>:: Date object
 * 
 * @tparam T 
 */
template<typename T>
Date<T>::~Date()
{
   // TODO : implement
}

/**
 * @brief Return day
 * 
 * @tparam T 
 * @return T 
 */
template<typename T>
T Date<T>::getDay(void)
{
   return day;
}

/**
 * @brief Set day
 * 
 * @tparam T 
 * @param newDay 
 */
template<typename T>
void Date<T>::setDay(T newDay)
{
   day = newDay;
}

/**
 * @brief Return month
 * 
 * @tparam T 
 * @return T 
 */
template<typename T>
T Date<T>::getMonth(void)
{
   return month;
}

/**
 * @brief Set month
 * 
 * @tparam T 
 * @param newMonth 
 */
template<typename T>
void Date<T>::setMonth(T newMonth)
{
   month = newMonth;
}

/**
 * @brief Return year
 * 
 * @tparam T 
 * @return T 
 */
template<typename T>
T Date<T>::getYear(void)
{
   return year;
}

/**
 * @brief Set year
 * 
 * @tparam T 
 * @param newYear 
 */
template<typename T>
void Date<T>::setYear(T newYear)
{
   year = newYear;
}
