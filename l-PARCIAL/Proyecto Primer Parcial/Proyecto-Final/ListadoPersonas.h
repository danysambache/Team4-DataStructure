#if !defined(__Class_Diagram_1_LISTADOPERSONAS_H)
#define __Class_Diagram_1_LISTADOPERSONAS_H
#include "Lista.h"
#include <string.h>
#include <iterator>
#include <iostream>
#include <sstream>
class ListadoPersonas{
    public:
        ListadoPersonas()=default;
        void agregarArchivo(Persona);
        Lista leerArchivo();
};
#endif