#include "jeu.h"
#include <stdio.h>
#include <stddef.h>

int main(){
  int tableau[256];

  float taux=0;
  int n_atrouver=generer_hasard();
  int n_propose;
 while(n_propose!=n_atrouver){
      n_propose=entrer_nombre();
      stat(n_propose,tableau);
      modifie_alcoolemie(&taux,bernoulli_distribution(taux));
      afficher_comparaison(n_propose,n_atrouver,bernoulli_distribution(taux));
  }
  int nb_essai;
     

    for (int i = 0; i < sizeof(tableau) / sizeof(tableau); ++i) {
        if (tableau[i] != 0) {
            nb_essai++;
        }
    }
 
  
  printf("%s\n","nombre d'essai");
  printf("%u",nb_essai);
  
  return 0;
}
