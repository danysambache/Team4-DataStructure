/*  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERIA DE SOFTWARE

    AUTORES:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
                RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
                ALEXANDER MAILA - jamaila@espe.edu.ec
                JIMMY SIMBANA - jasimbana14@espe.edu.ec
                DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)

    ENUNCIADO: Funcion TRIANGULO DE PASCAL.

    FECHA DE CREACION:        04-06-21
    FECHA DE MODIFICACION:    06-06-21*/
#include "Vector.h"
/**
 * @brief Esta funcion retorna la variable matriz
 * 
 * @return int* 
 */
int *Vector::getVector(void)
{
   return vector;
}
/**
 * @brief Esta funcion reasigna la variable Matriz
 * 
 * @param matrix 
 */
void Vector::setVector(int *vect)
{
   vector = vect;
}
/**
 * @brief Construct a new Matriz:: Matriz object
 * 
 * @param _matriz 
 */
Vector::Vector(int *_vect)
{
   this->vector=_vect;
}
/**
 * @brief Construct a new Matriz:: Matriz object
 * 
 */
Vector::Vector(){	
}
/*Vector::~Vector()
{
   // TODO : implement
}*/
