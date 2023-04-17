#include "Medicamento.h"
#include <iostream>
#include <string.h>

using namespace std;

Medicamento::Medicamento(char * nombre, int presentacion, char * fechaVencimiento, double precio){
	strcpy(this->nombre, nombre);
	this->presentacion = presentacion;
	strcpy(this->fechaVencimiento, fechaVencimiento);
	this->precio = precio;	
}

//devuelve una referencia del objeto
Medicamento& Medicamento::operator =(Medicamento medicamento){
	strcpy(nombre, medicamento.nombre);
	presentacion = medicamento.presentacion;
	strcpy(fechaVencimiento, medicamento.fechaVencimiento);
	precio = medicamento.precio;
}

char * Medicamento::getNombre(){
	return nombre;
}

int Medicamento::getPresentacion(){
    return presentacion;
}

char * Medicamento::getFechaVencimiento(){
	return fechaVencimiento;
}

double Medicamento::getPrecio(){
    return precio;
}
void Medicamento::mostrarDatosas(){
	cout<<"nombre de kms: " <<nombre << endl;
	cout<<"nombre de kms: " <<presentacion << endl;
	cout<<"nombre de kms: " <<fechaVencimiento << endl;
	cout<<"nombre de kms: " <<precio << endl;
	
}
