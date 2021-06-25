#include "ListadoPersonas.h"
#include<fstream>
#include <sstream>
void ListadoPersonas::agregarArchivo(Persona persona){
    ofstream archivo;
    archivo.open("Personas.txt",ios::app);
    if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
    archivo<<persona.get_CI()<<"\n"<<persona.get_nombre()<<"\n"<<persona.get_apellido()<<"\n"<<persona.get_edad()<<"\n"<<persona.get_correo()<<"\n"<<persona.get_telefono()<<"\n"<<endl;
    archivo.close();
}
Lista ListadoPersonas::leerArchivo(){
    int i=0;
    ifstream archivo; 
    string texto; 
    Lista list;
    archivo.open("Personas.txt",ios::in);
    Persona persona;
     if(archivo.fail()){
        return list;
    }
    while(!archivo.eof()){
        i++;
        getline(archivo,texto);
        switch(i){
            case 1:
                    persona.set_CI(texto);
                    break;
            case 2:
                    persona.set_nombre(texto);
                    break;
            case 3:  
                    persona.set_apellido(texto);
                    break;
            case 4:
                        int edad;
                        istringstream(texto)>>edad; 
                    persona.set_edad(edad);
                    break;
            case 5:
                    persona.set_correo(texto);
                    break;
            case 6:
                    persona.set_telefono(texto);
                    break;
             case 7:
             list.insertar(persona);
             i=0;
             break;

        }
    }
    archivo.close();
    return list;
}
