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