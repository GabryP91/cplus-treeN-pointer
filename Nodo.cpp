#include <cstdlib>
#include<iostream>
#include "Nodo.h"

using namespace std;

Nodo::Nodo(){
      Padre,Primo,Secondo=0;            
}

Nodo::~Nodo(){}

void Nodo::SetPersona(tipoelem elem){
         info=elem;     
}

Persona Nodo::GetPersona(){
         cout<<"Nome:    "<<info.nome<<endl; 
         cout<<"Cognome: "<<info.cognome<<endl<<endl;
         return info;      
}

void Nodo::SetPadre(Nodo* p){
       Padre=p;     
}

void Nodo::SetPrimo(Nodo* pr){
       Primo=pr;     
}

void Nodo::SetSecondo(Nodo* sc){
       Secondo=sc;     
}

Nodo* Nodo::GetPadre(){
        return Padre;      
}

Nodo* Nodo::GetPrimo(){
        return Primo;      
}

Nodo* Nodo::GetSecondo(){
        return Secondo;      
}

