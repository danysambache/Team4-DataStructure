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
#if !defined(__DiagramClass_Fecha_Fecha_h)
#define __DiagramClass_Fecha_Fecha_h
class Fecha
{
public:
   Fecha(int _dia, int _mes, int _anio);
   ~Fecha();
   int getDia(void);
   void setDia(int newDia);
   int getMes(void);
   void setMes(int newMes);
   int getAnio(void);
   void setAnio(int newAnio);
protected:
private:
   int dia;
   int mes;
   int anio;
};
#endif
