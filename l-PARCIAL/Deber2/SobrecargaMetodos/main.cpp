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
#include"Operations.cpp"
#include"Data.cpp"
#include<iostream>
using namespace std;
int main(){
	Data data;
	int val_1;
	int val_2;
	float val_3;
	float val_4;	
	cout<<"Enter an int value: ";
	cin>>val_1;
	data.setVal_1(val_1);
	cout<<"Enter an int value: ";
	cin>>val_2;
	data.setVal_2(val_2);
	cout<<"Enter a float value: ";
	cin>>val_3;
	data.setVal_3(val_3);
	cout<<"Enter a float value: ";
	cin>>val_4;
	data.setVal_4(val_4);
	Operations ope;
	//Metodos
	cout<<endl<<"*************"<<endl;
	cout<<"Sum with two parameter: "<<ope.add(data.getval_1(),data.getval_2())<<endl;
	cout<<"Sum with three parameter: "<<ope.add(data.getval_3(),data.getval_1(),data.getval_4())<<endl;
	cout<<"Sum with four parameter: "<<ope.add(data.getval_1(),data.getval_3(),data.getval_2(),data.getval_4())<<endl<<endl;
	cout<<"*************"<<endl;
	cout<<"The subtract with a parameters is: "<<ope.subtract(data.getval_1())<<endl;
	cout<<"The subtract with two parameters is: "<<ope.subtract(data.getval_2(),data.getval_3())<<endl;
	cout<<"The subtract with three parameters is: "<<ope.subtract(data.getval_3(),data.getval_1(),data.getval_4())<<endl<<endl;
	cout<<"*************"<<endl;
	cout<<"The multiply with one parameters is: "<<ope.multiply(data.getval_2())<<endl;
	cout<<"The multiply with two parameters is: "<<ope.multiply(data.getval_2(),data.getval_3())<<endl;
	cout<<"The multiply with three parameters is: "<<ope.multiply(data.getval_3(),data.getval_1(),data.getval_4())<<endl<<endl;
	cout<<"*************"<<endl;
	cout<<"The greater number between "<<data.getval_1()<<" and "<<data.getval_2()<<" is: "<<ope.higher(data.getval_1(),data.getval_2())<<endl;
	cout<<"The greater number between "<<data.getval_1()<<", "<<data.getval_2()<<" and "<<int(data.getval_3())<<" is: "<<ope.higher(data.getval_1(),data.getval_2(),int(data.getval_3()))<<endl;
	cout<<"The greater number between "<<data.getval_1()<<", "<<data.getval_2()<<", "<<int(data.getval_3())<<" and "<<int(data.getval_4())<<" is: "<<ope.higher(data.getval_1(),data.getval_2(),int(data.getval_3()),int(data.getval_4()))<<endl<<endl;
	cout<<"*************"<<endl;	
	cout<<"The lesser number between "<<data.getval_1()<<" and "<<data.getval_2()<<" is: "<<ope.minor(data.getval_1(),data.getval_2())<<endl;
	cout<<"The lesser number between "<<data.getval_1()<<", "<<data.getval_2()<<" and "<<int(data.getval_3())<<" is: "<<ope.minor(data.getval_1(),data.getval_2(),int(data.getval_3()))<<endl;
	cout<<"The lesser number between "<<data.getval_1()<<", "<<data.getval_2()<<", "<<int(data.getval_3())<<" and "<<int(data.getval_4())<<" is: "<<ope.minor(data.getval_1(),data.getval_2(),int(data.getval_3()),int(data.getval_4()))<<endl;
}
