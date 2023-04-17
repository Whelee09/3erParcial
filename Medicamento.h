#ifndef MedicamentoH
#define MedicamentoH

class Medicamento{
	private:
		char nombre[20];
		int presentacion;
		char fechaVencimiento[10];// dia-mes-ano
		double precio;
		

	public:
    	Medicamento(char*, int, char *, double);
    	char * getNombre();
    	int getPresentacion();
    	char * getFechaVencimiento();
    	double getPrecio();
    	void mostrarDatosas();
    	double getPrecioReal();
    	Medicamento& operator = (Medicamento medicamento);
};

#endif
