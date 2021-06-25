#ifndef FECHA_H
#define FECHA_H
class Fecha{
    private:
        int dia,mes,anio;
    public:
        Fecha(int,int,int);
        Fecha()=default;
        void set_dia(int);
        int get_dia();
        void set_mes(int);
        int get_mes();
        void set_anio(int);
        int get_anio();    
};
#endif