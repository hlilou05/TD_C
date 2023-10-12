#include <string.h>
#include "vehicule.h"
#include <stdlib.h>
#include <stddef.h>
#include <time.h>
#include <stdio.h>
int main(){
    vehicule * v;
    v=init_vehicule();

    
    afficher_vehicule(v);
}