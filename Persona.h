#ifndef PersonaH
#define PersonaH

#include <iostream>

using namespace std;


class Persona{
	protected://los puse protected pero la guia los pide private
		char nom_paciente[20];
		char ape_paciente[20];
		int edad_paciente;
		char telf_paciente[15];

	public:
    	Persona();
    	Persona(char *, char *, int, char *);
    	char * getNomPaciente();
    	char * getApePaciente();
    	int getEdadPaciente();
    	char * getTelfPaciente();
    	virtual void Concatenar_nom01(int numeroMedicamento) = 0;
};

#endif
/*Solamente contiene los m�todos get para obtener los valores de los atributos. La asignaci�n de los 
atributos s�lo se puede realizar por medio del constructor debido a que esta clase no tiene m�todos set.*/
