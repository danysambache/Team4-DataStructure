#if !defined(__Class_Diagram_1_OPERACIONESPERSONA_H)
#define __Class_Diagram_1_OPERACIONESPERSONA_H
#include "Persona.h"
#include <stdio.h>
#include <stdlib.h>
class OperacionesPersona{
	
	public:
		OperacionesPersona() = default;
		Persona insertarDatos();
		void generarCorreo(Persona &persona);
};
#endif