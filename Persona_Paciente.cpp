#include "Persona_Paciente.h"
#include <string.h>
#include <iostream>


using namespace std;

Persona_Paciente::Persona_Paciente(int numeroCuarto, int cantMedicamentosRecibidos, Medicamento * medicamentosProporcionadosClinica):Persona(nom_paciente,ape_paciente,edad_paciente,telf_paciente){
	this->numeroCuarto = numeroCuarto;
	this->cantMedicamentosRecibidos = cantMedicamentosRecibidos;
	medicamentosProporcionadosClinica = new Medicamento[cantMedicamentosRecibidos];
	*medicamentosProporcionadosClinica = medicamentosProporcionadosClinica;
	
}

/*int * Persona::getcantMedicamentosRecibidos(){
	return cantMedicamentosRecibidos;
}*/
char * Persona::getApePaciente(){
	return ape_paciente;
}
int Persona::getEdadPaciente(){
	return edad_paciente;
}
char * Persona::getTelfPaciente(){
	return telf_paciente;
}
/*int getPresentacionMed(int numeroMedicamento){
	return 
}*/
void Persona::Concatenar_nom01(int numeroMedicamento){
	cout<<"Recuerda arreglar esto"<<endl;
}
//Un método que retorne la cantidad de medicamentos que recibió el paciente
