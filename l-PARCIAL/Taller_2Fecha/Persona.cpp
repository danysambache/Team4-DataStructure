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
#include "Persona.h"
////////////////////////////////////////////////////////////////////////
// Name:       Persona::getApellido()
// Purpose:    Implementation of Persona::getApellido()
// Return:     std::string
////////////////////////////////////////////////////////////////////////
std::string Persona::getApellido(void)
{
   return apellido;
}
////////////////////////////////////////////////////////////////////////
// Name:       Persona::setApellido(std::string newApellido)
// Purpose:    Implementation of Persona::setApellido()
// Parameters:
// - newApellido
// Return:     void
////////////////////////////////////////////////////////////////////////
void Persona::setApellido(std::string newApellido)
{
   apellido = newApellido;
}
////////////////////////////////////////////////////////////////////////
// Name:       Persona::getNombre()
// Purpose:    Implementation of Persona::getNombre()
// Return:     std::string
////////////////////////////////////////////////////////////////////////
std::string Persona::getNombre(void)
{
   return nombre;
}
////////////////////////////////////////////////////////////////////////
// Name:       Persona::setNombre(std::string newNombre)
// Purpose:    Implementation of Persona::setNombre()
// Parameters:
// - newNombre
// Return:     void
////////////////////////////////////////////////////////////////////////
void Persona::setNombre(std::string newNombre)
{
   nombre = newNombre;
}
////////////////////////////////////////////////////////////////////////
// Name:       Persona::getCedula()
// Purpose:    Implementation of Persona::getCedula()
// Return:     std::string
////////////////////////////////////////////////////////////////////////
std::string Persona::getCedula(void)
{
   return cedula;
}
////////////////////////////////////////////////////////////////////////
// Name:       Persona::setCedula(std::string newCedula)
// Purpose:    Implementation of Persona::setCedula()
// Parameters:
// - newCedula
// Return:     void
////////////////////////////////////////////////////////////////////////
void Persona::setCedula(std::string newCedula)
{
   cedula = newCedula;
}
////////////////////////////////////////////////////////////////////////
// Name:       Persona::Persona(std::string nombre, std::string apellido, std::string cedula)
// Purpose:    Implementation of Persona::Persona()
// Parameters:
// - nombre
// - apellido
// - cedula
// Return:     
////////////////////////////////////////////////////////////////////////
Persona::Persona(std::string nombre, std::string apellido, std::string cedula)
{
   // TODO : implement
}
////////////////////////////////////////////////////////////////////////
// Name:       Persona::~Persona()
// Purpose:    Implementation of Persona::~Persona()
// Return:     
////////////////////////////////////////////////////////////////////////
Persona::~Persona()
{
   // TODO : implement
}
