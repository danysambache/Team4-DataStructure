#include "Matriz.h"
void Matriz::setMatriz(int matrix[][3],int numFil){
	for(int i=0;i<numFil;i++){
		for(int j=0;j<3;j++){
			this->matriz[i][j]=matrix[i][j];
		}
	}
}
int* Matriz::getMatriz(){
	return *matriz;
}
