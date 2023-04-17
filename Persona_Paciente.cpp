#include "Persona_Paciente.h"
#include <string.h>
#include <iostream>

using namespace std;

Persona_Paciente::Persona_Paciente()
{
}

Persona_Paciente::Persona_Paciente(char *nom_paciente, char *ape_paciente, int edad_paciente, char *telf_paciente, int numeroCuarto, int cantMedicamentosRecibidos, Medicamento *medicamentosProporcionadosClinica) : Persona(nom_paciente, ape_paciente, edad_paciente, telf_paciente)
{
	this->numeroCuarto = numeroCuarto;
	this->cantMedicamentosRecibidos = cantMedicamentosRecibidos;
	this->medicamentosProporcionadosClinica = new Medicamento[cantMedicamentosRecibidos];
	for (int i = 0; i < cantMedicamentosRecibidos; i++)
	{
		this->medicamentosProporcionadosClinica[i] = medicamentosProporcionadosClinica[i];
	}
}

/*int * Persona::getcantMedicamentosRecibidos(){
	return cantMedicamentosRecibidos;
}*/
char *Persona::getApePaciente()
{
	return ape_paciente;
}
int Persona::getEdadPaciente()
{
	return edad_paciente;
}
char *Persona::getTelfPaciente()
{
	return telf_paciente;
}
// int Persona_Paciente::getPresentacionMed(int numero_Medicamento_Paciente)
// {
// 	return Medicamento.getPresentacion();
// }
char *Persona::Concatenar_nom01()
{
	char nameAndLastname[25];

	strcpy(nameAndLastname, Persona::getNomPaciente());
	strcat(nameAndLastname, " , ");
	strcat(nameAndLastname, Persona::getApePaciente());
	return nameAndLastname;
}
char* Persona_Paciente::Concatenar_nom01(int numMedicamento)
{
	char auxiliar[25];
	strcpy(auxiliar, Concatenar_nom01());
	strcat(auxiliar, " - ");
	// strcat(auxiliar, medica)
	return auxiliar;	
}
// char *Persona::Concatenar_nom01(int medicamento)
// {
// 	char auxiliar[25];
// 	strcpy(auxiliar, Concatenar_nom01());
// 	strcat(auxiliar, " - ");
// 	// strcat(auxiliar, medica)
// 	return auxiliar;	
// }
/*double Persona_Paciente::deudaReal(){

}*/
/*bool Persona_Paciente::isConvulsivo(){
	for(int i=0; i<medicamentosProporcionadosClinica[cantMedicamentosRecibidos]:i++){
		if(medicamentosProporcionadosClinica[i] == )
	}
}*/
// Un m�todo que retorne la cantidad de medicamentos que recibi� el paciente
