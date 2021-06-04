/*  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    DEPARTAMENTO DE CIENCIAS DE LA COMPUTACIÓN
    INGENIERÍA DE SOFTWARE

    AUTORES:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
                RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
                ALEXANDER MAILA - jamaila@espe.edu.ec
                JIMMY SIMBAÃ‘A - jasimbana14@espe.edu.ec
                DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)

    STATEMENT: IMPLEMENTAR LA FUNCION MATRIZ A LA N-ESIMA MEDIANTE PUNTEROS

    CREATION DATE:        02-06-21
    MODIFICATION DATE:    03-06-21*/
#if !defined(__Multiplicacion_Matrices_Matrices_h)
#define __Multiplicacion_Matrices_Matrices_h
class Matrices
{
public:
   int **getMatriz(void);
   void setMatriz(int **);
   int getDim(void);
   void setDim(int);
   **Matrices();
   ~Matrices();
protected:
private:
   int **matriz;
   int dim;
};
#endif
