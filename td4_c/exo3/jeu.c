#include "jeu.h"
#include <stddef.h>
#include <stdio.h>
int generer_hasard(){
    srand(time(NULL));    
    int nombre_aleatoire=rand()% 101;
    return nombre_aleatoire;
}

int entrer_nombre(){
    printf("\n donnez un nombre:");
    int x;
    scanf("%d", &x);
    return x;
}
void afficher_comparaison(int proposition, int a_trouver){
    if(proposition > a_trouver){
        printf(MP);
    }if(proposition < a_trouver){
        printf(MG);
    }if(proposition==a_trouver){
        printf("Correct");
    }
}