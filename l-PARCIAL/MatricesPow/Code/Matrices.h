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
