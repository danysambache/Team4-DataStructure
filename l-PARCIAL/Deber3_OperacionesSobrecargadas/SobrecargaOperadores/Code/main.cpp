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
#include "Data.cpp"
#include "Operations.cpp"
#include <iostream>
using namespace std;
main(){
	float value_1;
	float value_2;
	Data <float> d;
	cout<<"ENTER THE FIRST NUMBER: "<<endl;
	cin>>value_1;
	d.setData(value_1);
	cout<<"ENTER THE SECOND NUMBER: "<<endl;
	cin>>value_2;
	d.setValue(value_2);
	Operations <float> op;	
	cout<<endl;
	cout<<"********"<<endl;
	cout<<"Add: "<<op.operator +(d)<<endl;
	cout<<"Subtract: "<<op.operator -(d)<<endl;
	cout<<"Multiply: "<<op.operator *(d)<<endl<<endl;		
	cout<<"********"<<endl;
	cout<<"Factorial: "<<op.operator |(d)<<endl;
	cout<<"Percentage Add: "<<op.operator %(d)<<endl;
	cout<<"Power: "<<op.operator ^(d)<<endl<<endl;		
	cout<<"********"<<endl;
	cout<<"Pitagora theorem: "<<op.operator <(d)<<endl;
	cout<<"Square root: "<<op.operator >(d)<<endl;
	cout<<"Rhombus area: "<<op.operator =(d)<<endl<<endl;	
	cout<<"********"<<endl;
	cout<<"MCM: "<<op.operator /=(d)<<endl;
	cout<<"Area Ball: "<<op.operator *=(d)<<endl;
	cout<<"Area Triangle: "<<op.operator +=(d)<<endl<<endl;		
	cout<<"********"<<endl;
	cout<<"Sen : "<<op.operator -=(d)<<endl;
	cout<<"Sum of series squares : "<<op.operator ^=(d)<<endl;
	cout<<"Farenheit: "<<op.operator |=(d)<<endl;	
}
