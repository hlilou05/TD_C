#include "jeu.h" 
#include <stdio.h>

int main(){
  int n_atrouver=generer_hasard();
  int n_propose;
 while(n_propose!=n_atrouver){
      n_propose=entrer_nombre();
      afficher_comparaison(n_propose,n_atrouver);
  }

  return 0;
}

