#include <string.h>
#include "vehicule.h"
#include <stdlib.h>
#include <stddef.h>
#include <time.h>
#include <stdio.h>
int main()
{
vehicule * v0, v1,v2;
v0 = init_vehicule();
v1 = init_vehicule();
init_pile();
afficher_vehicule(v0);
empiler(v0);
afficher_vehicule(v1);
empiler(v1);


v2 = depiler();
afficher_vehicule(v2);
return 0;


}
