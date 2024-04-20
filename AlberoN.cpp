#include "AlberoN.h"

AlberoN::AlberoN() {
    CreaAlberoN();
}

AlberoN::~AlberoN() {}

void AlberoN::CreaAlberoN() {
    albero = NULL;
}

bool AlberoN::AlberoNVuoto() {
    return (albero == NULL);
}

void AlberoN::InsRadice(tipoelem elem) {
    albero = new Nodo;
    ScriviNodo(elem, albero);
    albero->SetPadre(NULL);
    albero->SetPrimo(NULL);
    albero->SetSecondo(NULL);
}

Nodo* AlberoN::Radice() {
    return albero;
}

Nodo* AlberoN::Padre(Nodo* x) {
    if (!AlberoNVuoto() && x->GetPadre() != NULL)
        return x->GetPadre();
    else
        return NULL;
}

bool AlberoN::Primo(Nodo* x) {
    if (!AlberoNVuoto())
        return (x->GetPrimo() == NULL);
    return false; // Aggiunta per coerenza
}

Nodo* AlberoN::PrimoFiglio(Nodo* x) {
    if (!AlberoNVuoto() && !Primo(x))
        return x->GetPrimo();
    return NULL; // Aggiunta per coerenza
}

bool AlberoN::Secondo(Nodo* x) {
    if (!AlberoNVuoto())
        return (x->GetSecondo() == NULL);
    return false; // Aggiunta per coerenza
}

Nodo* AlberoN::SecondoFiglio(Nodo* x) {
    if (!AlberoNVuoto() && !Secondo(x))
        return x->GetSecondo();
    return NULL; // Aggiunta per coerenza
}

void AlberoN::ScriviNodo(tipoelem elem, Nodo* x) {
    x->SetPersona(elem);
}

void AlberoN::InsPrimoFiglio(tipoelem elem, Nodo* x) {
    if (!AlberoNVuoto()) {
        Nodo* nuovo = new Nodo;
        ScriviNodo(elem, nuovo);
        nuovo->SetPrimo(NULL);
        nuovo->SetPadre(x);
        if (Primo(x)) {
            x->SetPrimo(nuovo);
            nuovo->SetSecondo(NULL);
        } else {
            nuovo->SetSecondo(x->GetPrimo());
            x->SetPrimo(nuovo);
        }
    }
}

void AlberoN::InsSuccfiglio(tipoelem elem, Nodo* x) {
    if (!AlberoNVuoto() && Primo(x)) {
        Nodo* nuovo = new Nodo;
        ScriviNodo(elem, nuovo);
        nuovo->SetPadre(x->GetPadre());
        nuovo->SetPrimo(NULL);
        nuovo->SetSecondo(NULL);
        x->SetSecondo(nuovo);
    }
}

tipoelem AlberoN::LeggiNodo(Nodo* x) {
    return x->GetPersona();
}

void AlberoN::CancSottoAlbero(Nodo* x) {
    if (x != NULL) {
        Nodo* aux;
        while (x->GetPrimo() != NULL) {
            aux = x->GetPrimo();
            CancSottoAlbero(aux);
        }
        if (x->GetPadre() != NULL) {
            Nodo* padre = x->GetPadre();
            if (padre->GetPrimo() == x)
                padre->SetPrimo(x->GetSecondo());
            else {
                aux = padre->GetPrimo();
                while (aux->GetSecondo() != x)
                    aux = aux->GetSecondo();
                aux->SetSecondo(x->GetSecondo());
            }
        }
        delete x;
    }
}
// void AlberoN::CaricaAlbero(Nodo* x){
//       livelli=0;
         
// }
