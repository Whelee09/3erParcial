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
		Medicamento **medicamentosProporcionadosClinica;

	public:
    	Persona_Paciente(int, int, Medicamento *medicamento);
    	void Concatenar_nom01();
    	int getPresentacionMed(int); 
};

#endif
