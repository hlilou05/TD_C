#include <stdio.h>

int main(){
  int z=10;
  printf("%d \n",z);
  printf("%d \n",toto(z));
  printf("%d \n",z);
  return 0;
}
int toto(int z){
  z=40;
  printf("%d \n",z);
return z;
}
//le parametre passe en tant qu'une valeur de variable et non pas un emplacement memoire
//cela pourra etre fixe si on passe la variablepar reference, cad l adresse de la variable et non pas sa valeur cad au lieu de toto(z) on met toto(&z)
