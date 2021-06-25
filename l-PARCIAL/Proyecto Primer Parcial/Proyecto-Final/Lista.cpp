/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERIA DE SOFTWARE

    AUTORES:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
                RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
                ALEXANDER MAILA - jamaila@espe.edu.ec
                JIMMY SIMBANA - jasimbana14@espe.edu.ec
                DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)

    ENUNCIADO: Generar una tabla de Amortización

    FECHA DE CREACION:        15-06-21
    FECHA DE MODIFICACION:    24-06-21*/
#include "Lista.h"
    /**
     * @brief Comprueba si la lista esta vacia
     * 
     * @return true 
     * @return false 
     */
	bool Lista::ListaVacia(){
		return(this->primero==NULL);
		}
    /**
     * @brief Construct a new Lista:: Lista object
     * 
     */
	Lista::Lista(){
			this->primero=NULL;
			this->actual=NULL;
		}
        /**
         * @brief Inserta un elemento a la lista por la cabeza
         * 
         * @param val 
         */
		void Lista::insertar(Persona _persona){
			Nodo *nuevo=new Nodo(_persona,NULL);
			if(ListaVacia()){
				this->primero=nuevo;	
			}else{
				this->actual->setNodo(nuevo);
			}
			this->actual=nuevo;
		}
        /**
         * @brief Inserta un elemento a la lista por la cola
         * 
         * @param val 
         */
		void Lista::insertarFinal(Persona _persona){
			Nodo *aux;
			Nodo *aux1;
			Nodo *aux2=new Nodo(_persona,NULL);
			aux=this->primero;
			if(ListaVacia()){
				this->primero=aux;	
			}else{
					while (aux != NULL)
        			{
		            aux1 = aux;
		            aux = aux->getNodo();
        			}
        			aux1->setNodo(aux2);
				}
			}
        /**
         * @brief Elimina un elemento especifico
         * 
         * @param val 
         */
		void Lista::borrarNodoEspe(Persona _persona){
			Nodo *aux_borrar;
			Nodo *anterior=NULL;
			aux_borrar=this->primero;
			while((aux_borrar!=NULL)&&(aux_borrar->getPersona().get_CI()!=_persona.get_CI())){
				anterior=aux_borrar;
				aux_borrar=aux_borrar->getNodo();
			}
			if(aux_borrar==NULL){
				cout<<"Elemento no existe"<<endl;
			}
			else if(anterior==NULL){
				this->primero=this->primero->getNodo();
				delete aux_borrar;
			}else{
				anterior->setNodo(aux_borrar->getNodo());
				delete aux_borrar;
			}
		}
		/**
		 * @brief Busca un valor en la lista
		 * 
		 * @param cedula 
		 * @return Nodo* 
		 */
		Nodo *Lista::buscarNodo(string cedula){
			Nodo *aux_borrar;
			Nodo *anterior=NULL;
			aux_borrar=this->primero;
			while((aux_borrar!=NULL)&&(aux_borrar->getPersona().get_CI()!=cedula)){
				anterior=aux_borrar;
				aux_borrar=aux_borrar->getNodo();
			}
			if(aux_borrar==NULL){
				cout<<"Elemento no existe"<<endl;
			}
			else{
				return aux_borrar;
			}
		}
		/**
		 * @brief Busca un valor en la lista
		 * 
		 * @param cedula 
		 * @return true 
		 * @return false 
		 */
		bool Lista::buscarBool(string cedula){
			Nodo *aux_borrar;
			Nodo *anterior=NULL;
			aux_borrar=this->primero;
			while((aux_borrar!=NULL)&&(aux_borrar->getPersona().get_CI()!=cedula)){
				anterior=aux_borrar;
				aux_borrar=aux_borrar->getNodo();
			}
			if(aux_borrar==NULL){
				return false;
			}
			else{
				return true;
			}
		}
		/**
		 * @brief Muestra elementos de lista
		 * 
		 */
		void Lista::mostrar(){
			Nodo *tmp=this->primero;
			while(tmp){
				cout<<tmp->getPersona().get_CI()<<"/"<<tmp->getPersona().get_nombre()<<"/"<<tmp->getPersona().get_apellido()<<"/"<<tmp->getPersona().get_edad()<<"->";
				tmp=tmp->getNodo();
			}
			cout<<"NULL\n";
		}