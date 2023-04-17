#ifndef Persona_PacienteH
#define Persona_PacienteH

#include <vector>
#include "Medicamento.h"
#include "Persona.h"

using namespace std;

class Persona_Paciente : public Persona
{
private:
	int numeroCuarto;
	int cantMedicamentosRecibidos;
	Medicamento *medicamentosProporcionadosClinica;

public:
	Persona_Paciente();

	Persona_Paciente(char *nom_paciente, char *ape_paciente, int edad_paciente, char *telf_paciente, int numeroCuarto, int cantMedicamentosRecibidos, Medicamento *medicamentosProporcionadosClinica);

	char *Concatenar_nom01() override;
	char *Concatenar_nom01(int numMedicamento);
	bool isConvulsivo();
	double deudaReal();
	void getPresentacionMed(int);
};

#endif
