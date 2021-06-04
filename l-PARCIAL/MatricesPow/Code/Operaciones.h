/*  UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    DEPARTAMENTO DE CIENCIAS DE LA COMPUTACIÓN
    INGENIERÍA DE SOFTWARE

    AUTORES:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
                RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
                ALEXANDER MAILA - jamaila@espe.edu.ec
                JIMMY SIMBAÃ‘A - jasimbana14@espe.edu.ec
                DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)

    STATEMENT:  IMPLEMENTAR LA FUNCION MATRIZ A LA N-ESIMA MEDIANTE PUNTEROS

    CREATION DATE:        02-06-21
    MODIFICATION DATE:    03-06-21*/
#if !defined(__Multiplicacion_Matrices_Operaciones_h)
#define __Multiplicacion_Matrices_Operaciones_h
class Operaciones
{
public:
	int **segmentar(int );
	void encerar(int **, int );
	void ingresar(int **, int );
	void calcular(int **, int **, int **, int, int );
	//void potenciaMatriz(int **, int **, int, int );
	void imprimir(int **, int );
protected:
private:
};
#endif
