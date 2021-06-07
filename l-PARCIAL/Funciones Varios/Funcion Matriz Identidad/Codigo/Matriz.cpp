/*  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERIA DE SOFTWARE

    AUTORES:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
                RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
                ALEXANDER MAILA - jamaila@espe.edu.ec
                JIMMY SIMBANA - jasimbana14@espe.edu.ec
                DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)

    ENUNCIADO: REALIZAR UN PROGRAMA QUE PERMITA MULTIPLICAR DOS MATRICES, MEDIANTE EL MANEJO
    DE MEMORIA DINÃMICA. UTILIZANDO CLASES.

    FECHA DE CREACION:        02-06-21
    FECHA DE MODIFICACION:    02-06-21*/
#include "Matriz.h"
/**
 * @brief Esta funciÃ³n retorna la variable matriz
 * 
 * @return int** 
 */
int **Matriz::getMatriz(void)
{
   return matriz;
}
/**
 * @brief Esta funciÃ³n reasigna la variable Matriz
 * 
 * @param matrix 
 */
void Matriz::setMatriz(int **matrix)
{
   matriz = matrix;
}
/**
 * @brief Construct a new Matriz:: Matriz object
 * 
 * @param _matriz 
 */
Matriz::Matriz(int **_matriz)
{
   this->matriz=_matriz;
}
/**
 * @brief Construct a new Matriz:: Matriz object
 * 
 */
Matriz::Matriz(){	
}
/*Matriz::~Matriz()
{
   // TODO : implement
}*/
