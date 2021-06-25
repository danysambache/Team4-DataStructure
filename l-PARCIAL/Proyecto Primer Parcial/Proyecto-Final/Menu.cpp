#include "Menu.h"
void Menu::gotoxy(int x,int y){
		HANDLE hcon;
		hcon=GetStdHandle(STD_OUTPUT_HANDLE);
		COORD dwPos;
		dwPos.X=x;
		dwPos.Y=y;
		SetConsoleCursorPosition(hcon,dwPos);
}
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
void Menu::llamar_menu(int sel){
	Lista list;
	Fecha *fechas;
    string telefono,cedula;
	int dia,mes,anio;
	double valorPrestamo,tasaInteres;
	double plazo;
	Fecha fecha;
	Prestamo prestamo;
	OperacionesCredito opeCredito;
    OperacionesPersona opePersona;
	OperacionesFecha opeFecha;
    ListadoPersonas lp;
	int num,opcion;
	Nodo *cedulaBusq;
	Validar v;
	char** opc_sino=(char**)calloc(2, sizeof(char*));
	*(opc_sino+0)="SI";
	*(opc_sino+1)="NO";
	switch(sel){
		case 1:
			do{
				system("CLS");
				list=lp.leerArchivo();
                Persona persona;
                cout<<"\n\n";
                persona.set_nombre(v.validarLetras("Nombre: ", 15,false));
                cout<<endl;
                persona.set_apellido(v.validarLetras("Apellido: ", 20,false));
                cout<<endl;
				cout<<"FECHA DE NACIMIENTO"<<endl;
				do{
				cout<<"Ingrese anio: "; fflush(stdout); 
				int anio=stoi(v.validarNumeros("",10));
				cout<<endl;
				fecha.set_anio(anio);
				cout<<"Ingrese el mes: "; fflush(stdout);
				int mes=stoi(v.validarNumeros("",10));
				cout<<endl;
				fecha.set_mes(mes);
				cout<<"Ingrese el dia: "; fflush(stdout);
				int dia=stoi(v.validarNumeros("",10));
				cout<<endl;
				fecha.set_dia(dia); 
				}while(opeFecha.validarFecha(fecha)==false);
				persona.set_edad(2021-anio);
				do{
					persona.set_CI(v.validarCedula());
				}while(list.buscarBool(persona.get_CI()));
                opePersona.generarCorreo(persona);
                cout<<endl;
                cout<<"Ingrese su Número Telefónico: "<<endl;
                string telefono=v.validarNumeros("",10);
                persona.set_telefono(telefono);
                lp.agregarArchivo(persona);
				opcion = genMenu("¿Desea ingresar otra persona?", opc_sino, 2);
			}while(opcion != 2);
			break;
		case 2:
			do{
				system("CLS");
				list=lp.leerArchivo();
				cout<<"Ingrese el numero de cedula: "<<endl;
				cedula=v.validarCedula();
                cout<<endl;
				}while(list.buscarBool(cedula)==false);
			cedulaBusq=list.buscarNodo(cedula);	
			cout<<"Ingrese el valor total del prestamo: "<<endl;
			valorPrestamo=stoi(v.validarNumeros("",10));
			cout<<endl;
			cout<<"Ingrese la tasa de interes: "<<endl;
			tasaInteres=stoi(v.validarNumeros("",10));
			cout<<endl;
			cout<<"Ingrese el plazo de pago: "<<endl;
			plazo=stoi(v.validarNumeros("",10));
			cout<<endl;
			do{
			cout<<"Ingrese anio: "; fflush(stdout); 
			int anio=stoi(v.validarNumeros("",10));
			cout<<endl;
			fecha.set_anio(anio);
			cout<<"Ingrese el mes: "; fflush(stdout);
			int mes=stoi(v.validarNumeros("",10));
			cout<<endl;
			fecha.set_mes(mes);
			cout<<"Ingrese el dia: "; fflush(stdout);
			int dia=stoi(v.validarNumeros("",10));
			cout<<endl;
			fecha.set_dia(dia); 
			}while(opeFecha.validarFecha(fecha)==false);
			prestamo.setMontoPagar(valorPrestamo);
			prestamo.setmontoTotal(valorPrestamo);
			prestamo.setPlazo(plazo);
			prestamo.setinteresAnual(tasaInteres);
			prestamo.setFechaInicio(fecha);
			opeCredito.calcularInteresMensual(prestamo);
			fechas=opeFecha.generarFecha(fecha,plazo);
			cout<<endl;
			cout<<"  CI		Nombre		Apellido		Edad		Correo"<<endl;
			cout<<cedulaBusq->getPersona().get_CI();
			cout<<"	  "<<cedulaBusq->getPersona().get_nombre();
			cout<<"		  "<<cedulaBusq->getPersona().get_apellido();
			cout<<"			   "<<cedulaBusq->getPersona().get_edad();
			cout<<"	 "<<cedulaBusq->getPersona().get_correo();
			cout<<endl;
			cout<<"FECHA DE INICIO DE PAGO"<<endl;
			for(int i=0;i<plazo;i++){
				cout<<endl;
				cout<<"Fecha Pago: "<<(fechas+i)->get_dia()<<"/"<<(fechas+i)->get_mes()<<"/"<<(fechas+i)->get_anio()<<endl;
				opeCredito.calcularCuota(prestamo);
			}
			getch();
			break;
		case 3:
			system("CLS");
			list=lp.leerArchivo();
			list.mostrar();
			getch();
			break;
		case 4:
			system(0);
	}
}


