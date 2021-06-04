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
