#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 8
#define MAX_SIZE_d_f 4
#define MAX_SIZE_f 4


#define AC_BLACK "\x1b[30m"             //https://c-for-dummies.com/blog/?p=5270
#define AC_RED "\x1b[31m"               // link for colors
#define AC_GREEN "\x1b[32m"            //For colors of text and background
#define AC_YELLOW "\x1b[33m"            //For colors of text and background
#define AC_BLUE "\x1b[34m"            //For colors of text and background
#define AC_MAGENTA "\x1b[35m"            //For colors of text and background
#define AC_CYAN "\x1b[36m"            //For colors of text and background
#define AC_WHITE "\x1b[37m"            //For colors of text and background
#define AC_NORMAL "\x1b[m"            //For colors of text and background

#define Fond_Noir "\x1b[40m"            //For colors of text and background
#define Fond_Rouge "\x1b[41m"            //For colors of text and background
#define Fond_Vert "\x1B[42m"            //For colors of text and background
#define Fond_Jaune "\x1B[43m"            //For colors of text and background
#define Fond_Blue "\x1B[44m"            //For colors of text and background
#define Fond_Magenta "\x1B[45m"            //For colors of text and background
#define Fond_Cyan "\x1B[46m"            //For colors of text and background
#define Fond_Blanc "\x1B[47m"            //For colors of text and background






//----------------------------------------------------------------MAIN---------------------------------------------------------------------------//



typedef struct joueur
{
    char nom[30];
    char prenom[30];
    unsigned date;
    unsigned  mois;
    unsigned  annee;
    int q_de_finale;
    int d_finale;
    int f_inale;
}Joueur;



int nb_joueur = 5;                                                                       /*---------*/
char choice;                                                                                /*|*/
char choice_t;                                                                              /*|*/
int quart_de_finale=0;                                                                       /*|*/
int match = 1;                                                                               /*|*/
int supprimer;                                                                               /*|*/  /* variables global*/
Joueur j[MAX_SIZE];                                                                          /*|*/
int i, size_of_array, position_to_delete;                                                    /*|*/
size_of_array=MAX_SIZE;                                                                      /*|*/
int continuer = 1;      															         /*|*/
int c;                                                                                       /*|*/
Joueur j_d_f[MAX_SIZE_d_f];                                                			         /*|*/
int demi_finale=1;                                                    						 /*|*/
int match_d_f = 1;                                                    						 /*|*/
int nb_joueur_d_f ;																	        /*|*/
Joueur j_f[MAX_SIZE_f];                                                                     /*|*/
int finale = 1;                                                                             /*|*/
int nb_joueur_f;                                                                            /*|*/
int match_f = 1;                                                                            /*|*/
int forfa;                                                                                  /*|*/
int forfait;                                                                       /*---------*/



void dec_vinq_demi_final();
int commencer_tournois(char choice, int supprimer,Joueur j[]);
void dec_vinq_match_qdf();
void dec_vinq_finale();
int forf();




int main()
{
        while(choice!='0')
        {
    printf("%sBienvenue dans Echecs 2000.%s\n",Fond_Magenta,AC_NORMAL,Fond_Blue,AC_NORMAL);     //%s for colors that are asked after ,
    printf("%s[0] Quitter le programme\n",AC_GREEN);      // a debut de ligne avec %s on toute le texte apres en vert avec variable AC_GREEN
    printf("[1] Ajouter un joueur\n");
    printf("[2] Supprimer un joueur\n");
    printf("[3] Afficher l'etat du tournoi\n");
    printf("[4] Afficher les matchs en cours\n");
    printf("[5] Saisir le vainqueur d'un match en cours\n");
    printf("[6] Declarer un joueur forfait\n");
    printf("[7] Commencer un tournoi%s\n",AC_NORMAL);       //ici la fin de liste avec %s et AC_NORMAL on mets tout ce qui sera apres en mode normal
    printf("%sVeuillez entrer votre choix :%s\n",Fond_Blue,AC_NORMAL);
    scanf(" %c",&choice);

            switch(choice)
                {
                    case '0':
                        printf("%sVous avez choisi: %s%s [0] Quitter le programme%s\n",Fond_Cyan,AC_NORMAL,AC_YELLOW,AC_NORMAL);
                    break;

                    case '1':
                            printf("%sVous avez choisi: %s%s [1] Ajouter un joueur%s\n",Fond_Cyan,AC_NORMAL,AC_YELLOW,AC_NORMAL);                           // ici une partie on mets fonds cyan et l'autre partie texte jaune // il faut mettre un fonction void ici pour cette etape.
                            nb_joueur=ajouter(j,nb_joueur);
                    break;
                    case '2':                                                                                                           // ici condition if si vrai faites l'action;
                            printf("%sVous avez choisi: %s%s [2] Supprimer un joueur%s\n",Fond_Cyan,AC_NORMAL,AC_YELLOW,AC_NORMAL);                        // ici une partie on mets fonds cyan et l'autre partie texte jaune // il faut mettre un fonction void ici pour cette etape.
                            supprimer = suppr(j,nb_joueur);
                    break;
                    case '3':                                                                                                         // ici condition if si vrai faites l'action;
                            printf("%sVous avez choisi: %s%s [3] Afficher l'etat du tournoi%s\n",Fond_Cyan,AC_NORMAL,AC_YELLOW,AC_NORMAL);                  // ici une partie on mets fonds cyan et l'autre partie texte jaune // il faut mettre un fonction void ici pour cette etape.
                            //ici fonction afficher l'etat de tournoi
                    break;
                    case '4':                                                                                                      // ici condition if si vrai faites l'action;
                            printf("%sVous avez choisi: %s%s [4] Afficher les matchs en cours%s\n",Fond_Cyan,AC_NORMAL,AC_YELLOW,AC_NORMAL);                // ici une partie on mets fonds cyan et l'autre partie texte jaune // il faut mettre un fonction void ici pour cette etape.
                            /*ici fonction afficher les match en cour*/
                    break;
                    case '5':                                                                                                          // ici condition if si vrai faites l'action;
                            printf("%sVous avez choisi: %s%s [5] Saisir le vainqueur d'un match en cours%s\n",Fond_Cyan,AC_NORMAL,AC_YELLOW,AC_NORMAL);     // ici une partie on mets fonds cyan et l'autre partie texte jaune // il faut mettre un fonction void ici pour cette etape.
                            /* ici fonction saisir le vainquer*/
                    break;
                    case '6':                                                                                                          // ici condition if si vrai faites l'action;
                            printf("%sVous avez choisi: %s%s [6] Declarer un joueur forfait%s\n",Fond_Cyan,AC_NORMAL,AC_YELLOW,AC_NORMAL);                  // ici une partie on mets fonds cyan et l'autre partie texte jaune // il faut mettre un fonction void ici pour cette etape.
                            /*ici fonction declarer un joueur forfait*/
                    break;
                    case '7':                                                                                                          // ici condition if si vrai faites l'action;
                            printf("%sVous avez choisi: %s%s [7] Commencer un tournoi%s\n",Fond_Cyan,AC_NORMAL,AC_YELLOW,AC_NORMAL);                        // ici une partie on mets fonds cyan et l'autre partie texte jaune // il faut mettre un fonction void ici pour cette etape.
                            commencer_tournois(choice,supprimer,j);/*ici fonction commencer le tournoi*/
                    break;

                    default:                                                                                                                         // cette else on peut l'enlever parceque ca posse le probleme si on a un boucle.
                        printf("%sVous n'avez pas choisi une d'option %s%s(ERROR)\n%s\n",AC_RED,AC_NORMAL,Fond_Rouge,AC_NORMAL);                     // cette else on peut l'enlever parceque ca posse le probleme si on a un boucle.
                }
                                                                                                                                                                // ici on demande a l'utilisateur d'entrer un nombre qui sera stocke comme caractere
        }

   return(0);
}

/*-----------------------------------------------------------ajouter un joueur--------------------------------------------------------------------------- */

int ajouter(Joueur j[], int nb_joueur)
{
    char choix;
    printf("ajouter un joueur? (o pour oui/n pour non)");
    scanf(" %c",&choix);
       while(nb_joueur < 8 && choix=='o')
        {
            printf("entrer le nom pour joueur j[%d]:\n",nb_joueur);
            scanf(" %s", j[nb_joueur].nom);   // on peut utiliser : scanf ou gets(&j[i].nom);
            printf("entrer le prenom pour joueur j[%d]:\n",nb_joueur);
            scanf(" %s", j[nb_joueur].prenom);
            printf("entrer la date de naissance sour forrmat dd/mm/aaaa pour joueur j[%d]:\n",nb_joueur);
            scanf(" %d/%d/%d",&j[nb_joueur].date,&j[nb_joueur].mois,&j[nb_joueur].annee);
            nb_joueur++;
            printf("ajouter un joueur? (o/n)");
            scanf(" %c",&choix);
        }
        if(nb_joueur>=8 && choix=='o')
        {
            printf("vous  avez deja ajouter 8 joueurs\n");
        }
        if(choix='n')
        {
            printf("%svous avez choisi de ne pas ajouter un joueur %s\n",AC_CYAN,AC_NORMAL);
        }
    return nb_joueur;
}


/*-----------------------------------------------------------------supprimer un joueur--------------------------------------------------------------------------------------*/


int suppr(Joueur j[])
{
    int i, size_of_array, position_to_delete;
    size_of_array=nb_joueur;

    printf("\nElements of array are \n: ");
        for(i=0; i<nb_joueur; i++)
        {
                printf(" %s\n",j[i].nom);
                printf(" %s\n",j[i].prenom);
                printf(" %d/%d/%d\n",j[i].date,j[i].mois,j[i].annee);
        }

    // Input element position to delete
    printf("Enter the element position to delete : ");
    scanf("%d", &position_to_delete);

    if(position_to_delete < 0 || position_to_delete > size_of_array)
    {
        printf("Invalid position! Please enter position between 1 to %d", size_of_array);
    }
    else
    {
        // Copy next element value to current element
        for(i=position_to_delete; i<size_of_array-1; i++)
        {
            j[i] = j[i + 1];
        }
        // Decrement array size by 1
        size_of_array--;
        nb_joueur=size_of_array;
    }

    // Print array after deletion
        printf("\nElements of array after delete are \n: ");
        for(i=0; i<size_of_array; i++)
        {
                printf(" %s\n",j[i].nom);
                printf(" %s\n",j[i].prenom);
                printf(" %d/%d/%d\n",j[i].date,j[i].mois,j[i].annee);
        }
        return nb_joueur;
}


/*____________________________________________________________tournoie_________________________________________________________________________*/

int commencer_tournois(char choice, int supprimer,Joueur j[])
{
    int i, size_of_array, position_to_delete;
    size_of_array=MAX_SIZE;

    do
    {
        printf("[0] Quitter le mode tournoi%s\n",AC_NORMAL);
        printf("[1] Afficher l'etat du tournoi\n");
        printf("[2] Afficher les matchs en cours\n");
        printf("[3] Saisir le vainqueur d'un match en cours\n");
        printf("[4] Declarer un joueur forfait\n");
                                                                            //ici la fin de liste avec %s et AC_NORMAL on mets tout ce qui sera apres en mode normal
        printf("%sVeuillez entrer votre choix :%s\n",Fond_Blue,AC_NORMAL);
         // ici on peut mettre un boucle pour les if pour repeter chaque fois le demande de choix
       scanf(" %c",&choice_t);                 // ici on demande a l'utilisateur d'entrer un nombre qui sera stocke comme caractere

        switch(choice_t)
        {
            case '1':                                                                                                        // ici condition if si vrai faites l'action;
                 printf("%sVous avez choisi: %s%s [1] Afficher l'etat du tournoi%s\n",Fond_Cyan,AC_NORMAL,AC_YELLOW,AC_NORMAL);		// ici une partie on mets fonds cyan et l'autre partie texte jaune
                 // il faut mettre un fonction void ici pour cette etape ,  ici fonction afficher l'etat de tournoi
            break;

            case '2':                                                                                                      // ici condition if si vrai faites l'action;
                printf("%sVous avez choisi: %s%s [2] Afficher les matchs en cours%s\n",Fond_Cyan,AC_NORMAL,AC_YELLOW,AC_NORMAL);                // ici une partie on mets fonds cyan et l'autre partie texte jaune // il faut mettre un fonction void ici pour cette etape.
                /*ici fonction afficher les match en cour*/
            break;

            case '3':                                                                                                          // ici condition if si vrai faites l'action;
                printf("%sVous avez choisi: %s%s [3] Saisir le vainqueur d'un match en cours%s\n",Fond_Cyan,AC_NORMAL,AC_YELLOW,AC_NORMAL);     // ici une partie on mets fonds cyan et l'autre partie texte jaune // il faut mettre un fonction void ici pour cette etape.
                dec_vinq_match_qdf();
				dec_vinq_demi_final();
				dec_vinq_finale();
            break;

            case '4':                                                                                                          // ici condition if si vrai faites l'action;
                printf("%sVous avez choisi: %s%s [4] Declarer un joueur forfait%s\n",Fond_Cyan,AC_NORMAL,AC_YELLOW,AC_NORMAL);                  // ici une partie on mets fonds cyan et l'autre partie texte jaune // il faut mettre un fonction void ici pour cette etape.
                forfait = forf();
            break;
        }
    } while(choice != '0');
   return(0);
}



/*--------------------------------------------------------------quart de finale----------------------------------------------------*/

void dec_vinq_match_qdf()
{
  if(nb_joueur<5)
    {
        quart_de_finale = 1;
        demi_finale = 0;
    }

    if(quart_de_finale == 0)
    {
        printf("vous etes en quart de finale\n");
    }

    while (quart_de_finale == 0)
    {
        switch(match)
        {
            case 1:
                {
                    printf("j[0] vs j[1]: declarer le victoire ou egalite\n");
                    printf("j[0] gagne : mettez 1/0, j[1] gagne mettez 0/1, egalite: mettez 1/1: \n");
                    scanf("%d/%d",&j[0].q_de_finale,&j[1].q_de_finale);
                    if((j[0].q_de_finale == 0 && j[1].q_de_finale == 1))
                    {
                        match = 2;
                        printf("j[1] a gagnee\n\n");
                    }
                    if((j[0].q_de_finale == 1 && j[1].q_de_finale == 0))
                    {
                        match = 2;
                        printf("j[0] a gagnee\n\n");
                    }
                }
            break;

            case 2:
                {
                    printf("j[2] vs j[3]: declarer le victoire ou egalite\n");
                    printf("j[2] gagne : mettez 1/0, j[3] gagne mettez 0/1, egalite: mettez 1/1: ");
                    scanf("%d / %d",&j[2].q_de_finale,&j[3].q_de_finale);
                    printf("%d %d \n",j[2].q_de_finale,j[3].q_de_finale);
                    if(j[2].q_de_finale == 0 && j[3].q_de_finale == 1)
                    {
                        match = 3;
                        printf("j[3] a gagnee\n\n");

                    }
                    if(j[2].q_de_finale == 1 && j[3].q_de_finale == 0)   //while((j[2].q_de_finale == 1 && j[3].q_de_finale == 1) || (j[2].q_de_finale == 0 && j[3].q_de_finale == 0) && (j[2].q_de_finale <= 1 && j[2].q_de_finale >= 1)  && (j[3].q_de_finale <=1 && j[3].q_de_finale >= 1))
                    {
                        match = 3;
                        printf("j[2] a gagnee\n\n");
                    }
                }
            break;

            case 3:
                {


                    if (nb_joueur == 5)
                    {
                        j[4].q_de_finale=1;
                        quart_de_finale = 1;
						demi_finale=0;
                        break;
                    }

                     if(j[4].q_de_finale != 1)  // total 6 joueurs
                    {
                        printf("j[4] vs j[5]: declarer le victoire ou egalite\n");
                        printf("j[4] gagne : mettez 1/0, j[5] gagne mettez 0/1, egalite: mettez 1/1: ");
                        scanf("%d / %d",&j[4].q_de_finale,&j[5].q_de_finale);
                        break;
                    }

                     if(j[4].q_de_finale == 0 && j[5].q_de_finale == 1)
                    {
                        match = 4;
                        printf("j[5] a gagnee\n\n");
                        break;
                    }

                    if(j[4].q_de_finale == 1 && j[5].q_de_finale == 0)
                    {
                        match = 4;
                        printf("j[4] a gagnee\n\n");
                         break;
                    }
                }
            break;

            case 4:
                {
                    if (nb_joueur == 7)
                    {
                        j[6].q_de_finale=1;
                        quart_de_finale = 1;
                        printf("j[6] a gagnee\n\n");
						demi_finale=0;
						 break;
                    }

                    if(j[6].q_de_finale !=1)
                    {
                        printf("j[6] vs j[7]: declarer le victoire ou egalite\n");
                        printf("j[6] gagne : mettez 1/0, j[7] gagne mettez 0/1, egalite: mettez 1/1:  ");
                        scanf("%d/%d",&j[6].q_de_finale,&j[7].q_de_finale);
                         break;
                    }

                    if(j[6].q_de_finale == 0 && j[7].q_de_finale == 1)
                    {
                        printf("j[7] a gagnee\n\n");
                        quart_de_finale = 1;
						demi_finale=0;
						 break;
                    }
                    if(j[6].q_de_finale == 1 && j[7].q_de_finale == 0)
                    {
                        quart_de_finale = 1;
                        printf("j[6] a gagnee\n\n");
						demi_finale=0;
						 break;
                    }
                }
            break;
        }
    }
}

/*--------------------------------------------------------------demi finale----------------------------------------------------*/
void dec_vinq_demi_final()
{
     if(nb_joueur<3)
    {
        demi_finale = 1;
    }
        if( nb_joueur_d_f>4)
    {
        demi_finale = 1;
    }

    if(nb_joueur<5)
    {
        j[0].q_de_finale == 1;
        j[1].q_de_finale == 1;
        j[2].q_de_finale == 1;
        j[3].q_de_finale == 1;
    }


    for(int z=0; z == nb_joueur;z++)
    {
        if(j[z].q_de_finale == 1)
        {
            j_d_f[c] = j[z];              // memcpy(&j_d_f[c], &j[i], sizeof(Joueur));
            nb_joueur_d_f++;
            c++;
        }
    }



    if(demi_finale == 0)
    {
        printf("vous etes en demi finale\n");
    }

    while (demi_finale == 0)
    {
        switch(match_d_f)
        {
            case 1:
                    printf("j[0]_demi_f vs j[1]_demi_f: declarer le victoire ou egalite\n");
                    printf("j[0]_demi_f gagne : mettez 1/0, j[1]_demi_f gagne mettez 0/1, egalite: mettez 1/1: \n");
                    scanf("%d/%d",&j_d_f[0].d_finale,&j_d_f[1].d_finale);
                    if((j_d_f[0].d_finale == 0 && j_d_f[1].d_finale == 1))
                    {
                        match_d_f = 2;
                        printf("j[1]_demi_f a gagnee\n\n");
                    }
                    if((j_d_f[0].d_finale == 1 && j_d_f[1].d_finale == 0))
                    {
                        match_d_f = 2;
                        printf("j[0]_demi_f a gagnee\n\n");
                    }
            break;

            case 2:
                {
                    if (nb_joueur_d_f == 3)
                    {
                        j_d_f[2].d_finale=1;
                        demi_finale = 1;
                        printf("j[2]_demi_f a gagnee\n\n");
                        match_d_f = 3;
                        finale = 0;
                        break;
                    }

                    if(j_d_f[2].d_finale !=1 )
                    {
                         printf("j[2]_demi_f vs j[3]_demi_f: declarer le victoire ou egalite\n");
                        printf("j[2]_demi_f gagne : mettez 1/0, j[3]_demi_f gagne mettez 0/1, egalite: mettez 1/1: ");
                        scanf("%d / %d",&j_d_f[2].d_finale,&j_d_f[3].d_finale);
                        printf("%d %d \n",j_d_f[2].d_finale,j_d_f[3].d_finale);
                        break;
                    }

                    if((j_d_f[2].d_finale == 0 && j_d_f[3].d_finale == 1))
                    {
                        demi_finale = 1;
                        printf("j[3]_demi_f a gagnee\n\n");
                        match_d_f = 3;
                        finale = 0;
                        break;

                    }
                    if((j_d_f[2].d_finale == 1 && j_d_f[3].d_finale == 0))
                    {
                        demi_finale = 1;
                        printf("j[2]_demi_f a gagnee\n\n");
                        match_d_f = 3;
                        finale = 0;
                        break;
                    }
                }
            break;
        }
    }
}

/*-------------------------------------------------------finale------------------------------------------*/


void dec_vinq_finale()
{

    if(nb_joueur<3)
    {
        j[0].d_finale == 1;
        j[1].d_finale == 1;
    }

    for(int z=0; z == nb_joueur_d_f;z++)
    {
        if(j_d_f[z].d_finale == 1)
        {
            j_f[c] = j_d_f[z];              // memcpy(&j_d_f[c], &j[i], sizeof(Joueur));
            nb_joueur_f++;
            c++;
        }
    }

    if(nb_joueur_f<1 && nb_joueur_f>2)
    {
        finale = 1;
    }

    if(demi_finale == 0)
    {
        printf("vous etes en finale \n");
    }

    while (finale == 0)
    {
        switch(match_f)
        {
            case 1:
                {
                    if (nb_joueur_f == 0)
                    {
                        j_d_f[0].f_inale=1;
                        finale = 1;
                        printf("j[2]_f a gagnee\n\n");
                        match_f = 2;
                        break;
                    }
                    if(j_f[0].f_inale !=1 )
                    {
                        printf("j[0]_f vs j[1]_f: declarer le victoire ou egalite\n");
                        printf("j[0]_f gagne : mettez 1/0, j[1]_f gagne mettez 0/1, egalite: mettez 1/1: ");
                        scanf("%d / %d",&j_f[0].f_inale,&j_f[1].f_inale);
                        printf("%d %d \n",j_f[0].f_inale,j_f[1].f_inale);
                        break;
                    }
                    if((j_f[0].f_inale == 0 && j_f[1].f_inale == 1))
                    {
                        finale = 1;
                        printf("j[1]_f a gagnee\n\n");
                        match_f = 2;
                        break;
                    }
                    if((j_f[0].f_inale == 1 && j_f[1].f_inale == 0))
                    {
                        finale = 1;
                        printf("j[0]_f a gagnee\n\n");
                        match_f = 2;
                        break;
                    }
                }
            break;
        }
    }
    return;
}


/*____________________________________etat de tournoie--------------------------------*/



void etat_de_tournoie()
{

    for(int i=0; i == MAX_SIZE; i++)
    {
    printf("quart_de_finale : \n");
    printf("joueur_quart_de_finale %d a eu %d en quart de finale",i,j[i].q_de_finale);
    }

    for(int i=0; i == MAX_SIZE_d_f; i++)
    {
    printf("demi_finale : \n");
    printf("joueur_demi_finale %d a eu %d en demi finale",i,j_d_f[i].d_finale);
    }

    for(int i=0; i == MAX_SIZE_f; i++)
    {
    printf("demi_finale : \n");
    printf("joueur_demi_finale %d a eu %d en demi finale",i,j_f[i].f_inale );
    }

}


int forf()
{
    int i, size_of_array, position_to_delete;
    size_of_array=nb_joueur;

    printf("\nElements of array are \n: ");
        for(i=0; i<nb_joueur; i++)
        {
                printf(" %s\n",j[i].nom);
                printf(" %s\n",j[i].prenom);
                printf(" %d/%d/%d\n",j[i].date,j[i].mois,j[i].annee);
        }

    // Input element position to delete
    printf("Enter the element position to delete : ");
    scanf("%d", &forfa);

    if(forfa < 0 || forfa > size_of_array)
    {
        printf("Invalid position! Please enter position between 1 to %d", size_of_array);
    }
    else
    {
        // Copy next element value to current element
        for(i=position_to_delete; i<size_of_array-1; i++)
        {
            j[i] = j[i + 1];
        }
        // Decrement array size by 1
        size_of_array--;
        nb_joueur=size_of_array;
    }

    // Print array after deletion
        printf("\nElements of array after delete are \n: ");
        for(i=0; i<size_of_array; i++)
        {
                printf(" %s\n",j[i].nom);
                printf(" %s\n",j[i].prenom);
                printf(" %d/%d/%d\n",j[i].date,j[i].mois,j[i].annee);
        }
        return nb_joueur;
}
