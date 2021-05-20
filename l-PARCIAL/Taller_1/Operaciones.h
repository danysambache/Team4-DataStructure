/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
    INGENIERA DE SOFTWARE
                
	AUTORES:    JEAN CARLO CEMBRANOS - jccembranos@espe.edu.ec
				RICARDO GRIJALVA - rsgrijalva@espe.edu.ec
				ALEXANDER MAILA - jamaila@espe.edu.ec
				JIMMY SIMBAÑA - jasimbana14@espe.edu.ec
				DANNY SAMBACHE - dasambache@espe.edu.ec (LIDER)
	
	ENUNCIADO:  SE DESEA SUMAR, RESTAR, MULTIPLICAR Y DIVIDIR DOS NUMEROS UTILIZANDO TEMPLATES, BASADOS EN CLASES.				
				
	FECHA DE CREACION:        19-05-21 
	FECHA DE MODIFICACION:    -------*/

template <typename D>

class Operaciones{
	
	private:
		D valor1;
		D valor2;
		
	public:		
		Operaciones();		
	
	void setValor1(D);
    void setValor2(D);
	D getValor1();
    D getValor2();	
    
};
