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
#if !defined(__DiagramClassMatrizDinamica_Matriz_h)
#define __DiagramClassMatrizDinamica_Matriz_h
class Matriz
{
public:
   int **getMatriz(void);
   void setMatriz(int**);
   Matriz(int**);
   Matriz();
protected:
private:
   int **matriz;
};
#endif
