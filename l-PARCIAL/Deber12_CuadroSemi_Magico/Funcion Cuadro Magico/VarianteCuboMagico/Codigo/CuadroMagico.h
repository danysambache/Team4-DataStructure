#pragma once
#ifndef CUADROMAGICO_H
#define CUADROMAGICO_H
class CuadroMagico
{
    private:
	int tamano;
	int limiteCuadro;
	int numeroMagico;
public:
	CuadroMagico(int);
	CuadroMagico(int,int);
	int getTamano();
	void setTamano(int tamano);
	int getLimiteCuadro();
	void setLimiteCuadro(int limiteCuadro);
	int getNumeroMagico();
	void setNumeroMagico(int numeroMagico);
	bool numeroValido(void);
};
#endif // CUADROMAGICO_H
