#ifndef __fonctions_H_
#define __fonctions_H_
/**/
int* allouer( int taille);
/**/
void initialiser(int* monTab, int taille );
/**/
void afficher (int* monTab,int taile );

void copie(int* tableauOriginal, int* tableauCopie, int taille);

void echange(int* monTab, int i, int j);

#endif