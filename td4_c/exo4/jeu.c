#include "jeu.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
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
void afficher_comparaison(int proposition, int a_trouver, int verite){
    if(verite==1){
        if(proposition > a_trouver){
        printf("moins");
        }if(proposition < a_trouver){
        printf("plus");
        }    
    }
    if(verite==0){
        if(proposition < a_trouver){
        printf("moins");
        }if(proposition > a_trouver){
        printf("plus");
        } 
    }
    if(proposition==a_trouver){
        printf("Correct");
    }
}
void modifie_alcoolemie(float *taux_courant, int verite){
    if(verite==1){
    *taux_courant+=0.1;
    }
    if(verite==0)
    *taux_courant=*taux_courant/2;
    }
int bernoulli_distribution(float taux_courant){
    float taux_aleatoire=(float)rand()/((float)RAND_MAX);
    if (taux_aleatoire>=taux_courant || taux_courant==0){
        return 1;
    }
    if (taux_aleatoire<taux_courant || taux_courant>=1){
        return 0;
    }
}
