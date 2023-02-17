#include <iostream>
#include <stdlib.h>
#define Max 100

using namespace std;

void menu();


class nodoa{
  public:
    int adyacente;
    int peso;
    nodoa *siguiente;// puntero
    nodoa(int v, int p, nodoa *sig = NULL)
    {
        adyacente = v;
        peso = p;
        siguiente = sig;
    }
};

struct nodo{ //nodo principal
   public:
    int vertice;
    nodoa *puntero;
    nodo *siguiente;
    nodo(int v, nodo *sig = NULL, nodoa *punt =NULL){
        vertice = v;
        siguiente = sig;
        puntero = punt;
    }
    class lista;
};

class lista{
public:
    pnodo primero; //7 punteor de nodo
};

typedef nodo *pnodo;

class lista{
public:
    pnodo primero; //puntero tipo nodo

    lista (){primero = NUL; } //listavacia...

    //funciones:
    void insertaVertice(int v); //ingresa los datos
    bool ListaVacia(); //buscador de lista vacia
    pnodo Buscarv(int v); //buscador
    bool listaVexiste( int i, int f);
    void arco( int i, int f, peso);
    void CrearMatriz();
    void MostrarMatriz();
    int CantidadVertices();
    int existArco(int i, int f);
    bool Buscador(pnodo aux, int ad);

};

void lista::arco(int i, int f, int peso){
    pnodo p; //puntero
    p = primero;
    if(listaVexiste(i,f)){
        while(p !=NULL){//recorre la lista hasta encontrar
            if( i == p->vertice){
                if(p->puntero==NULL){//VERIFICA EN LA LISTA
                    p->puntero=new nodoa(f,peso);

                }
            }

        }
    }
}