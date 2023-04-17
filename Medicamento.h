#ifndef MedicamentoH
#define MedicamentoH

class Medicamento{
	private:
		char nombre[20];
		int presentacion;
		char fechaVencimiento[10];// dia-mes-ano
		double precio;
		

	public:
		Medicamento();
    	Medicamento(char* nombre, int presetacion, char * fechaVencimiento, double precio);
    	char * getNombre();
    	int getPresentacion();
    	char * getFechaVencimiento();
    	double getPrecio();
    	void mostrarDatosas();
    	double getPrecioReal();
};

#endif
