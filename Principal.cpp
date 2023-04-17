#include <iostream>
#include <string.h>
#include "Medicamento.h"
#include "Persona.h"
#include "Persona_Paciente.h"
#include "Datos.h"
#include <stdlib.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Datos datos;
	Persona_Paciente *vectorPacientes;
	Medicamento *auxMedicamento;
	
	
    vectorPacientes = new Persona_Paciente[datos.getCantPacientes()];
	for(int i=0; i<datos.getCantPacientes();i++){
		
		char *_nom;
		char *_apellido;
		
		char *aux = datos.getDatosPaciente(i);		
		_nom = strtok(aux," ");
		cout<<"nombre"<<_nom<<endl;
	    
        char *edad;
	    int edadInt;
	    
	    char *numTelf;
	    char *cantMedSumin;
	    int cantMedSuminInt;
	    
		if(aux!=NULL){
			_apellido = strtok(NULL," ");
			cout<<"Apellido "<<_apellido<<endl;
		}
		if(aux!=NULL){
			edad = strtok(NULL," ");
			edadInt = atoi(edad);
			cout<<"edad "<<edadInt<<endl;
		}
		if(aux!=NULL){
			numTelf = strtok(NULL,",");
			cout<<"Numero Telf  "<<numTelf<<endl;
		}
		if(aux!=NULL){
			cantMedSumin = strtok(NULL," ");
			cantMedSuminInt = atoi(cantMedSumin);
			cout<<"cant de med sumin "<<cantMedSuminInt<<endl;
		}
		
		
		auxMedicamento = new Medicamento[datos.getCantMedicamentos()];
		
		
		for(int j=0; j<datos.getCantMedicamentos();j++){
			
			
			char *_nomMed;
		
			char *aux = datos.getDatos_Medicamentos(j);		
			_nomMed = strtok(aux," ");
			cout<<"nombre med "<<_nomMed<<endl;
	    
        	char *presentacion;
	    	int presentacionInt;
	    
	    	char *fecha_de_vencimiento;
	    	
	    	char *precio;
	    	double precioDouble;
	    
			if(aux!=NULL){
				presentacion = strtok(NULL," ");
				presentacionInt = atoi(presentacion);
				cout<<"presentacion "<<presentacionInt<<endl;
			}
			if(aux!=NULL){
				fecha_de_vencimiento = strtok(NULL," ");
				cout<<"fecha_de_vencimiento  "<<edadInt<<endl;
			}
			if(aux!=NULL){
				precio = strtok(NULL," ");
				precioDouble = atof(precio);
				cout<<"precio "<<precioDouble<<endl;
			}
			
			auxMedicamento[j] = new Medicamento(_nomMed, presentacionInt, fecha_de_vencimiento,precioDouble);
		}
		vectorPacientes[i] = new Persona_Paciente(_nom, _apellido, edadInt,numTelf,i,cantMedSuminInt,auxMedicamento);                                                        
		
	}
	
	void printDeudaTotal();
	
	
	return 0;
}



