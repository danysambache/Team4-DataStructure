/*  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    DEPARTAMENTO DE CIENCIAS DE LA COMPUTACIÓN
    INGENIERÍA DE SOFTWARE

    AUTORES:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
                RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
                ALEXANDER MAILA - jamaila@espe.edu.ec
                JIMMY SIMBANA - jasimbana14@espe.edu.ec
                DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)

    ENUNCIADO:  IMPLEMENTAR LA FUNCION MATRIZ A LA N-ESIMA MEDIANTE PUNTEROS

    FECHA DE CREACIÓN:        02-06-21
    FECHA DE MODIFICACIÓN:    03-06-21*/
#include "Matrices.h"
/**
 * @brief Devuelve la matriz
 * 
 * @return int** 
 */
int **Matrices::getMatriz(void)
{
   return matriz;
}
/**
 * @brief Reescribe la matriz
 * 
 * @param newMatriz 
 */
void Matrices::setMatriz(int **newMatriz)
{
   matriz = newMatriz;
}
/**
 * @brief Devuelve la dimension
 * 
 * @return int 
 */
int Matrices::getDim(void)
{
   return dim;
}
/**
 * @brief Reescribe la dimension
 * 
 * @param newDim 
 */
void Matrices::setDim(int newDim)
{
   dim = newDim;
}
/**
 * @brief Constructor
 * 
 */
**Matrices::Matrices()
{
}
/**
 * @brief Desctructor:: Matrices object
 * 
 */
Matrices::~Matrices()
{
   // TODO : implement
}
