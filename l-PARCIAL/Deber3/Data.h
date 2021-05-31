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
//#pragma once
template<typename T>
class Data
{
public:
	Data()=default;
	Data(T vect[10]);
	~Data();
	T *getVect(void);
	void setVect(T vect[10]);
private:	
	T vect[10];
};
