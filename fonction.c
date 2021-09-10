#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fonction.h"

/*
 J'ai mal programmé mes variables, j'ai fait que du global au début donc pour rattrapé le tir j'utilise l'instruction 'extern' 
(Je précise que je voulais abosulement utiliser de la programmation modulaire pour avoir un code assez propre)
La fonction 'extern' indique au compilateur qu'il sagit d'une variable qui a été définie ailleurs dans le programme, Cette déclaration n'utilise donc pas plus de mémoire.
*/
extern int seamap[10][10];			
extern int ennemie_seamap[10][10];
extern int EtatJeux;
extern int Ordi_life_Boat; 
extern int Boat_life;        
extern int boatDestroy;        
extern int ShotCounter;           
extern int ShotX,ShotY;
extern int boatLifeEnemy;
extern int boatDestroyEnemy;
extern int BoatX,BoatY;
extern int numBoat;
extern int CELL;
extern int ShotEnemyX,ShotEnemyY;
extern int choix;
extern int NbTour;


