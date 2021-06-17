#include "CuadroMagico.h"
#include <iostream>

CuadroMagico::CuadroMagico(int tamano) {
	this->tamano = tamano;
	this->limiteCuadro = tamano * tamano;
	this->numeroMagico = tamano * (limiteCuadro + 1) / 2;
}

CuadroMagico::CuadroMagico(int tamano, int numeroMagic) {
	this->tamano = tamano;
	this->limiteCuadro = tamano * tamano;
	this->numeroMagico = numeroMagic;
}

int CuadroMagico::getTamano() {
	return this->tamano;
}

void CuadroMagico::setTamano(int tamano) {
	this->tamano = tamano;
}

int CuadroMagico::getLimiteCuadro() {
	return this->limiteCuadro;
}

void CuadroMagico::setLimiteCuadro(int limiteCuadro) {
	this->limiteCuadro = limiteCuadro;
}

int CuadroMagico::getNumeroMagico() {
	return this->numeroMagico;
}

void CuadroMagico::setNumeroMagico(int numeroMagico) {
	this->numeroMagico = numeroMagico;
}

bool CuadroMagico::numeroValido() {
	return numeroMagico == this->tamano * (this->limiteCuadro + 1) / 2;
}
