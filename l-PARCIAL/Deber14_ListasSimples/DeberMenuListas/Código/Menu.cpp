/*  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERIA DE SOFTWARE

    AUTORES:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
                RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
                ALEXANDER MAILA - jamaila@espe.edu.ec
                JIMMY SIMBANA - jasimbana14@espe.edu.ec
                DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)

    ENUNCIADO: GENERAR UN MENU GRAFICO CON LAS FUNCIONALIDADES DE LISTAS SIMPLES

    FECHA DE CREACION:        09-06-21
    FECHA DE MODIFICACION:    10-06-21*/
#include "Menu.h"
/**
 * @brief Asigna un espacio de coordenadas en X y Y
 * 
 * @param x 
 * @param y 
 */
void Menu::gotoxy(int x,int y){
		HANDLE hcon;
		hcon=GetStdHandle(STD_OUTPUT_HANDLE);
		COORD dwPos;
		dwPos.X=x;
		dwPos.Y=y;
		SetConsoleCursorPosition(hcon,dwPos);
}
/**
 * @brief Genera el menu
 * 
 * @param titulo 
 * @param opcion 
 * @param numOpt 
 * @return int 
 */
int Menu::genMenu(string titulo, char **opcion, int numOpt){
	int select=1,tecla;
	bool bandera=true;
	do{
		system("cls");
		for(int i=35;i<87;i++){
			gotoxy(i,9);cout<<"*";
		}
		for(int i=35;i<87;i++){
			gotoxy(i,20);cout<<"*";
		}
		for(int i=10;i<20;i++){
			gotoxy(35,i);cout<<"*";
		}
		for(int i=10;i<20;i++){
			gotoxy(86,i);cout<<"*";
		}
		gotoxy(50,10); cout<<titulo;
		gotoxy(40,11 + select); cout<<"=>";
		
		for(int i=0;i<numOpt;i++){
			gotoxy(45,12 + i); cout<< (i+1) << "." <<*(opcion+i);
		}
		
		do{
			tecla=getch();
		}while(tecla!=72&&tecla!=80&&tecla!=13);
		switch(tecla){
			case 72:
				select--;
				if(select<1){
					select=numOpt;
				}
				break;
			case 80:
				select++;
				if(select>numOpt){
					select=1;
				}
				break;
			case 13:
				bandera=false;
				break;
		}
	
	}while(bandera);
	return select;
}
/**
 * @brief Muestra el menu
 * 
 * @param sel 
 * @param list 
 */
void Menu::llamar_menu(int sel,Lista &list){
	int num,opcion;
	char** opc_sino=(char**)calloc(2, sizeof(char*));
	*(opc_sino+0)="SI";
	*(opc_sino+1)="NO";
	switch(sel){
		case 1:
			do{
				system("cls");
				for(int i=35;i<87;i++){
				gotoxy(i,9);cout<<"*";
				}
				for(int i=35;i<87;i++){
					gotoxy(i,20);cout<<"*";
				}
				for(int i=10;i<20;i++){
					gotoxy(35,i);cout<<"*";
				}
				for(int i=10;i<20;i++){
					gotoxy(86,i);cout<<"*";
				}
				cout<<endl;
				gotoxy(50,10);
				cout<<"Inserte un numero: "<<endl;
				gotoxy(50,11);
				cin>>num;
				list.insertar(num);
				opcion = genMenu("¿Desea ingresar otro numero?", opc_sino, 2);
			}while(opcion != 2);
			break;
		case 2:
			do{
				system("cls");
				for(int i=35;i<87;i++){
				gotoxy(i,9);cout<<"*";
				}
				for(int i=35;i<87;i++){
					gotoxy(i,20);cout<<"*";
				}
				for(int i=10;i<20;i++){
					gotoxy(35,i);cout<<"*";
				}
				for(int i=10;i<20;i++){
					gotoxy(86,i);cout<<"*";
				}
				cout<<endl;
				gotoxy(50,10);
				cout<<"Inserte un numero: "<<endl;
				gotoxy(50,11);
				cin>>num;
				list.insertarFinal(num);
				opcion = genMenu("¿ Desea volver a ingresar ?", opc_sino, 2);
			}while(opcion != 2);
			break;
		
		case 3:
				system("cls");
				for(int i=35;i<87;i++){
				gotoxy(i,9);cout<<"*";
				}
				for(int i=35;i<87;i++){
					gotoxy(i,20);cout<<"*";
				}
				for(int i=10;i<20;i++){
					gotoxy(35,i);cout<<"*";
				}
				for(int i=10;i<20;i++){
					gotoxy(86,i);cout<<"*";
				}
				cout<<endl;
				gotoxy(47,13);
				cout<<"La lista contiene los terminos: "<<endl;
				gotoxy(47,15);
				list.mostrar();	
				getch();
			break;
		
		case 4:
				system("cls");
				for(int i=35;i<87;i++){
				gotoxy(i,9);cout<<"*";
				}
				for(int i=35;i<87;i++){
					gotoxy(i,20);cout<<"*";
				}
				for(int i=10;i<20;i++){
					gotoxy(35,i);cout<<"*";
				}
				for(int i=10;i<20;i++){
					gotoxy(86,i);cout<<"*";
				}
				cout<<endl;
				gotoxy(47,10);
				cout<<"Ingrese el valor a eliminar:"<<endl;
				gotoxy(47,11);
				cin>>num;
				list.borrarNodoEspe(num);
			break;
			
		case 5:
			system("cls");
				for(int i=35;i<87;i++){
				gotoxy(i,9);cout<<"*";
				}
				for(int i=35;i<87;i++){
					gotoxy(i,20);cout<<"*";
				}
				for(int i=10;i<20;i++){
					gotoxy(35,i);cout<<"*";
				}
				for(int i=10;i<20;i++){
					gotoxy(86,i);cout<<"*";
				}
			cout<<endl;
			gotoxy(42,11);
			cout<<"Lista antes de Eliminar Primer Elemento: "<<endl;
			gotoxy(42,13);
			list.mostrar();
			list.borrarNodoPrimero();
			cout<<endl;
			gotoxy(42,15);
			cout<<"Lista después de Eliminar Primer Elemento: "<<endl;	
			gotoxy(42,17);
			list.mostrar();
			getch();
			break;
			
		case 6:
			system("cls");
				for(int i=35;i<87;i++){
				gotoxy(i,9);cout<<"*";
				}
				for(int i=35;i<87;i++){
					gotoxy(i,20);cout<<"*";
				}
				for(int i=10;i<20;i++){
					gotoxy(35,i);cout<<"*";
				}
				for(int i=10;i<20;i++){
					gotoxy(86,i);cout<<"*";
				}
			cout<<endl;
			gotoxy(42,11);
			cout<<"Lista antes de Eliminar Ultimo Elemento: "<<endl;
			gotoxy(42,13);
			list.mostrar();
			list.borrarNodoCola();
			cout<<endl;
			gotoxy(42,15);
			cout<<"Lista despues de Eliminar Ultimo Elemento: "<<endl;
			gotoxy(42,17);	
			list.mostrar();
			getch();
			break;
	}
}



