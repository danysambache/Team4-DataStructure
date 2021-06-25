/*UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
    DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERIA DE SOFTWARE

    AUTORES:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
                RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
                ALEXANDER MAILA - jamaila@espe.edu.ec
                JIMMY SIMBANA - jasimbana14@espe.edu.ec
                DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)

    ENUNCIADO: Generar una tabla de Amortización

    FECHA DE CREACION:        15-06-21
    FECHA DE MODIFICACION:    24-06-21*/
#include "Fecha.h"

class Prestamo
{
private:
    double montoTotal;
    double montoPagar;
    int plazo;
    double interesAnual;
    double interesMensual;
    double cuota;
    Fecha fechaInicio;

public:
    Prestamo() = default;
    double getMontoPagar();
    void setMontoPagar(double);

    int getPlazo();
    void setPlazo(int);

    double getinteresAnual();
    void setinteresAnual(double);

    double getinteresMensual();
    void setinteresMensual(double);

    double getCuota();
    void setCuota(double);

    double getmontoTotal();
    void setmontoTotal(double);


    Fecha getFechaInicio();
    void setFechaInicio(Fecha);
    
};