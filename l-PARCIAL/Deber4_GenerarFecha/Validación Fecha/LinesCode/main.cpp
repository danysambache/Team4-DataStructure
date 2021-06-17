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

#include <iostream>
#include "Validate.h"
#include "Date.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Validate v;
	int num,op;
	cout<<"******************************"<<endl;
	cout<<"Choose your option: "<<endl;
	cout<<"1. Control your payment day's."<<endl;
	cout<<"2. Search the day with you pay the account."<<endl;
	cout<<"3. Exit."<<endl;
	cout<<"Enter your option: ";
	cin>>op;
	switch(op){
		case 1:
			cout<<"Enter the number with your control: "; cin>>num;
			v.printDate(num);
			cout<<endl;
			break;
		case 2:
			v.controlDate();
			cout<<endl;
			break;
		case 3:
			break;	
	}
	return 0;
}
