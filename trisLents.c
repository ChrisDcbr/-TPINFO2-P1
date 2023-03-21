#include"trisLents.h"
#include <stdio.h>
#include <stdlib.h> 
#include <math.h>
#include <time.h>

void triSelection(int* monTab, int taille){
    int min; 
    for (int i = 0; i < taille -1; i++)
    {
        min = i;
        for (int j = i+1; j < taille -1; j++)
        {
            if (monTab[j]<monTab[min])
            {
                min = j ;
            }
            
        }
        echange(monTab,i,min);
        
    }
     
    
}


void trisBulles(int* monTab,int taille){
    int compteur; 
    while (compteur != 0)

    {
        compteur = 0;
        
        for (int j = 0; j < taille-2; j++)
        {
            if (monTab[j]>monTab[j+1])
            {
                compteur = compteur +1; 
                echange(monTab,j+1,j);
            }
            
        }
       
    }
        
    }

    void triInsertion(int* monTab, int taille){
        int nbEncours;
         
        for (int i = 1; i < taille - 1; i++)
        {
            nbEncours = monTab[i]; 
            for (int j = i; j <= 0 && monTab[j-1]>nbEncours; j-- )
            {
               echange(monTab, j,j-1); 
                
            }

            
        }
        
      
    }
    
    


