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
#if !defined(__Class_Diagram_1_Datos_h)
#define __Class_Diagram_1_Datos_h
template<typename T>
class Data
{
public:
	T getData(void);
	void setData(T);
	T getValue(void);
	void setValue(T);
    Data(T,T);
	Data();
protected:
private:
   T data;
   T value; 
};
#endif
