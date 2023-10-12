#include "vehicule.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stddef.h>
vehicule * init_vehicule(){
   vehicule *v = (vehicule*)malloc(sizeof(vehicule));
   srand(time(NULL));    
   v->vitess_max=((float)rand()/(float)(RAND_MAX)) * 400;
   v->puissance=rand()% 101;
   strcpy(v->nom_modele,"mercedes");
   return v;
}
void afficher_vehicule(vehicule * v){
    printf("%s\n",v->nom_modele);
    printf("%d\n",v->puissance);
    printf("%f\n",v->vitess_max);
}

