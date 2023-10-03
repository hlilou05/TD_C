#include <stdio.h>

int main(){
  int z=10;
  printf("%d \n",z);
  printf("%d \n",toto(&z));
  printf("%d \n",z);
  return 0;
}
int toto(int *z){
  *z=40;
  printf("%d \n",z);
return z;
}
//cela pourra etre fixe si on passe la variable par reference, cad l adresse de la variable et non pas sa valeur cad au lieu de toto(z) on met toto(&z) et on modifie notre fonction pour qu elle prenne un pointeur
