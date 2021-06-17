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
/**
 * @brief This function obtains the factorial of a number
 * 
 * @tparam H 
 * @param info 
 * @return H 
 */
template<typename H>
H Operations<H>::operator |(Data <H> info){
	long int Resultado=1;
    long int Factorial=info.getValue();
    while(Factorial > 1) {
       Resultado *= Factorial;
       Factorial--;
    };
    return Resultado;
}
/**
 * @brief This function obtains the percentage of the sum of two numbers
 * 
 * @tparam H 
 * @param info 
 * @return H 
 */
 template<typename H>
 H Operations<H>::operator %(Data <H> info){
 	return(((info.getData()*10)/100)+((H(info.getValue()))*10)/100);
 }
/**
 * @brief This function gets the power of two numbers
 * 
 * @tparam H 
 * @param info 
 * @return H 
 */
 template<typename H>
 H Operations<H>::operator ^(Data <H> info){
 	long int answer=0, x=1;
 	long int base=info.getData();
 	long int expon=info.getValue();
 	while(x<expon){
 		if(answer<base){
 			answer = base*base;
		}else{
			answer = answer*base;
		}
		x++;
	}
 	return(answer);
 }
 /**
 * @brief This function obtains the Pythagorean theorem
 * 
 * @tparam H 
 * @param info 
 * @return H 
 */
 template<typename H>
 H Operations<H>::operator <(Data <H> info){
 	return (pow((info.getData()*info.getData())+(info.getValue()*info.getValue()),(0.5)));
 }
 /**
  * @brief This function returns the square root of a number
  * 
  * @tparam H 
  * @param info 
  * @return H 
  */
template<typename H>
 H Operations<H>::operator >(Data <H> info){
 	return(pow(info.getData(),0.5));
 }
 /**
  * @brief This function returns the area of ​​the rhombus
  * 
  * @tparam H 
  * @param info 
  * @return H 
  */
 template<typename H>
 H Operations<H>::operator =(Data <H> info){	
 	return((info.getData()*info.getValue())/2);
 }
 /**
  * @brief This function returns the mcm of two numbers
  * 
  * @tparam H 
  * @param info 
  * @return H 
  */
 template<typename H>
 H Operations<H>::operator /=(Data <H> info){
 	long int num1=info.getData();
 	long int num2=info.getValue();
 	long int a,b,res,mcm;
 	if(num1>num2){
		a=num1;
		b=num2;
	}else{
		a=num2;
		b=num1;
	}
	do{
		res=b;
		b=a%b;
		a=res;
	}while(b!=0);
 	mcm=num1*num2/res;
 	return (mcm);
 }
 /**
  * @brief This function returns the area of ​​the circle
  * 
  * @tparam H 
  * @param info 
  * @return H 
  */
 template <typename H>
 H Operations<H>::operator *=(Data <H> info){
 	long radio=info.getData();
 	long double pi=3.14151617;
 	return (pi*pow(radio,2));
 }
 /**
  * @brief This function returns the area of ​​the triangle
  * 
  * @tparam H 
  * @param info 
  * @return H 
  */
 template <typename H>
 H Operations<H>::operator +=(Data <H> info){
 	long int base=info.getData();
 	long int alt=info.getValue();
 	return ((base*alt)/2);
 }
 /**
  * @brief This function returns the sin function of a number
  * 
  * @tparam H 
  * @param info 
  * @return H 
  */
 template <typename H>
 H Operations<H>::operator -=(Data <H> info){
 	return (sin(info.getData()));
 }
 /**
  * @brief This function returns the sum of the squares of a number
  * 
  * @tparam H 
  * @param info 
  * @return H 
  */
  template <typename H>
 H Operations<H>::operator ^=(Data <H> info){
	long int add=0,squart;
	long int numb=info.getData();
	for(int i=1;i<=numb;i++){
		squart=i*i;
		add+=squart;
	}
	return (add);
 }
 /**
  * @brief This function performs the conversion from degrees Celsius to Fahrenheit
  * 
  * @tparam H 
  * @param info 
  * @return H 
  */
  template <typename H>
 H Operations<H>::operator |=(Data <H> info){
 	return((info.getData()*1.8)+32);
 }
