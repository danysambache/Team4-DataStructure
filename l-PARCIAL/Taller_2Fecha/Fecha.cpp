/*	UNIVERSITY OF THE ARMED FORCES ESPE
	COMPUTER SCIENCE DEPARTMENT
    SOFTWARE ENGINEERING
                
	AUTHORS:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALEXANDER MAILA - jamaila@espe.edu.ec
				JIMMY SIMBAÑA - jasimbana14@espe.edu.ec
				DANNY SAMBACHE - dasambache@espe.edu.ec (LEADER)
	
	STATEMENT: Make an association between the class person and date				
				
	CREATION DATE:        31-05-21 	
	MODIFICATION DATE:    31-05-21*/
#include "Fecha.h"
////////////////////////////////////////////////////////////////////////
// Name:       Fecha::Fecha(int _dia, int _mes, int _anio)
// Purpose:    Implementation of Fecha::Fecha()
// Parameters:
// - _dia
// - _mes
// - _anio
// Return:     
///////////////////////////////////////////////////////////////////////
Fecha::Fecha(int _dia, int _mes, int _anio)
{
   // TODO : implement
}
////////////////////////////////////////////////////////////////////////
// Name:       Fecha::~Fecha()
// Purpose:    Implementation of Fecha::~Fecha()
// Return:     
////////////////////////////////////////////////////////////////////////
Fecha::~Fecha()
{
   // TODO : implement
}
////////////////////////////////////////////////////////////////////////
// Name:       Fecha::getDia()
// Purpose:    Implementation of Fecha::getDia()
// Return:     int
////////////////////////////////////////////////////////////////////////
int Fecha::getDia(void)
{
   return dia;
}
////////////////////////////////////////////////////////////////////////
// Name:       Fecha::setDia(int newDia)
// Purpose:    Implementation of Fecha::setDia()
// Parameters:
// - newDia
// Return:     void
////////////////////////////////////////////////////////////////////////
void Fecha::setDia(int newDia)
{
   dia = newDia;
}
////////////////////////////////////////////////////////////////////////
// Name:       Fecha::getMes()
// Purpose:    Implementation of Fecha::getMes()
// Return:     int
////////////////////////////////////////////////////////////////////////
int Fecha::getMes(void)
{
   return mes;
}
////////////////////////////////////////////////////////////////////////
// Name:       Fecha::setMes(int newMes)
// Purpose:    Implementation of Fecha::setMes()
// Parameters:
// - newMes
// Return:     void
////////////////////////////////////////////////////////////////////////
void Fecha::setMes(int newMes)
{
   mes = newMes;
}
////////////////////////////////////////////////////////////////////////
// Name:       Fecha::getAnio()
// Purpose:    Implementation of Fecha::getAnio()
// Return:     int
///////////////////////////////////////////////////////////////////////
int Fecha::getAnio(void)
{
   return anio;
}
////////////////////////////////////////////////////////////////////////
// Name:       Fecha::setAnio(int newAnio)
// Purpose:    Implementation of Fecha::setAnio()
// Parameters:
// - newAnio
// Return:     void
////////////////////////////////////////////////////////////////////////
void Fecha::setAnio(int newAnio)
{
   anio = newAnio;
}
