#include "Persona.h"
#include <string.h>

Persona::Persona(){
	strcpy(this->nom_paciente, " ");
	strcpy(this->ape_paciente, " ");
	this->edad_paciente = 0;
	strcpy(this->telf_paciente, " ");
}
Persona::Persona(char * nom_paciente, char * ape_paciente, int edad_paciente, char * telf_paciente){
	strcpy(this->nom_paciente, nom_paciente);
	strcpy(this->ape_paciente, ape_paciente);
	this->edad_paciente = edad_paciente;
	strcpy(this->telf_paciente, telf_paciente);	
}
char * Persona::getNomPaciente(){
	return nom_paciente;
}
char * Persona::getApePaciente(){
	return ape_paciente;
}
int Persona::getEdadPaciente(){
	return edad_paciente;
}
char * Persona::getTelfPaciente(){
	return telf_paciente;
}

