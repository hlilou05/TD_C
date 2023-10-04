#include "jeu.h"
#include <stdio.h>
#include <stddef.h>

int main(){
  float taux=0;
  int n_atrouver=generer_hasard();
  int n_propose;
 while(n_propose!=n_atrouver){
      n_propose=entrer_nombre();
      modifie_alcoolemie(&taux,bernoulli_distribution(taux));
      afficher_comparaison(n_propose,n_atrouver,bernoulli_distribution(taux));
  }

  return 0;
}
