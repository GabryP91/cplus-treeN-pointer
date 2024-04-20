#ifndef Nodo_h
#define Nodo_h
#include "Persona.h"

typedef Persona tipoelem;

class Nodo{
public:
       Nodo();
      ~Nodo(); 
      void SetPersona(tipoelem);
      Persona GetPersona();
      void SetPadre(Nodo*);
      Nodo* GetPadre();
      void SetPrimo(Nodo*);
      Nodo* GetPrimo();
      void SetSecondo(Nodo*);
      Nodo* GetSecondo();
private:
     tipoelem info;
     Nodo* Padre;
     Nodo* Primo;
     Nodo* Secondo;      
};


#endif
