#include <cstdlib>
#include <iostream>
#include "AlberoN.cpp"


using namespace std;

int main(int argc, char *argv[])
{
    AlberoN X;
    Persona y,z,u,k,m;
    // oggetto puntatore nodo
    Nodo * nodo;
    
    //istanzio 5  oggetti "persona" 
    y.nome="Luca";
    y.cognome="Rossi";
    
    z.nome="Marco";
    z.cognome="Bianchi";
    
    u.nome="Erminio";
    u.cognome="Verdi";
    
    k.nome="Nicola";
    k.cognome="Neri";
    
    m.nome="Mario";
    m.cognome="Viola";

    // chiamo funzione creaAlberoN
    X.CreaAlberoN();
    
   
    X.InsRadice(y);
    nodo = X.Radice();
    nodo->GetPersona();
    
    
    X.InsPrimoFiglio(z,nodo);
    nodo = X.PrimoFiglio(nodo);
    nodo->GetPersona();
    
    
    X.InsSuccfiglio(u,nodo);
    nodo = X.SecondoFiglio(nodo);
    nodo->GetPersona();
    
    X.InsSuccfiglio(k,nodo);
    nodo = X.SecondoFiglio(nodo);
    nodo->GetPersona();
    
     X.InsPrimoFiglio(m,nodo);
    nodo = X.PrimoFiglio(nodo);
    nodo->GetPersona();
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
