#if !defined(__Class_Diagram_1_Persona_h)
#define __Class_Diagram_1_Persona_h
#include <iostream>
//#include <String.h>
using namespace std;
class Persona{
    private:
        string nombre;
        string apellido;
        string correo;
        string CI;
        string telefono;
        int edad;
    public:
        Persona(string, string, string, int, string, string);
        Persona()=default;

        string get_nombre();
        void set_nombre(string);

        string get_apellido();
        void set_apellido(string);

        string get_correo();
        void set_correo(string);

        string get_CI();
        void set_CI(string);

        string get_telefono();
        void set_telefono(string);

        int get_edad();
        void set_edad(int);
};
#endif