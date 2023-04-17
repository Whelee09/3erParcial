#ifndef Persona_PacienteH
#define Persona_PacienteH

#include<vector>
#include "Medicamento.h"
#include "Persona.h"

using namespace std;


class Persona_Paciente: public Persona{
	private:
		int numeroCuarto;
		int cantMedicamentosRecibidos;
		Medicamento* medicamentosProporcionadosClinica;

	public:
		Persona_Paciente();
    	Persona_Paciente(char *,char *, int, char*, int, char *, int, int, Medicamento*);
    	void Concatenar_nom01();
    	bool isConvulsivo();
    	double deudaReal();
    	void getPresentacionMed(int); 
};

#endif
