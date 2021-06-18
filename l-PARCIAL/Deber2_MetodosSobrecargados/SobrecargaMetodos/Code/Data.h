/*	UNIVERSITY OF THE ARMED FORCES ESPE
	COMPUTER SCIENCE DEPARTMENT
    SOFTWARE ENGINEER
                
	AUTHORS:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALEXANDER MAILA - jamaila@espe.edu.ec
				JIMMY SIMBANA - jasimbana14@espe.edu.ec
				DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)
	
	STATEMENT: It is required to overload 3 methods for each member of the group.				
				
	CREATION DATE:        27-05-21 	
	MODIFICATION DATE:    27-05-21*/
#if !defined(__Class_Diagram_1_Datos_h)
#define __Class_Diagram_1_Datos_h
class Data
{
public:
   int getval_1(void);
   void setVal_1(int);
   int getval_2(void);
   void setVal_2(int);
   float getval_3(void);
   void setVal_3(float);
   float getval_4(void);
   void setVal_4(float);
   Data(int,int,float,float);
   Data();
private:
   int  value_1;
   int value_2;
   float value_3;
   float  value_4;
};
#endif
