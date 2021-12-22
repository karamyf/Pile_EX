#include <iostream>
#include "Pile.h"
#define SIZE 5

using namespace std;

Pile::Pile()
{
    tab[0] = null;
    longr = 0;
    sommet = 0;
}

Pile::Pile(int size)
{
    tab = new int[size];
    longr = size;
    sommet = -1;
}

Pile::~Pile()
{
    delete[] tab;
}

void Pile::Empiler(int x)
{
    tab[++sommet] = x;
}

int Pile::Depiler()
{
    if (PileVide())
    {
        exit(EXIT_FAILURE);
    }

    return tab[sommet--];
}


bool Pile::PileVide() {
    if(sommet == -1)
        return 1;
    else
        return 0;
}


void AfficherPile(){

for(int i=sommet; i>=0; i--)
{

    cout<<tab[i]<<endl;

}
}


 int Pile::Sommmet()
{
    if (PileVide()) {

        exit(EXIT_FAILURE);
    }
    else {
        return tab[sommet];
    }
}



int Pile::size() {
    return sommet++ ;
}
