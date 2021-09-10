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


// PLEIN DE VOID, j'aurai limite pu faire un 3ème fichier fonction.c.


//=========================================================================


//fonction permettant de dire qui à gagné et de mettre fin au jeux
void VerifFinDeJeu()
{
    if ((boatLifeEnemy==0)||(Boat_life==0))	// Si l'ennemie ou l'utilisateur n'a plus de bateau : 
    {
        EtatJeux=0;
        if(boatLifeEnemy=0)
        {
            printf("Vous avez perdu ! \n bawawahaha t'es trop nul !!!\n\n");
        }
        else printf("Vous avez gagne !\nMais ce n'est que de la chance, je ferai mieux la prochaine fois.");
    }
}

//fonction permettant de générer la seamap
void tableCreation()
{
	for(int il=0;il<10;il++)
    {
        for(int ic=0;ic<10;ic++)
        {
            seamap[il][ic]=Libre;
        }
	}
}
//fonction permettant de générer la map de l'ennemie
void tableCreationEnemy() {
	for(int il=0;il<10;il++) {
		for(int ic=0;ic<10;ic++){
			ennemie_seamap[il][ic]=Libre;
		}
	}
}
//fonction permettant d'afficher l'état de sa flotte et de la flotte ennemie
void Affi_Flotte()
{
	printf("\nNombre de bateau de notre flotte en vie = %d\n",Boat_life);
	printf("Nombre de bateau ennemie en vie = %d\n\n",boatLifeEnemy);
	printf("============================================\n\n");
	printf("Nombre de bateau de notre flotte couler = %d\n",boatDestroy);
	printf("Nombre de bateau ennemie couler = %d\n\n",boatDestroyEnemy);
	printf("============================================\n\n");
	printf("Nombre de tir = %d\n",ShotCounter);
}

//=========================================================================


//fonction permettant d'afficher la seamap
void affichage_seamap(){
	printf("===SEAMAP===\n");
	for(int il=-1;il<10;il++) {
		if (il == -1) {
			printf("  ");
		} else {
			printf("%d ",il);
		}

		for(int ic=0;ic<10;ic++) {
			if (il == -1) {
				printf(" %d ",ic);
			} else {

				switch(seamap[il][ic]){
					case Boat:
						printf(" B ");
						break;
					case Libre:
						printf(" ~ ");
						break;
					case Coule:
						printf(" X ");
						break;
					case Plouf:
						printf(" o ");
						break;
				}
			}
		}
		printf("\n");
	}
}

//=========================================================================


//fonction permettant de placer ses bateaux sur la seamap
void PlacementBoat()
{
	printf("PLACEZ VOS BATEAUX\n\n");
    srand(time(NULL));

    for(int i=0;i<playerMaxBoat;i++)
    {
        printf("entrez la ligne d'un bateau %d : ",numBoat);
        scanf("%d",&BoatX);

        printf("entrez la colone d'un bateau %d : ",numBoat);
        scanf("%d",&BoatY);


        seamap[BoatX][BoatY]=1;
        numBoat++;
        printf("\n");
    }
}



