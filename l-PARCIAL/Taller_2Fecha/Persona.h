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
#include<iostream>
#if !defined(__DiagramClass_Fecha_Persona_h)
#define __DiagramClass_Fecha_Persona_h
class Fecha;
class Persona
{
public:
   std::string getApellido(void);
   void setApellido(std::string newApellido);
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getCedula(void);
   void setCedula(std::string newCedula);
   Fecha* getFecha();
   void setFecha(Fecha*);
   Persona()=default;
   ~Persona();
   Fecha* fecha;
protected:
private:
   std::string nombre;
   std::string cedula;
   std::string apellido;
};
#endif
