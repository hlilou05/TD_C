#ifndef __jeu_h__
#define __jeu_h__
#define MP "moin"
#define MG "plus"
extern int generer_hasard();
extern int entrer_nombre();
extern void afficher_comparaison(int proposition,int a_trouver,int verite);
extern void modifie_alcoolemie(float *taux_courant, int verite);
extern int bernoulli_distribution(float taux_courant);
#endif