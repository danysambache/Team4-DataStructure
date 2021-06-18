/*  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERIA DE SOFTWARE

    AUTORES:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
                RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
                ALEXANDER MAILA - jamaila@espe.edu.ec
                JIMMY SIMBANA - jasimbana14@espe.edu.ec
                DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)

    ENUNCIADO: GENERAR UN CUADRO LATINO, UTILIZANDO MEMORIA DINAMICA Y CLASES

    FECHA DE CREACION:        04-06-21
    FECHA DE MODIFICACION:    06-06-21*/
#include "Matriz.h"
/**
 * @brief Retorna Matriz
 * 
 * @return int** 
 */
int **Matriz::getMatriz(void)
{
   return matriz;
}
/**
 * @brief Reasigna una matriz
 * 
 * @param matrix 
 */
void Matriz::setMatriz(int **matrix)
{
   matriz = matrix;
}
/**
 * @brief Contruye un nuevo objeto
 * 
 * @param _matriz 
 */
Matriz::Matriz(int **_matriz)
{
   this->matriz=_matriz;
}
/**
 * @brief Construye un nuevo objeto
 * 
 */
Matriz::Matriz(){	
}
