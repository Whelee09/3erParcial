#include "Medicamento.h"
#include <iostream>
#include <string.h>

using namespace std;

Medicamento::Medicamento(){
	
}

Medicamento::Medicamento(char * nombre, int presentacion, char * fechaVencimiento, double precio){
	strcpy(this->nombre, nombre);
	this->presentacion = presentacion;
	strcpy(this->fechaVencimiento, fechaVencimiento);
	this->precio = precio;	
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
double Medicamento::getPrecioReal(){
	double impuesto = getPrecio()*0.16;
	char* fechaVencimiento = getFechaVencimiento();
	// string aux[] = fechaVencimiento[7] + fechaVencimiento[8];
	// int anioInt = atoi(aux);
	// if(anioInt <= 22){
	// 	double descuento  = getPrecio() - getPrecio()*0.10;
	// 	return getPrecio() + impuesto - descuento;
	// }
	// else{
	// 	return getPrecio() + impuesto
	// }
	
}
void Medicamento::mostrarDatosas(){
	cout<<"nombre de kms: " <<nombre << endl;
	cout<<"nombre de kms: " <<presentacion << endl;
	cout<<"nombre de kms: " <<fechaVencimiento << endl;
	cout<<"nombre de kms: " <<precio << endl;
	
}
