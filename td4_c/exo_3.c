
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
        printf("moins");
    }if(proposition < a_trouver){
        printf("plus");
    }if(proposition==a_trouver){
        printf("Correct");
    }
}
