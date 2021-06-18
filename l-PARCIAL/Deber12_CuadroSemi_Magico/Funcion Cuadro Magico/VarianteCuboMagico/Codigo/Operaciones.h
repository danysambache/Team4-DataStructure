//#ifndef OPERACIONES_H
//#define OPERACIONES_H
//#pragma once
#include <iostream>
#include <queue>
#include "CuadroMagico.h"

class Operaciones
{
    private:
	int **matriz;
	int fila;
	int columna;
	bool hecho;
	std::queue<int> numeros;
public:
	void resolverCuadro(CuadroMagico);
	void inicializarMatriz(CuadroMagico);
	void encerarMatriz(CuadroMagico);
	void ubicarNumero(CuadroMagico);
	bool validarPosicion(CuadroMagico);
	void mostrarCuadro(CuadroMagico);
	bool cuadroValido(CuadroMagico);
	bool indiceYSumaValido(CuadroMagico, int, int);
	bool validarHorizontal(CuadroMagico, int);
	bool validarVertical(CuadroMagico, int);
	bool validarDiagonal1(CuadroMagico);
	bool validarDiagonal2(CuadroMagico);
	void sigPosicion(CuadroMagico);
	void antPosicion(CuadroMagico);
};

//#endif // OPERACIONES_H
