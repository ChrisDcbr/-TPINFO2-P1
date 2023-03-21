#include "fonctions.h"
#include "trisLents.h"
#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int* tableau;
    int* tabcopie; 
    int taille;
    taille = 9; 
    tableau = allouer(taille);
    initialiser(tableau,taille);
    afficher(tableau,taille);
    copie(tableau,tabcopie,taille);
    triInsertion(tableau,taille);
    afficher(tableau,taille);
    return 0;
}
