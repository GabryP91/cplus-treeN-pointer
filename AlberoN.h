#ifndef AlberoN_h
#define AlberoN_h
#include "Nodo.cpp"


class AlberoN{
public:
         AlberoN();
        ~AlberoN();
      void CreaAlberoN();
      bool AlberoNVuoto();
      void InsRadice(tipoelem);
      Nodo* Radice();
      Nodo* Padre(Nodo*);
      bool Primo(Nodo*);
      Nodo* PrimoFiglio(Nodo*);
      bool Secondo(Nodo*);
      Nodo* SecondoFiglio(Nodo*);
      void ScriviNodo(tipoelem,Nodo*);
      void InsPrimoFiglio(tipoelem,Nodo*);
      void InsSuccfiglio(tipoelem,Nodo*);
      tipoelem LeggiNodo(Nodo*);
      void CancSottoAlbero(Nodo*);
private:
      Nodo * albero; 
      int livelli;     
};

#endif
