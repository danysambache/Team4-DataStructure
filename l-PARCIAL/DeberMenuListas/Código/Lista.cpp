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
		void Lista::insertar(int val){
			Nodo *nuevo=new Nodo(val,NULL);
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
		void Lista::insertarFinal(int val){
			Nodo *nuevo=new Nodo(val,NULL);
			if(ListaVacia()){
				this->primero=nuevo;	
			}else{
				Nodo *puntero=this->primero;
				while(puntero->getNodo()){
					puntero=puntero->getNodo();	
				}
				puntero->setNodo(nuevo);
			}
		}
        /**
         * @brief Elimina un elemento especifico
         * 
         * @param val 
         */
		void Lista::borrarNodoEspe(int val){
			Nodo *aux_borrar;
			Nodo *anterior=NULL;
			aux_borrar=this->primero;
			while((aux_borrar!=NULL)&&(aux_borrar->getValor()!=val)){
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
         * @brief Elimina el ultimo elemento de la lista
         * 
         */
		void Lista::borrarNodoCola(){
			if(!ListaVacia()){
				Nodo *tmp;
				tmp=this->primero;
				while((tmp->getNodo())->getNodo()!=NULL){
					tmp=tmp->getNodo();
				}
				free(tmp->getNodo());
				tmp->setNodo(NULL);
			}
		}
        /**
         * @brief Elimina el primer elemento de la lista
         * 
         */
		void Lista::borrarNodoPrimero(){
			if(!ListaVacia()){
				Nodo *tmp;
				tmp=this->primero;
				this->primero=this->primero->getNodo();
				delete(tmp);
			}
		}
        /**
         * @brief Imprime la lista
         * 
         */
		void Lista::mostrar(){
			Nodo *tmp=this->primero;
			while(tmp){
				cout<<tmp->getValor()<<"->";
				tmp=tmp->getNodo();
			}
			cout<<"NULL\n";
		}
