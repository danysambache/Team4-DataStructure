/*	UNIVERSITY OF THE ARMED FORCES ESPE
	COMPUTER SCIENCE DEPARTMENT
    SOFTWARE ENGINEER
                
	AUTHORS:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALEXANDER MAILA - jamaila@espe.edu.ec
				JIMMY SIMBAÑA - jasimbana14@espe.edu.ec
				DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)
	
	STATEMENT: Perform multiplication of two matrices, using classes.				
				
	CREATION DATE:        31-05-21 	
	MODIFICATION DATE:    1-06-21*/
#include <iostream>
#include "Operaciones.cpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
		int matriz1[3][3],matriz2[3][3],matrizR[3][3];
		int val;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cout<<"ingrese el valor "<<i<<" "<<j<<" :"<<endl;
				cin>>val;
				matriz1[i][j]=val;
			};
		};
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cout<<"ingrese el valor "<<i<<" "<<j<<" para 2da matriz: "<<endl;
				cin>>val;
				matriz2[i][j]=val;
			};
		};
	Matriz m1(matriz1);
	Matriz m2(matriz2);
	Operaciones operacion(m1,m2);
	operacion.multiplicar();
	return 0;
}
