#include "fonctions.h"
#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
#include <time.h>

int* allouer( int taille){
    int* tableau; 
    tableau = malloc(taille *sizeof(int));
    return tableau; 
}

void initialiser(int* monTab, int taille )
{
    for (int i = 0; i < taille -1 ; i++)
    {
        
        monTab[i]=rand()%100 +1;
    }
}

void afficher (int* monTab,int taille )
{
    printf("|");
    for (int i = 0; i < taille-1; i++)
    {
       printf(" %d |",monTab[i]);
    }
    printf("\n");
    
}

void copie(int* tableauOriginal, int* tableauCopie, int taille){
    tableauCopie = allouer(taille);
    for (int i = 0; i < taille -1; i++)
    {
        tableauCopie[i] = tableauOriginal[i];
    }
    
    afficher(tableauCopie,taille);
     printf("\n");

}

void echange(int* monTab, int i, int j){
    int tampon1;
    int tampon2;  
    tampon1 = monTab[i];
    tampon2 = monTab[j];
    monTab[i] = tampon2; 
    monTab[j] = tampon1; 
  
}