#include "Nodo.h"


Nodo::Nodo(int dato,Nodo *sig){
	this->Dato=dato;
	this->Sig=sig;
}

Nodo::Nodo(int dato){
	this->Dato=dato;
	this->Sig=NULL;
}
