#include <iostream>
#include "CuadroMagico.h"
#include "Operaciones.h"

using namespace std;

int main()
{
    CuadroMagico cuadro1(4);
    Operaciones operar;
    operar.resolverCuadro(cuadro1);
    system("pause");
    return 0;
}
