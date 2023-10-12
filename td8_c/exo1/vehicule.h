
#ifndef __vehicule_h__
#define __vehicule_h__
typedef struct vehicule vehicule;
struct vehicule {
    char nom_modele[20];
    int puissance;
    float vitess_max;
};
extern vehicule * init_vehicule(void);
extern void afficher_vehicule(vehicule * v);
#endif