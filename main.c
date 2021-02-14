#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct B{

    int etat;
    char nom[4];
    int x;
    int y;
    int deplacement;
    char pion[10];

}Blanc;

typedef struct N{

    int etat;
    char nom[4];
    int x;
    int y;
    int deplacement;
    char pion[10];

}Noir;

void InitPieces(Blanc B[16],Noir N[16]){
    int i;
    for(i=0;i<16;i++){
            // Etat :

        B[i].etat = 1;
        N[i].etat = 1;
        if(i>7){
            //Pion :

            B[i].deplacement=1;
            N[i].deplacement=1;

            strcpy(B[i].pion,"Pion");
            strcpy(N[i].pion,"Pion");
        }else{
            B[i].deplacement=0;
            N[i].deplacement=0;
        }
    }
    // Blanc :
    strcpy(B[0].nom,"BR");//1
    B[0].x=4;
    B[0].y=7;
    B[0].deplacement=1;

    strcpy(B[1].nom,"BD");//2
    B[1].x=3;
    B[1].y=7;

    strcpy(B[2].nom,"BT1");//3
    B[2].x=0;
    B[2].y=7;
    B[2].deplacement=1;

    strcpy(B[3].nom,"BT2");//4
    B[3].x=7;
    B[3].y=7;
    B[3].deplacement=1;

    strcpy(B[4].nom,"BF1");//5
    B[4].x=2;
    B[4].y=7;

    strcpy(B[5].nom,"BF2");//6
    B[5].x=5;
    B[5].y=7;

    strcpy(B[6].nom,"BC1");//7
    B[6].x=1;
    B[6].y=7;

    strcpy(B[7].nom,"BC2");//8
    B[7].x=6;
    B[7].y=7;

    strcpy(B[8].nom,"BP1");//9
    B[8].x=0;
    B[8].y=6;

    strcpy(B[9].nom,"BP2");//10
    B[9].x=1;
    B[9].y=6;

    strcpy(B[10].nom,"BP3");//11
    B[10].x=2;
    B[10].y=6;

    strcpy(B[11].nom,"BP4");//12
    B[11].x=3;
    B[11].y=6;

    strcpy(B[12].nom,"BP5");//13
    B[12].x=4;
    B[12].y=6;

    strcpy(B[13].nom,"BP6");//14
    B[13].x=5;
    B[13].y=6;

    strcpy(B[14].nom,"BP7");//15
    B[14].x=6;
    B[14].y=6;

    strcpy(B[15].nom,"BP8");//16
    B[15].x=7;
    B[15].y=6;

    //------------------------------------- Noir : ------------------------------------------------------------
    strcpy(N[0].nom,"NR");//17
    N[0].x=4;
    N[0].y=0;
    N[0].deplacement=1;

    strcpy(N[1].nom,"ND");//18
    N[1].x=3;
    N[1].y=0;

    strcpy(N[2].nom,"NT1");//19
    N[2].x=7;
    N[2].y=0;
    N[2].deplacement=1;

    strcpy(N[3].nom,"NT2");//20
    N[3].x=0;
    N[3].y=0;
    N[3].deplacement=1;

    strcpy(N[4].nom,"NF1");//21
    N[4].x=5;
    N[4].y=0;

    strcpy(N[5].nom,"NF2");//22
    N[5].x=2;
    N[5].y=0;

    strcpy(N[6].nom,"NC1");//23
    N[6].x=6;
    N[6].y=0;

    strcpy(N[7].nom,"NC2");//24
    N[7].x=1;
    N[7].y=0;

    strcpy(N[8].nom,"NP1");//25
    N[8].x=7;
    N[8].y=1;

    strcpy(N[9].nom,"NP2");//26
    N[9].x=6;
    N[9].y=1;

    strcpy(N[10].nom,"NP3");//27
    N[10].x=5;
    N[10].y=1;

    strcpy(N[11].nom,"NP4");//28
    N[11].x=4;
    N[11].y=1;

    strcpy(N[12].nom,"NP5");//29
    N[12].x=3;
    N[12].y=1;

    strcpy(N[13].nom,"NP6");//30
    N[13].x=2;
    N[13].y=1;

    strcpy(N[14].nom,"NP7");//31
    N[14].x=1;
    N[14].y=1;

    strcpy(N[15].nom,"NP8");//32
    N[15].x=0;
    N[15].y=1;

        // Test :
    /*for(i=0;i<16;i++){
        printf("%i\n",B[i].etat);
        printf("%s\n",B[i].nom);
        printf("(%i,%i)\n",B[i].x+1,B[i].y+1);
        printf("%i\n\n",B[i].deplacement);
        printf("%i\n",N[i].etat);
        printf("%s\n",N[i].nom);
        printf("(%i,%i)\n",N[i].x+1,N[i].y+1);
        printf("%i\n\n\n",N[i].deplacement);
    }*/
}

void Affiche(int Echiquier[8][8]){
    int i,j;

    printf("      1     2     3     4     5     6     7     8  \n");
    printf("    -----------------------------------------------\n");
    for(i=0;i<8;i++){
        printf(" %i | ",i+1);
        for(j=0;j<8;j++){

            if(Echiquier[i][j] == 0){
                printf("   ");
            }
            if(Echiquier[i][j] == 1){
                printf(" BR");
            }
            if(Echiquier[i][j] == 2){
                printf(" BD");
            }
            if(Echiquier[i][j] == 3){
                printf("BT1");
            }
            if(Echiquier[i][j] == 4){
                printf("BT2");
            }
            if(Echiquier[i][j] == 5){
                printf("BF1");
            }
            if(Echiquier[i][j] == 6){
                printf("BF2");
            }
            if(Echiquier[i][j] == 7){
                printf("BC1");
            }
            if(Echiquier[i][j] == 8){
                printf("BC2");
            }
            if(Echiquier[i][j] == 9){
                printf("BP1");
            }
            if(Echiquier[i][j] == 10){
                printf("BP2");
            }
            if(Echiquier[i][j] == 11){
                printf("BP3");
            }
            if(Echiquier[i][j] == 12){
                printf("BP4");
            }
            if(Echiquier[i][j] == 13){
                printf("BP5");
            }
            if(Echiquier[i][j] == 14){
                printf("BP6");
            }
            if(Echiquier[i][j] == 15){
                printf("BP7");
            }
            if(Echiquier[i][j] == 16){
                printf("BP8");
            }
            if(Echiquier[i][j] == 17){
                printf(" NR");
            }
            if(Echiquier[i][j] == 18){
                printf(" ND");
            }
            if(Echiquier[i][j] == 19){
                printf("NT1");
            }
            if(Echiquier[i][j] == 20){
                printf("NT2");
            }
            if(Echiquier[i][j] == 21){
                printf("NF1");
            }
            if(Echiquier[i][j] == 22){
                printf("NF2");
            }
            if(Echiquier[i][j] == 23){
                printf("NC1");
            }
            if(Echiquier[i][j] == 24){
                printf("NC2");
            }
            if(Echiquier[i][j] == 25){
                printf("NP1");
            }
            if(Echiquier[i][j] == 26){
                printf("NP2");
            }
            if(Echiquier[i][j] == 27){
                printf("NP3");
            }
            if(Echiquier[i][j] == 28){
                printf("NP4");
            }
            if(Echiquier[i][j] == 29){
                printf("NP5");
            }
            if(Echiquier[i][j] == 30){
                printf("NP6");
            }
            if(Echiquier[i][j] == 31){
                printf("NP7");
            }
            if(Echiquier[i][j] == 32){
                printf("NP8");
            }
            printf(" | ");
        }
        printf("%i\n",i+1);
        printf("    -----------------------------------------------\n");
    }
    printf("      1     2     3     4     5     6     7     8  \n\n");
}

int Verif(char rep[3], Blanc B[16], Noir N[16], int joueur){
    int i,v,w;
    if(joueur == 1){

        for(i=0;i<16;i++){
            if(strcmp(B[i].nom,rep) == 0){
                if(B[i].etat == 1){
                    v = 1;
                }
                if(B[i].etat == 0){
                    w = 1;
                }
            }
        }

    }

    if(joueur == 2){

        for(i=0;i<16;i++){
            if(strcmp(N[i].nom,rep) == 0){
                if(N[i].etat == 1){
                    v = 1;
                }
                if(N[i].etat == 0){
                    w = 1;
                }
            }
        }

    }

    if(w == 1){
        printf("La piece a ete vaincue\n\n");
        v=0;
    }else{
        if(v != 1){
            printf("La piece est soit inexistante, soit detenue par l'adversaire.\n\n");
            v=0;
        }
    }
    return v;
}

int Roi(int Echiquier[8][8], char rep[3], Blanc B[16], Noir N[16], int joueur){
    printf("\n");
    int t=1,i,j,X,Y,m=0,m1,n,n2,n3,b2,b3,rep2,Xrep,Yrep,compt=0,compt2=0,compt3=0;
    int pos=0,N2,N3,B2,B3;
    int p[8][3],M[8][2];

    if(joueur == 1){

        for(i=0;i<16;i++){  //position
            if(strcmp(B[i].nom,rep) == 0){
                n = i;
                X = B[i].x;
                Y = B[i].y;
            }
        }

//-------------------------------------- position possible ---------------------------------------------------------

        p[0][0] = X-1;
        p[0][1] = Y-1;

        p[1][0] = X-1;
        p[1][1] = Y;

        p[2][0] = X-1;
        p[2][1] = Y+1;

        p[3][0] = X;
        p[3][1] = Y-1;

        p[4][0] = X;
        p[4][1] = Y+1;

        p[5][0] = X+1;
        p[5][1] = Y-1;

        p[6][0] = X+1;
        p[6][1] = Y;

        p[7][0] = X+1;
        p[7][1] = Y+1;

//-------------------------------- verification des positions ----------------------------------------------

        for(i=0;i<8;i++){
            if(p[i][0] < 0 || p[i][0] > 7 || p[i][1] < 0 || p[i][1] > 7){
                p[i][2] = 4; //  case en dehors des limites
            }
        }

        for(i=0;i<8;i++){
            if(p[i][2]!=4){
                for(j=0;j<16;j++){
                    if(p[i][0] == B[j].x && p[i][1] == B[j].y){
                        p[i][2] = 3; // case alliée
                    }
                }
            }
        }

        for(i=0;i<8;i++){
            if(p[i][2] != 4 && p[i][2] != 3){
                for(j=0;j<16;j++){
                    if(p[i][0] == N[j].x && p[i][1] == N[j].y){
                        p[i][2] = 2; // case adverse
                        M[m][0] = i;
                        M[m][1] = j;
                        m++;
                        compt++;
                    }
                }
            }
        }
        m++;

        for(i=0;i<8;i++){
            if(p[i][2] != 4 && p[i][2] != 3 && p[i][2] != 2){
                p[i][2] = 1; // case libre
                compt++;
            }
        }

        /*for(i=0;i<8;i++){
            printf("%i %i %i\n",p[i][0]+1,p[i][1]+1,p[i][2]); //Test
        }*/

        for(i=0;i<16;i++){
            if(strcmp(B[i].nom,"BT1") == 0 && B[i].etat == 1){
                if(Echiquier[7][3] == 0 && Echiquier[7][2] == 0 && Echiquier[7][1] == 0 && B[n].deplacement == 1 && B[i].deplacement == 1){
                    b2 = i;
                    B2 = 1;
                }
            }

            if(strcmp(B[i].nom,"BT2") == 0 && B[i].etat == 1){
                if(Echiquier[7][5] == 0 && Echiquier[7][6] == 0 && B[n].deplacement == 1 && B[i].deplacement == 1){
                    b3 = i;
                    B3 = 1;
                }
            }
        }
        if(compt > 0){
            t = 0;
        }else{
            if(compt == 0){
                printf("Cette piece ne peut pas etre deplacer\n");
            }
        }

        if(t == 0){
//---------------------------------- demande au joueur --------------------------------------------------------------------

            printf("Voici le(s) deplacement(s) possible(s) de la piece :\n");
            for(i=0;i<8;i++){
                if(compt2 == 4){
                    printf("\n");
                }

                if(p[i][2] == 2 || p[i][2] == 1){
                    printf("  (%i,%i)",p[i][0]+1,p[i][1]+1);
                    compt2++;
                }
            }
            if(B2 == 1){
                printf("  (3,8)");
            }
            if(B3 == 1){
                printf("  (7,8)");
            }
            printf("\n");

            do{
            printf("Voulez-vous continuer ou choisir une autre piece ?\nTapez 1 pour continuer ou 2 pour deplacer une autre piece\n");
            scanf("%i",&rep2);
            fflush(stdin);
            }while(rep2 != 1 && rep2 != 2);

            if(rep2 == 1){
                //printf("rep 1\n");
                do{
                    printf("Veuillez saisir les coordonnees du deplacement que vous souhaitez\n");
                    printf("x : ");
                    scanf("%i",&Xrep);
                    fflush(stdin);
                    printf("y : ");
                    scanf("%i",&Yrep);
                    fflush(stdin);
                    printf("\n");
                    Xrep--;
                    Yrep--;
                    for(i=0;i<8;i++){
                        if(Xrep == p[i][0] && Yrep == p[i][1]){
                            if(p[i][2] == 1){
                                pos = 1;
                            }
                            if(p[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m;j++){
                                    if(M[j][0] == i){
                                        m1 = M[j][1];
                                    }
                                }
                            }
                            if(p[i][2] == 3 || p[i][2] == 4){
                                    compt3++;
                            }
                        }else{
                            compt3++;
                        }

                        if(Xrep == 2 && Yrep == 7 && B2 == 1){
                            pos = 1;
                            compt3 = 0;
                        }

                        if(Xrep == 6 && Yrep == 7 && B3 == 1){
                            pos = 1;
                            compt3 = 0;
                        }
                    }
                    if(compt3 == 8){
                        printf("Ce deplacement est impossible\n");
                    }
                }while(pos != 1 && pos != 2);

//--------------------------------- traitement du cas -------------------------------------------------------------
                if(pos == 1){
                    Echiquier[Yrep][Xrep] = Echiquier[Y][X];
                    Echiquier[Y][X] = 0;

                    B[n].x = Xrep;
                    B[n].y = Yrep;

                    if(Xrep == 2 && Yrep == 7){
                        Echiquier[7][3] = Echiquier[7][0];
                        Echiquier[7][0] = 0;

                        B[b2].x = 3;
                        B[b2].y = 7;

                        B[n].deplacement = 0;
                        B[b2].deplacement = 0;
                    }

                    if(Xrep == 6 && Yrep == 7){
                        Echiquier[7][5] = Echiquier[7][7];
                        Echiquier[7][7] = 0;

                        B[b3].x = 5;
                        B[b3].y = 7;

                        B[n].deplacement = 0;
                        B[b3].deplacement = 0;
                    }

                    if(B[n].deplacement == 1){
                        B[n].deplacement--;
                    }
                }
                if(pos == 2){
                    Echiquier[Yrep][Xrep] = Echiquier[Y][X];
                    Echiquier[Y][X] = 0;

                    B[n].x = Xrep;
                    B[n].y = Yrep;

                    N[m1].etat--;
                    N[m1].x = 100;
                    N[m1].y = 100;
                    if(B[n].deplacement == 1){
                        B[n].deplacement--;
                    }
                }
            }
            if(rep2 == 2){
                t = 1;
            }
        }

    }
//--------------------------------------------------- Joueur 2 ---------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
    if(joueur == 2){

        for(i=0;i<16;i++){  //position
            if(strcmp(N[i].nom,rep) == 0){
                n = i;
                X = N[i].x;
                Y = N[i].y;
            }
        }

//------------------------------------ position possible ----------------------------------------------------------------
        p[0][0] = X-1;
        p[0][1] = Y-1;

        p[1][0] = X-1;
        p[1][1] = Y;

        p[2][0] = X-1;
        p[2][1] = Y+1;

        p[3][0] = X;
        p[3][1] = Y-1;

        p[4][0] = X;
        p[4][1] = Y+1;

        p[5][0] = X+1;
        p[5][1] = Y-1;

        p[6][0] = X+1;
        p[6][1] = Y;

        p[7][0] = X+1;
        p[7][1] = Y+1;

//------------------------------------- verification des positions --------------------------------------------------
        for(i=0;i<8;i++){
            if(p[i][0] < 0 || p[i][0] > 7 || p[i][1] < 0 || p[i][1] > 7){
                p[i][2] = 4; //  case en dehors des limites
            }
        }

        for(i=0;i<8;i++){
            if(p[i][2]!=4){
                for(j=0;j<16;j++){
                    if(p[i][0] == N[j].x && p[i][1] == N[j].y){
                        p[i][2] = 3; // case alliée
                    }
                }
            }
        }

        for(i=0;i<8;i++){
            if(p[i][2] != 4 && p[i][2] != 3){
                for(j=0;j<16;j++){
                    if(p[i][0] == B[j].x && p[i][1] == B[j].y){
                        p[i][2] = 2; // case adverse
                        M[m][0] = i;
                        M[m][1] = j;
                        compt++;
                    }
                }
            }
        }

        for(i=0;i<8;i++){
            if(p[i][2] != 4 && p[i][2] != 3 && p[i][2] != 2){
                p[i][2] = 1; // case libre
                compt++;
            }
        }

        /*for(i=0;i<8;i++){
            printf("%i %i %i\n",p[i][0]+1,p[i][1]+1,p[i][2]); //Test
        }*/

        for(i=0;i<16;i++){
            if(strcmp(N[i].nom,"NT1") == 0 && N[i].etat == 1){
                if(Echiquier[0][5] == 0 && Echiquier[0][6] == 0 && N[n].deplacement == 1 && N[i].deplacement == 1){
                    n2 = i;
                    N2 = 1;
                }
            }

            if(strcmp(N[i].nom,"NT2") == 0 && N[i].etat == 1){
                if(Echiquier[0][3] == 0 && Echiquier[0][2] == 0 && Echiquier[0][1] == 0 && N[n].deplacement == 1 && N[i].deplacement == 1){
                    n3 = i;
                    N3 = 1;
                }
            }
        }

        if(compt > 0){
            t = 0;
        }else{
            if(compt == 0){
                printf("Cette piece ne peut pas etre deplacer\n");
            }
        }

        if(t == 0){
//------------------------------------ demande au joueur -----------------------------------------------------------------
            printf("Voici le(s) deplacement(s) possible(s) de la piece :\n");
            for(i=0;i<8;i++){
                if(compt2 == 4){
                    printf("\n");
                }

                if(p[i][2] == 2 || p[i][2] == 1){
                    printf("  (%i,%i)",p[i][0]+1,p[i][1]+1);
                    compt2++;
                }
            }
            if(N2 == 1){
                printf("  (7,1)");
            }
            if(N3 == 1){
                printf("  (3,1)");
            }
            printf("\n");

            do{
            printf("Voulez-vous continuer ou choisir une autre piece ?\nTapez 1 pour continuer ou 2 pour deplacer une autre piece\n");
            scanf("%i",&rep2);
            fflush(stdin);
            }while(rep2 != 1 && rep2 != 2);

            if(rep2 == 1){
                //printf("rep 1\n");
                do{
                    printf("Veuillez saisir les coordonnees du deplacement que vous souhaitez\n");
                    printf("x : ");
                    scanf("%i",&Xrep);
                    fflush(stdin);
                    printf("y : ");
                    scanf("%i",&Yrep);
                    fflush(stdin);
                    printf("\n");
                    Xrep--;
                    Yrep--;
                    for(i=0;i<8;i++){
                        if(Xrep == p[i][0] && Yrep == p[i][1]){
                            if(p[i][2] == 1){
                                pos = 1;
                            }
                            if(p[i][2] == 2){
                                pos = 2;
                                for(j=0;j<8;j++){
                                    if(M[j][0] == i){
                                        m1 = M[j][1];
                                    }
                                }
                            }
                            if(p[i][2] == 3 || p[i][2] == 4){
                                    compt3++;
                            }
                        }else{
                            compt3++;
                        }

                        if(Xrep == 6 && Yrep == 0 && N2 == 1){
                            pos = 1;
                            compt3 = 0;
                        }

                        if(Xrep == 2 && Yrep == 0 && N3 == 1){
                            pos = 1;
                            compt3 = 0;
                        }
                    }
                    if(compt3 == 8){
                        printf("Ce deplacement est impossible\n");
                    }
                }while(pos != 1 && pos != 2);

//--------------------------------- traitement du cas -------------------------------------------------------------
                if(pos == 1){
                    Echiquier[Yrep][Xrep] = Echiquier[Y][X];
                    Echiquier[Y][X] = 0;

                    N[n].x = Xrep;
                    N[n].y = Yrep;

                    if(Xrep == 6 && Yrep == 0){
                        Echiquier[0][5] = Echiquier[0][7];
                        Echiquier[0][7] = 0;

                        N[n2].x = 5;
                        N[n2].y = 0;

                        N[n].deplacement = 0;
                        N[n2].deplacement = 0;
                    }

                    if(Xrep == 2 && Yrep == 0){
                        Echiquier[0][3] = Echiquier[0][0];
                        Echiquier[0][0] = 0;

                        N[n3].x = 3;
                        N[n3].y = 0;

                        N[n].deplacement = 0;
                        N[n3].deplacement = 0;
                    }

                    if(N[n].deplacement == 1){
                        N[n].deplacement--;
                    }
                }
                if(pos == 2){
                    Echiquier[Yrep][Xrep] = Echiquier[Y][X];
                    Echiquier[Y][X] = 0;

                    N[n].x = Xrep;
                    N[n].y = Yrep;

                    B[m1].etat--;
                    B[m1].x = 100;
                    B[m1].y = 100;

                    if(N[n].deplacement == 1){
                        N[n].deplacement--;
                    }
                }
            }
            if(rep2 == 2){
                t = 1;
            }
        }

    }
    return t;
}

int Dame(int Echiquier[8][8], char rep[3], Blanc B[16], Noir N[16], int joueur){
    printf("\n");
    int t=1,a,i,j,n,X,Y,r,m,rep2,Xrep,Yrep,pos,compt=0,compt2,compt3=0,m1=0,m2=0,m3=0,m4=0,m5=0,m6=0,m7=0,m8=0;
    int T1=7,T2=7,T3=7,T4=7,T5=7,T6=7,T7=7,T8=7;
    int t1[7][3],t2[7][3],t3[7][3],t4[7][3],t5[7][3],t6[7][3],t7[7][3],t8[7][3];
    int M1[7][2],M2[7][2],M3[7][2],M4[7][2],M5[7][2],M6[7][2],M7[7][2],M8[7][2];

    if(joueur == 1){

        for(i=0;i<16;i++){  //position
            if(strcmp(B[i].nom,rep) == 0){
                n = i;
                X = B[i].x;
                Y = B[i].y;
            }
        }

//-------------------------------------- position possible ---------------------------------------------------------

        for(i=0;i<T1;i++){
            t1[i][0] = X;
            t1[i][1] = Y-1-i;

            if(t1[i][1] < 0){
                a = i;
                T1 = a;
                i = T1-1;
            }
        }

        for(i=0;i<T2;i++){
            t2[i][0] = X-1-i;
            t2[i][1] = Y-1-i;

            if(t2[i][0] < 0 || t2[i][1] < 0){
                a = i;
                T2 = a;
                i = T2-1;
            }
        }

        for(i=0;i<T3;i++){
            t3[i][0] = X-1-i;
            t3[i][1] = Y;

            if(t3[i][0] < 0){
                a = i;
                T3 = a;
                i = T3-1;
            }
        }

        for(i=0;i<T4;i++){
            t4[i][0] = X-1-i;
            t4[i][1] = Y+1+i;

            if(t4[i][0] < 0 || t4[i][1] > 7){
                a = i;
                T4 = a;
                i = T4-1;
            }
        }

        for(i=0;i<T5;i++){
            t5[i][0] = X;
            t5[i][1] = Y+1+i;

            if(t5[i][1] > 7){
                a = i;
                T5 = a;
                i = T5-1;
            }
        }

        for(i=0;i<T6;i++){
            t6[i][0] = X+1+i;
            t6[i][1] = Y+1+i;

            if(t6[i][0] > 7 || t6[i][1] > 7){
                a = i;
                T6 = a;
                i = T6-1;
            }
        }

        for(i=0;i<T7;i++){
            t7[i][0] = X+1+i;
            t7[i][1] = Y;

            if(t7[i][0] > 7){
                a = i;
                T7 = a;
                i = T7-1;
            }
        }

        for(i=0;i<T8;i++){
            t8[i][0] = X+1+i;
            t8[i][1] = Y-1-i;

            if(t8[i][0] > 7 || t8[i][1] < 0){
                a = i;
                T8 = a;
                i = T8-1;
            }
        }

//-------------------------------- verification des positions ----------------------------------------------

        r = T1;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t1[i][0] == B[j].x && t1[i][1] == B[j].y){
                     T1 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T2;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t2[i][0] == B[j].x && t2[i][1] == B[j].y){
                     T2 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T3;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t3[i][0] == B[j].x && t3[i][1] == B[j].y){
                     T3 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T4;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t4[i][0] == B[j].x && t4[i][1] == B[j].y){
                     T4 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T5;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t5[i][0] == B[j].x && t5[i][1] == B[j].y){
                     T5 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T6;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t6[i][0] == B[j].x && t6[i][1] == B[j].y){
                     T6 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T7;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t7[i][0] == B[j].x && t7[i][1] == B[j].y){
                     T7 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T8;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t8[i][0] == B[j].x && t8[i][1] == B[j].y){
                     T8 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

    // 2 :

        r = T1;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t1[i][0] == N[j].x && t1[i][1] == N[j].y){
                    t1[i][2] = 2; // case adverse
                    M1[m1][0] = i;
                    M1[m1][1] = j;
                    m1++;
                    T1 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m1++;

        r = T2;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t2[i][0] == N[j].x && t2[i][1] == N[j].y){
                    t2[i][2] = 2; // case adverse
                    M2[m2][0] = i;
                    M2[m2][1] = j;
                    m2++;
                    T2 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m2++;

        r = T3;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t3[i][0] == N[j].x && t3[i][1] == N[j].y){
                    t3[i][2] = 2; // case adverse
                    M3[m1][0] = i;
                    M3[m1][1] = j;
                    m3++;
                    T3 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m3++;

        r = T4;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t4[i][0] == N[j].x && t4[i][1] == N[j].y){
                    t4[i][2] = 2; // case adverse
                    M4[m4][0] = i;
                    M4[m4][1] = j;
                    m4++;
                    T4 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m4++;

        r = T5;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t5[i][0] == N[j].x && t5[i][1] == N[j].y){
                    t5[i][2] = 2; // case adverse
                    M5[m5][0] = i;
                    M5[m5][1] = j;
                    m5++;
                    T5 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m5++;

        r = T6;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t6[i][0] == N[j].x && t6[i][1] == N[j].y){
                    t6[i][2] = 2; // case adverse
                    M6[m6][0] = i;
                    M6[m6][1] = j;
                    m6++;
                    T6 = i+1;
                    i = r-1;
                    compt++;
                }
            }
        }
        m6++;

        r = T7;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t7[i][0] == N[j].x && t7[i][1] == N[j].y){
                    t7[i][2] = 2; // case adverse
                    M7[m7][0] = i;
                    M7[m7][1] = j;
                    m7++;
                    T7 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m7++;

        r = T8;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t8[i][0] == N[j].x && t8[i][1] == N[j].y){
                    t8[i][2] = 2; // case adverse
                    M8[m8][0] = i;
                    M8[m8][1] = j;
                    m8++;
                    T8 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m8++;

    // 1 :

                for(i=0;i<T1;i++){
                    if(t1[i][2] != 2){
                        t1[i][2] = 1; // case libre
                        compt++;
                    }
                }

                for(i=0;i<T2;i++){
                    if(t2[i][2] != 2){
                        t2[i][2] = 1; // case libre
                        compt++;
                    }
                }

                for(i=0;i<T3;i++){
                    if(t3[i][2] != 2){
                        t3[i][2] = 1; // case libre
                        compt++;
                    }
                }

                for(i=0;i<T4;i++){
                    if(t4[i][2] != 2){
                        t4[i][2] = 1; // case libre
                        compt++;
                    }
                }

                for(i=0;i<T5;i++){
                    if(t5[i][2] != 2){
                        t5[i][2] = 1; // case libre
                        compt++;
                    }
                }

                for(i=0;i<T6;i++){
                    if(t6[i][2] != 2){
                        t6[i][2] = 1; // case libre
                        compt++;
                    }
                }

                for(i=0;i<T7;i++){
                    if(t7[i][2] != 2){
                        t7[i][2] = 1; // case libre
                        compt++;
                    }
                }

                for(i=0;i<T8;i++){
                    if(t8[i][2] != 2){
                        t8[i][2] = 1; // case libre
                        compt++;
                    }
                }


        if(compt > 0){
            t = 0;
        }else{
            if(compt == 0){
                printf("Cette piece ne peut pas etre deplacer\n");
            }
        }

        if(t == 0){
//---------------------------------- demande au joueur --------------------------------------------------------------------

            printf("Voici le(s) deplacement(s) possible(s) de la piece :\n");

            compt2 = 0;
            for(i=0;i<T1;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t1[i][0]+1,t1[i][1]+1);
                compt2++;

                if(i == T1-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T2;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t2[i][0]+1,t2[i][1]+1);
                compt2++;

                if(i == T2-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T3;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t3[i][0]+1,t3[i][1]+1);
                compt2++;

                if(i == T3-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T4;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t4[i][0]+1,t4[i][1]+1);
                compt2++;

                if(i == T4-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T5;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t5[i][0]+1,t5[i][1]+1);
                compt2++;

                if(i == T5-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T6;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t6[i][0]+1,t6[i][1]+1);
                compt2++;

                if(i == T6-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T7;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t7[i][0]+1,t7[i][1]+1);
                compt2++;

                if(i == T7-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T8;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t8[i][0]+1,t8[i][1]+1);
                compt2++;

                if(i == T8-1){
                    printf("\n");
                }
            }

            do{
            printf("Voulez-vous continuer ou choisir une autre piece ?\nTapez 1 pour continuer ou 2 pour deplacer une autre piece\n");
            scanf("%i",&rep2);
            fflush(stdin);
            }while(rep2 != 1 && rep2 != 2);

            if(rep2 == 1){
                do{
                    printf("Veuillez saisir les coordonnees du deplacement que vous souhaitez\n");
                    printf("x : ");
                    scanf("%i",&Xrep);
                    fflush(stdin);
                    printf("y : ");
                    scanf("%i",&Yrep);
                    fflush(stdin);
                    printf("\n");
                    Xrep--;
                    Yrep--;

                    for(i=0;i<T1;i++){
                        if(Xrep == t1[i][0] && Yrep == t1[i][1]){
                            if(t1[i][2] == 1){
                                pos = 1;
                            }
                            if(t1[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m1;j++){
                                    if(M1[j][0] == i){
                                        m = M1[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T2;i++){
                        if(Xrep == t2[i][0] && Yrep == t2[i][1]){
                            if(t2[i][2] == 1){
                                pos = 1;
                            }
                            if(t2[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m2;j++){
                                    if(M2[j][0] == i){
                                        m = M2[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T3;i++){
                        if(Xrep == t3[i][0] && Yrep == t3[i][1]){
                            if(t3[i][2] == 1){
                                pos = 1;
                            }
                            if(t3[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m3;j++){
                                    if(M3[j][0] == i){
                                        m = M3[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T4;i++){
                        if(Xrep == t4[i][0] && Yrep == t4[i][1]){
                            if(t4[i][2] == 1){
                                pos = 1;
                            }
                            if(t4[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m4;j++){
                                    if(M4[j][0] == i){
                                        m = M4[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T5;i++){
                        if(Xrep == t5[i][0] && Yrep == t5[i][1]){
                            if(t5[i][2] == 1){
                                pos = 1;
                            }
                            if(t5[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m5;j++){
                                    if(M5[j][0] == i){
                                        m = M5[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T6;i++){
                        if(Xrep == t6[i][0] && Yrep == t6[i][1]){
                            if(t6[i][2] == 1){
                                pos = 1;
                            }
                            if(t6[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m6;j++){
                                    if(M6[j][0] == i){
                                        m = M6[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T7;i++){
                        if(Xrep == t7[i][0] && Yrep == t7[i][1]){
                            if(t7[i][2] == 1){
                                pos = 1;
                            }
                            if(t7[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m7;j++){
                                    if(M7[j][0] == i){
                                        m = M7[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T8;i++){
                        if(Xrep == t8[i][0] && Yrep == t8[i][1]){
                            if(t8[i][2] == 1){
                                pos = 1;
                            }
                            if(t8[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m8;j++){
                                    if(M8[j][0] == i){
                                        m = M8[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    if(compt3 == T1+T2+T3+T4+T5+T6+T7+T8){
                        printf("Ce deplacement est impossible\n");
                    }
                }while(pos != 1 && pos != 2);

//--------------------------------- traitement du cas -------------------------------------------------------------
                if(pos == 1){
                    Echiquier[Yrep][Xrep] = Echiquier[Y][X];
                    Echiquier[Y][X] = 0;

                    B[n].x = Xrep;
                    B[n].y = Yrep;
                }
                if(pos == 2){
                    Echiquier[Yrep][Xrep] = Echiquier[Y][X];
                    Echiquier[Y][X] = 0;

                    B[n].x = Xrep;
                    B[n].y = Yrep;

                    N[m].etat--;
                    N[m].x = 100;
                    N[m].y = 100;
                }
            }
            if(rep2 == 2){
                t = 1;
            }
        }
    }

//--------------------------------------------------- Joueur 2 ---------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
    if(joueur == 2){

        for(i=0;i<16;i++){  //position
            if(strcmp(N[i].nom,rep) == 0){
                n = i;
                X = N[i].x;
                Y = N[i].y;
            }
        }
//-------------------------------------- position possible ---------------------------------------------------------
        for(i=0;i<T1;i++){
            t1[i][0] = X;
            t1[i][1] = Y-1-i;

            if(t1[i][1] < 0){
                a = i;
                T1 = a;
                i = T1-1;
            }
        }

        for(i=0;i<T2;i++){
            t2[i][0] = X-1-i;
            t2[i][1] = Y-1-i;

            if(t2[i][0] < 0 || t2[i][1] < 0){
                a = i;
                T2 = a;
                i = T2-1;
            }
        }

        for(i=0;i<T3;i++){
            t3[i][0] = X-1-i;
            t3[i][1] = Y;

            if(t3[i][0] < 0){
                a = i;
                T3 = a;
                i = T3-1;
            }
        }

        for(i=0;i<T4;i++){
            t4[i][0] = X-1-i;
            t4[i][1] = Y+1+i;

            if(t4[i][0] < 0 || t4[i][1] > 7){
                a = i;
                T4 = a;
                i = T4-1;
            }
        }

        for(i=0;i<T5;i++){
            t5[i][0] = X;
            t5[i][1] = Y+1+i;

            if(t5[i][1] > 7){
                a = i;
                T5 = a;
                i = T5-1;
            }
        }

        for(i=0;i<T6;i++){
            t6[i][0] = X+1+i;
            t6[i][1] = Y+1+i;

            if(t6[i][0] > 7 || t6[i][1] > 7){
                a = i;
                T6 = a;
                i = T6-1;
            }
        }

        for(i=0;i<T7;i++){
            t7[i][0] = X+1+i;
            t7[i][1] = Y;

            if(t7[i][0] > 7){
                a = i;
                T7 = a;
                i = T7-1;
            }
        }

        for(i=0;i<T8;i++){
            t8[i][0] = X+1+i;
            t8[i][1] = Y-1-i;

            if(t8[i][0] > 7 || t8[i][1] < 0){
                a = i;
                T8 = a;
                i = T8-1;
            }
        }

//-------------------------------- verification des positions ----------------------------------------------

        r = T1;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t1[i][0] == N[j].x && t1[i][1] == N[j].y){
                     T1 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T2;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t2[i][0] == N[j].x && t2[i][1] == N[j].y){
                     T2 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T3;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t3[i][0] == N[j].x && t3[i][1] == N[j].y){
                     T3 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T4;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t4[i][0] == N[j].x && t4[i][1] == N[j].y){
                     T4 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T5;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t5[i][0] == N[j].x && t5[i][1] == N[j].y){
                     T5 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T6;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t6[i][0] == N[j].x && t6[i][1] == N[j].y){
                     T6 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T7;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t7[i][0] == N[j].x && t7[i][1] == N[j].y){
                     T7 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T8;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t8[i][0] == N[j].x && t8[i][1] == N[j].y){
                     T8 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

    // 2 :

        r = T1;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t1[i][0] == B[j].x && t1[i][1] == B[j].y){
                    t1[i][2] = 2; // case adverse
                    M1[m1][0] = i;
                    M1[m1][1] = j;
                    m1++;
                    T1 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m1++;

        r = T2;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t2[i][0] == B[j].x && t2[i][1] == B[j].y){
                    t2[i][2] = 2; // case adverse
                    M2[m2][0] = i;
                    M2[m2][1] = j;
                    m2++;
                    T2 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m2++;

        r = T3;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t3[i][0] == B[j].x && t3[i][1] == B[j].y){
                    t3[i][2] = 2; // case adverse
                    M3[m1][0] = i;
                    M3[m1][1] = j;
                    m3++;
                    T3 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m3++;

        r = T4;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t4[i][0] == B[j].x && t4[i][1] == B[j].y){
                    t4[i][2] = 2; // case adverse
                    M4[m4][0] = i;
                    M4[m4][1] = j;
                    m4++;
                    T4 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m4++;

        r = T5;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t5[i][0] == B[j].x && t5[i][1] == B[j].y){
                    t5[i][2] = 2; // case adverse
                    M5[m5][0] = i;
                    M5[m5][1] = j;
                    m5++;
                    T5 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m5++;

        r = T6;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t6[i][0] == B[j].x && t6[i][1] == B[j].y){
                    t6[i][2] = 2; // case adverse
                    M6[m6][0] = i;
                    M6[m6][1] = j;
                    m6++;
                    T6 = i+1;
                    i = r-1;
                    compt++;
                }
            }
        }
        m6++;

        r = T7;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t7[i][0] == B[j].x && t7[i][1] == B[j].y){
                    t7[i][2] = 2; // case adverse
                    M7[m7][0] = i;
                    M7[m7][1] = j;
                    m7++;
                    T7 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m7++;

        r = T8;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t8[i][0] == B[j].x && t8[i][1] == B[j].y){
                    t8[i][2] = 2; // case adverse
                    M8[m8][0] = i;
                    M8[m8][1] = j;
                    m8++;
                    T8 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m8++;

    // 1 :

                for(i=0;i<T1;i++){
                    if(t1[i][2] != 2){
                        t1[i][2] = 1; // case libre
                        compt++;
                    }
                }

                for(i=0;i<T2;i++){
                    if(t2[i][2] != 2){
                        t2[i][2] = 1; // case libre
                        compt++;
                    }
                }

                for(i=0;i<T3;i++){
                    if(t3[i][2] != 2){
                        t3[i][2] = 1; // case libre
                        compt++;
                    }
                }

                for(i=0;i<T4;i++){
                    if(t4[i][2] != 2){
                        t4[i][2] = 1; // case libre
                        compt++;
                    }
                }

                for(i=0;i<T5;i++){
                    if(t5[i][2] != 2){
                        t5[i][2] = 1; // case libre
                        compt++;
                    }
                }

                for(i=0;i<T6;i++){
                    if(t6[i][2] != 2){
                        t6[i][2] = 1; // case libre
                        compt++;
                    }
                }

                for(i=0;i<T7;i++){
                    if(t7[i][2] != 2){
                        t7[i][2] = 1; // case libre
                        compt++;
                    }
                }

                for(i=0;i<T8;i++){
                    if(t8[i][2] != 2){
                        t8[i][2] = 1; // case libre
                        compt++;
                    }
                }


        if(compt > 0){
            t = 0;
        }else{
            if(compt == 0){
                printf("Cette piece ne peut pas etre deplacer\n");
            }
        }

        if(t == 0){
//---------------------------------- demande au joueur --------------------------------------------------------------------

            printf("Voici le(s) deplacement(s) possible(s) de la piece :\n");

            compt2 = 0;
            for(i=0;i<T1;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t1[i][0]+1,t1[i][1]+1);
                compt2++;

                if(i == T1-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T2;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t2[i][0]+1,t2[i][1]+1);
                compt2++;

                if(i == T2-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T3;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t3[i][0]+1,t3[i][1]+1);
                compt2++;

                if(i == T3-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T4;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t4[i][0]+1,t4[i][1]+1);
                compt2++;

                if(i == T4-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T5;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t5[i][0]+1,t5[i][1]+1);
                compt2++;

                if(i == T5-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T6;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t6[i][0]+1,t6[i][1]+1);
                compt2++;

                if(i == T6-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T7;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t7[i][0]+1,t7[i][1]+1);
                compt2++;

                if(i == T7-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T8;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t8[i][0]+1,t8[i][1]+1);
                compt2++;

                if(i == T8-1){
                    printf("\n");
                }
            }

            do{
            printf("Voulez-vous continuer ou choisir une autre piece ?\nTapez 1 pour continuer ou 2 pour deplacer une autre piece\n");
            scanf("%i",&rep2);
            fflush(stdin);
            }while(rep2 != 1 && rep2 != 2);

            if(rep2 == 1){
                do{
                    printf("Veuillez saisir les coordonnees du deplacement que vous souhaitez\n");
                    printf("x : ");
                    scanf("%i",&Xrep);
                    fflush(stdin);
                    printf("y : ");
                    scanf("%i",&Yrep);
                    fflush(stdin);
                    printf("\n");
                    Xrep--;
                    Yrep--;

                    for(i=0;i<T1;i++){
                        if(Xrep == t1[i][0] && Yrep == t1[i][1]){
                            if(t1[i][2] == 1){
                                pos = 1;
                            }
                            if(t1[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m1;j++){
                                    if(M1[j][0] == i){
                                        m = M1[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T2;i++){
                        if(Xrep == t2[i][0] && Yrep == t2[i][1]){
                            if(t2[i][2] == 1){
                                pos = 1;
                            }
                            if(t2[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m2;j++){
                                    if(M2[j][0] == i){
                                        m = M2[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T3;i++){
                        if(Xrep == t3[i][0] && Yrep == t3[i][1]){
                            if(t3[i][2] == 1){
                                pos = 1;
                            }
                            if(t3[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m3;j++){
                                    if(M3[j][0] == i){
                                        m = M3[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T4;i++){
                        if(Xrep == t4[i][0] && Yrep == t4[i][1]){
                            if(t4[i][2] == 1){
                                pos = 1;
                            }
                            if(t4[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m4;j++){
                                    if(M4[j][0] == i){
                                        m = M4[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T5;i++){
                        if(Xrep == t5[i][0] && Yrep == t5[i][1]){
                            if(t5[i][2] == 1){
                                pos = 1;
                            }
                            if(t5[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m5;j++){
                                    if(M5[j][0] == i){
                                        m = M5[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T6;i++){
                        if(Xrep == t6[i][0] && Yrep == t6[i][1]){
                            if(t6[i][2] == 1){
                                pos = 1;
                            }
                            if(t6[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m6;j++){
                                    if(M6[j][0] == i){
                                        m = M6[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T7;i++){
                        if(Xrep == t7[i][0] && Yrep == t7[i][1]){
                            if(t7[i][2] == 1){
                                pos = 1;
                            }
                            if(t7[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m7;j++){
                                    if(M7[j][0] == i){
                                        m = M7[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T8;i++){
                        if(Xrep == t8[i][0] && Yrep == t8[i][1]){
                            if(t8[i][2] == 1){
                                pos = 1;
                            }
                            if(t8[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m8;j++){
                                    if(M8[j][0] == i){
                                        m = M8[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    if(compt3 == T1+T2+T3+T4+T5+T6+T7+T8){
                        printf("Ce deplacement est impossible\n");
                    }
                }while(pos != 1 && pos != 2);

//--------------------------------- traitement du cas -------------------------------------------------------------
                if(pos == 1){
                    Echiquier[Yrep][Xrep] = Echiquier[Y][X];
                    Echiquier[Y][X] = 0;

                    N[n].x = Xrep;
                    N[n].y = Yrep;
                }
                if(pos == 2){
                    Echiquier[Yrep][Xrep] = Echiquier[Y][X];
                    Echiquier[Y][X] = 0;

                    N[n].x = Xrep;
                    N[n].y = Yrep;

                    B[m].etat--;
                    B[m].x = 100;
                    B[m].y = 100;
                }
            }
            if(rep2 == 2){
                t = 1;
            }
        }
    }
    return t;
}

int Tour(int Echiquier[8][8], char rep[3], Blanc B[16], Noir N[16], int joueur){
    printf("\n");
    int t=1,i,j,r,n,X,Y,a,m,rep2,Xrep,Yrep,pos,compt=0,compt2,compt3=0,m1=0,m2=0,m3=0,m4=0;
    int T1=7,T2=7,T3=7,T4=7;
    int t1[7][3],t2[7][3],t3[7][3],t4[7][3];
    int M1[7][2],M2[7][2],M3[7][2],M4[7][2];

    if(joueur == 1){

        for(i=0;i<16;i++){  //position
            if(strcmp(B[i].nom,rep) == 0){
                n = i;
                X = B[i].x;
                Y = B[i].y;
            }
        }
//-------------------------------------- position possible ---------------------------------------------------------
        for(i=0;i<T1;i++){
            t1[i][0] = X;
            t1[i][1] = Y-1-i;

            if(t1[i][1] < 0){
                a = i;
                T1 = a;
                i = T1-1;
            }
        }

        for(i=0;i<T2;i++){
            t2[i][0] = X-1-i;
            t2[i][1] = Y;

            if(t2[i][0] < 0){
                a = i;
                T2 = a;
                i = T2-1;
            }
        }

        for(i=0;i<T3;i++){
            t3[i][0] = X;
            t3[i][1] = Y+1+i;

            if(t3[i][1] > 7){
                a = i;
                T3 = a;
                i = T3-1;
            }
        }

        for(i=0;i<T4;i++){
            t4[i][0] = X+1+i;
            t4[i][1] = Y;

            if(t4[i][0] > 7){
                a = i;
                T4 = a;
                i = T4-1;
            }
        }

        //-------------------------------- verification des positions ----------------------------------------------

        r = T1;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t1[i][0] == B[j].x && t1[i][1] == B[j].y){
                     T1 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T2;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t2[i][0] == B[j].x && t2[i][1] == B[j].y){
                     T2 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T3;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t3[i][0] == B[j].x && t3[i][1] == B[j].y){
                     T3 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T4;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t4[i][0] == B[j].x && t4[i][1] == B[j].y){
                     T4 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

    // 2 :

        r = T1;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t1[i][0] == N[j].x && t1[i][1] == N[j].y){
                    t1[i][2] = 2; // case adverse
                    M1[m1][0] = i;
                    M1[m1][1] = j;
                    m1++;
                    T1 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m1++;

        r = T2;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t2[i][0] == N[j].x && t2[i][1] == N[j].y){
                    t2[i][2] = 2; // case adverse
                    M2[m2][0] = i;
                    M2[m2][1] = j;
                    m2++;
                    T2 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m2++;

        r = T3;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t3[i][0] == N[j].x && t3[i][1] == N[j].y){
                    t3[i][2] = 2; // case adverse
                    M3[m1][0] = i;
                    M3[m1][1] = j;
                    m3++;
                    T3 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m3++;

        r = T4;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t4[i][0] == N[j].x && t4[i][1] == N[j].y){
                    t4[i][2] = 2; // case adverse
                    M4[m4][0] = i;
                    M4[m4][1] = j;
                    m4++;
                    T4 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m4++;

    // 1 :

        for(i=0;i<T1;i++){
            if(t1[i][2] != 2){
                t1[i][2] = 1; // case libre
                compt++;
            }
        }

        for(i=0;i<T2;i++){
            if(t2[i][2] != 2){
                t2[i][2] = 1; // case libre
                compt++;
            }
        }

        for(i=0;i<T3;i++){
            if(t3[i][2] != 2){
                t3[i][2] = 1; // case libre
                compt++;
            }
        }

        for(i=0;i<T4;i++){
            if(t4[i][2] != 2){
                t4[i][2] = 1; // case libre
                compt++;
            }
        }

        if(compt > 0){
            t = 0;
        }else{
            if(compt == 0){
                printf("Cette piece ne peut pas etre deplacer\n");
            }
        }

        if(t == 0){
//---------------------------------- demande au joueur --------------------------------------------------------------------

            printf("Voici le(s) deplacement(s) possible(s) de la piece :\n");

            compt2 = 0;
            for(i=0;i<T1;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t1[i][0]+1,t1[i][1]+1);
                compt2++;

                if(i == T1-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T2;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t2[i][0]+1,t2[i][1]+1);
                compt2++;

                if(i == T2-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T3;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t3[i][0]+1,t3[i][1]+1);
                compt2++;

                if(i == T3-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T4;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t4[i][0]+1,t4[i][1]+1);
                compt2++;

                if(i == T4-1){
                    printf("\n");
                }
            }

            do{
            printf("Voulez-vous continuer ou choisir une autre piece ?\nTapez 1 pour continuer ou 2 pour deplacer une autre piece\n");
            scanf("%i",&rep2);
            fflush(stdin);
            }while(rep2 != 1 && rep2 != 2);

            if(rep2 == 1){
                do{
                    printf("Veuillez saisir les coordonnees du deplacement que vous souhaitez\n");
                    printf("x : ");
                    scanf("%i",&Xrep);
                    fflush(stdin);
                    printf("y : ");
                    scanf("%i",&Yrep);
                    fflush(stdin);
                    printf("\n");
                    Xrep--;
                    Yrep--;

                    for(i=0;i<T1;i++){
                        if(Xrep == t1[i][0] && Yrep == t1[i][1]){
                            if(t1[i][2] == 1){
                                pos = 1;
                            }
                            if(t1[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m1;j++){
                                    if(M1[j][0] == i){
                                        m = M1[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T2;i++){
                        if(Xrep == t2[i][0] && Yrep == t2[i][1]){
                            if(t2[i][2] == 1){
                                pos = 1;
                            }
                            if(t2[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m2;j++){
                                    if(M2[j][0] == i){
                                        m = M2[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T3;i++){
                        if(Xrep == t3[i][0] && Yrep == t3[i][1]){
                            if(t3[i][2] == 1){
                                pos = 1;
                            }
                            if(t3[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m3;j++){
                                    if(M3[j][0] == i){
                                        m = M3[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T4;i++){
                        if(Xrep == t4[i][0] && Yrep == t4[i][1]){
                            if(t4[i][2] == 1){
                                pos = 1;
                            }
                            if(t4[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m4;j++){
                                    if(M4[j][0] == i){
                                        m = M4[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    if(compt3 == T1+T2+T3+T4){
                        printf("Ce deplacement est impossible\n");
                    }
                }while(pos != 1 && pos != 2);

//--------------------------------- traitement du cas -------------------------------------------------------------
                if(pos == 1){
                    Echiquier[Yrep][Xrep] = Echiquier[Y][X];
                    Echiquier[Y][X] = 0;

                    B[n].x = Xrep;
                    B[n].y = Yrep;
                }
                if(pos == 2){
                    Echiquier[Yrep][Xrep] = Echiquier[Y][X];
                    Echiquier[Y][X] = 0;

                    B[n].x = Xrep;
                    B[n].y = Yrep;

                    N[m].etat--;
                    N[m].x = 100;
                    N[m].y = 100;

                }
            }
            if(rep2 == 2){
                t = 1;
            }
        }
    }

    if(joueur == 2){

        for(i=0;i<16;i++){  //position
            if(strcmp(N[i].nom,rep) == 0){
                n = i;
                X = N[i].x;
                Y = N[i].y;
            }
        }

//-------------------------------------- position possible ---------------------------------------------------------
        for(i=0;i<T1;i++){
            t1[i][0] = X;
            t1[i][1] = Y-1-i;

            if(t1[i][1] < 0){
                a = i;
                T1 = a;
                i = T1-1;
            }
        }

        for(i=0;i<T2;i++){
            t2[i][0] = X-1-i;
            t2[i][1] = Y;

            if(t2[i][0] < 0){
                a = i;
                T2 = a;
                i = T2-1;
            }
        }

        for(i=0;i<T3;i++){
            t3[i][0] = X;
            t3[i][1] = Y+1+i;

            if(t3[i][1] > 7){
                a = i;
                T3 = a;
                i = T3-1;
            }
        }

        for(i=0;i<T4;i++){
            t4[i][0] = X+1+i;
            t4[i][1] = Y;

            if(t4[i][0] > 7){
                a = i;
                T4 = a;
                i = T4-1;
            }
        }

        //-------------------------------- verification des positions ----------------------------------------------

        r = T1;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t1[i][0] == N[j].x && t1[i][1] == N[j].y){
                     T1 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T2;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t2[i][0] == N[j].x && t2[i][1] == N[j].y){
                     T2 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T3;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t3[i][0] == N[j].x && t3[i][1] == N[j].y){
                     T3 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T4;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t4[i][0] == N[j].x && t4[i][1] == N[j].y){
                     T4 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

    // 2 :

        r = T1;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t1[i][0] == B[j].x && t1[i][1] == B[j].y){
                    t1[i][2] = 2; // case adverse
                    M1[m1][0] = i;
                    M1[m1][1] = j;
                    m1++;
                    T1 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m1++;

        r = T2;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t2[i][0] == B[j].x && t2[i][1] == B[j].y){
                    t2[i][2] = 2; // case adverse
                    M2[m2][0] = i;
                    M2[m2][1] = j;
                    m2++;
                    T2 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m2++;

        r = T3;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t3[i][0] == B[j].x && t3[i][1] == B[j].y){
                    t3[i][2] = 2; // case adverse
                    M3[m1][0] = i;
                    M3[m1][1] = j;
                    m3++;
                    T3 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m3++;

        r = T4;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t4[i][0] == B[j].x && t4[i][1] == B[j].y){
                    t4[i][2] = 2; // case adverse
                    M4[m4][0] = i;
                    M4[m4][1] = j;
                    m4++;
                    T4 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m4++;

    // 1 :

        for(i=0;i<T1;i++){
            if(t1[i][2] != 2){
                t1[i][2] = 1; // case libre
                compt++;
            }
        }

        for(i=0;i<T2;i++){
            if(t2[i][2] != 2){
                t2[i][2] = 1; // case libre
                compt++;
            }
        }

        for(i=0;i<T3;i++){
            if(t3[i][2] != 2){
                t3[i][2] = 1; // case libre
                compt++;
            }
        }

        for(i=0;i<T4;i++){
            if(t4[i][2] != 2){
                t4[i][2] = 1; // case libre
                compt++;
            }
        }

        if(compt > 0){
            t = 0;
        }else{
            if(compt == 0){
                printf("Cette piece ne peut pas etre deplacer\n");
            }
        }

        if(t == 0){
//---------------------------------- demande au joueur --------------------------------------------------------------------

            printf("Voici le(s) deplacement(s) possible(s) de la piece :\n");

            compt2 = 0;
            for(i=0;i<T1;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t1[i][0]+1,t1[i][1]+1);
                compt2++;

                if(i == T1-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T2;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t2[i][0]+1,t2[i][1]+1);
                compt2++;

                if(i == T2-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T3;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t3[i][0]+1,t3[i][1]+1);
                compt2++;

                if(i == T3-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T4;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t4[i][0]+1,t4[i][1]+1);
                compt2++;

                if(i == T4-1){
                    printf("\n");
                }
            }

            do{
            printf("Voulez-vous continuer ou choisir une autre piece ?\nTapez 1 pour continuer ou 2 pour deplacer une autre piece\n");
            scanf("%i",&rep2);
            fflush(stdin);
            }while(rep2 != 1 && rep2 != 2);

            if(rep2 == 1){
                do{
                    printf("Veuillez saisir les coordonnees du deplacement que vous souhaitez\n");
                    printf("x : ");
                    scanf("%i",&Xrep);
                    fflush(stdin);
                    printf("y : ");
                    scanf("%i",&Yrep);
                    fflush(stdin);
                    printf("\n");
                    Xrep--;
                    Yrep--;

                    for(i=0;i<T1;i++){
                        if(Xrep == t1[i][0] && Yrep == t1[i][1]){
                            if(t1[i][2] == 1){
                                pos = 1;
                            }
                            if(t1[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m1;j++){
                                    if(M1[j][0] == i){
                                        m = M1[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T2;i++){
                        if(Xrep == t2[i][0] && Yrep == t2[i][1]){
                            if(t2[i][2] == 1){
                                pos = 1;
                            }
                            if(t2[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m2;j++){
                                    if(M2[j][0] == i){
                                        m = M2[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T3;i++){
                        if(Xrep == t3[i][0] && Yrep == t3[i][1]){
                            if(t3[i][2] == 1){
                                pos = 1;
                            }
                            if(t3[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m3;j++){
                                    if(M3[j][0] == i){
                                        m = M3[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T4;i++){
                        if(Xrep == t4[i][0] && Yrep == t4[i][1]){
                            if(t4[i][2] == 1){
                                pos = 1;
                            }
                            if(t4[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m4;j++){
                                    if(M4[j][0] == i){
                                        m = M4[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    if(compt3 == T1+T2+T3+T4){
                        printf("Ce deplacement est impossible\n");
                    }
                }while(pos != 1 && pos != 2);

//--------------------------------- traitement du cas -------------------------------------------------------------
                if(pos == 1){
                    Echiquier[Yrep][Xrep] = Echiquier[Y][X];
                    Echiquier[Y][X] = 0;

                    N[n].x = Xrep;
                    N[n].y = Yrep;
                }
                if(pos == 2){
                    Echiquier[Yrep][Xrep] = Echiquier[Y][X];
                    Echiquier[Y][X] = 0;

                    N[n].x = Xrep;
                    N[n].y = Yrep;

                    B[m].etat--;
                    B[m].x = 100;
                    B[m].y = 100;

                }
            }
            if(rep2 == 2){
                t = 1;
            }
        }
    }
    return t;
}

int Fou(int Echiquier[8][8], char rep[3], Blanc B[16], Noir N[16], int joueur){
    printf("\n");
    int t=1,i,j,r,n,X,Y,a,m,rep2,Xrep,Yrep,pos,compt=0,compt2,compt3=0,m1=0,m2=0,m3=0,m4=0;
    int T1=7,T2=7,T3=7,T4=7;
    int t1[7][3],t2[7][3],t3[7][3],t4[7][3];
    int M1[7][2],M2[7][2],M3[7][2],M4[7][2];

    if(joueur == 1){

        for(i=0;i<16;i++){  //position
            if(strcmp(B[i].nom,rep) == 0){
                n = i;
                X = B[i].x;
                Y = B[i].y;
            }
        }
//-------------------------------------- position possible ---------------------------------------------------------
        for(i=0;i<T1;i++){
            t1[i][0] = X-1-i;
            t1[i][1] = Y-1-i;

            if(t1[i][0] < 0 || t1[i][1] < 0){
                a = i;
                T1 = a;
                i = T1-1;
            }
        }

        for(i=0;i<T2;i++){
            t2[i][0] = X-1-i;
            t2[i][1] = Y+1+i;

            if(t2[i][0] < 0 || t2[i][1] > 7){
                a = i;
                T2 = a;
                i = T2-1;
            }
        }

        for(i=0;i<T3;i++){
            t3[i][0] = X+1+i;
            t3[i][1] = Y+1+i;

            if(t3[i][0] > 7 || t3[i][1] > 7){
                a = i;
                T3 = a;
                i = T3-1;
            }
        }

        for(i=0;i<T4;i++){
            t4[i][0] = X+1+i;
            t4[i][1] = Y-1-i;

            if(t4[i][0] > 7 || t4[i][1] < 0){
                a = i;
                T4 = a;
                i = T4-1;
            }
        }

        //-------------------------------- verification des positions ----------------------------------------------

        r = T1;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t1[i][0] == B[j].x && t1[i][1] == B[j].y){
                     T1 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T2;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t2[i][0] == B[j].x && t2[i][1] == B[j].y){
                     T2 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T3;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t3[i][0] == B[j].x && t3[i][1] == B[j].y){
                     T3 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T4;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t4[i][0] == B[j].x && t4[i][1] == B[j].y){
                     T4 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

    // 2 :

        r = T1;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t1[i][0] == N[j].x && t1[i][1] == N[j].y){
                    t1[i][2] = 2; // case adverse
                    M1[m1][0] = i;
                    M1[m1][1] = j;
                    m1++;
                    T1 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m1++;

        r = T2;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t2[i][0] == N[j].x && t2[i][1] == N[j].y){
                    t2[i][2] = 2; // case adverse
                    M2[m2][0] = i;
                    M2[m2][1] = j;
                    m2++;
                    T2 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m2++;

        r = T3;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t3[i][0] == N[j].x && t3[i][1] == N[j].y){
                    t3[i][2] = 2; // case adverse
                    M3[m1][0] = i;
                    M3[m1][1] = j;
                    m3++;
                    T3 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m3++;

        r = T4;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t4[i][0] == N[j].x && t4[i][1] == N[j].y){
                    t4[i][2] = 2; // case adverse
                    M4[m4][0] = i;
                    M4[m4][1] = j;
                    m4++;
                    T4 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m4++;

    // 1 :

        for(i=0;i<T1;i++){
            if(t1[i][2] != 2){
                t1[i][2] = 1; // case libre
                compt++;
            }
        }

        for(i=0;i<T2;i++){
            if(t2[i][2] != 2){
                t2[i][2] = 1; // case libre
                compt++;
            }
        }

        for(i=0;i<T3;i++){
            if(t3[i][2] != 2){
                t3[i][2] = 1; // case libre
                compt++;
            }
        }

        for(i=0;i<T4;i++){
            if(t4[i][2] != 2){
                t4[i][2] = 1; // case libre
                compt++;
            }
        }

        if(compt > 0){
            t = 0;
        }else{
            if(compt == 0){
                printf("Cette piece ne peut pas etre deplacer\n");
            }
        }

        if(t == 0){
//---------------------------------- demande au joueur --------------------------------------------------------------------

            printf("Voici le(s) deplacement(s) possible(s) de la piece :\n");

            compt2 = 0;
            for(i=0;i<T1;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t1[i][0]+1,t1[i][1]+1);
                compt2++;

                if(i == T1-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T2;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t2[i][0]+1,t2[i][1]+1);
                compt2++;

                if(i == T2-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T3;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t3[i][0]+1,t3[i][1]+1);
                compt2++;

                if(i == T3-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T4;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t4[i][0]+1,t4[i][1]+1);
                compt2++;

                if(i == T4-1){
                    printf("\n");
                }
            }

            do{
            printf("Voulez-vous continuer ou choisir une autre piece ?\nTapez 1 pour continuer ou 2 pour deplacer une autre piece\n");
            scanf("%i",&rep2);
            fflush(stdin);
            }while(rep2 != 1 && rep2 != 2);

            if(rep2 == 1){
                do{
                    printf("Veuillez saisir les coordonnees du deplacement que vous souhaitez\n");
                    printf("x : ");
                    scanf("%i",&Xrep);
                    fflush(stdin);
                    printf("y : ");
                    scanf("%i",&Yrep);
                    fflush(stdin);
                    printf("\n");
                    Xrep--;
                    Yrep--;

                    for(i=0;i<T1;i++){
                        if(Xrep == t1[i][0] && Yrep == t1[i][1]){
                            if(t1[i][2] == 1){
                                pos = 1;
                            }
                            if(t1[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m1;j++){
                                    if(M1[j][0] == i){
                                        m = M1[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T2;i++){
                        if(Xrep == t2[i][0] && Yrep == t2[i][1]){
                            if(t2[i][2] == 1){
                                pos = 1;
                            }
                            if(t2[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m2;j++){
                                    if(M2[j][0] == i){
                                        m = M2[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T3;i++){
                        if(Xrep == t3[i][0] && Yrep == t3[i][1]){
                            if(t3[i][2] == 1){
                                pos = 1;
                            }
                            if(t3[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m3;j++){
                                    if(M3[j][0] == i){
                                        m = M3[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T4;i++){
                        if(Xrep == t4[i][0] && Yrep == t4[i][1]){
                            if(t4[i][2] == 1){
                                pos = 1;
                            }
                            if(t4[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m4;j++){
                                    if(M4[j][0] == i){
                                        m = M4[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    if(compt3 == T1+T2+T3+T4){
                        printf("Ce deplacement est impossible\n");
                    }
                }while(pos != 1 && pos != 2);

//--------------------------------- traitement du cas -------------------------------------------------------------
                if(pos == 1){
                    Echiquier[Yrep][Xrep] = Echiquier[Y][X];
                    Echiquier[Y][X] = 0;

                    B[n].x = Xrep;
                    B[n].y = Yrep;
                }
                if(pos == 2){
                    Echiquier[Yrep][Xrep] = Echiquier[Y][X];
                    Echiquier[Y][X] = 0;

                    B[n].x = Xrep;
                    B[n].y = Yrep;

                    N[m].etat--;
                    N[m].x = 100;
                    N[m].y = 100;

                }
            }
            if(rep2 == 2){
                t = 1;
            }
        }
    }

    if(joueur == 2){

        for(i=0;i<16;i++){  //position
            if(strcmp(N[i].nom,rep) == 0){
                n = i;
                X = N[i].x;
                Y = N[i].y;
            }
        }
//-------------------------------------- position possible ---------------------------------------------------------
        for(i=0;i<T1;i++){
            t1[i][0] = X-1-i;
            t1[i][1] = Y-1-i;

            if(t1[i][0] < 0 || t1[i][1] < 0){
                a = i;
                T1 = a;
                i = T1-1;
            }
        }

        for(i=0;i<T2;i++){
            t2[i][0] = X-1-i;
            t2[i][1] = Y+1+i;

            if(t2[i][0] < 0 || t2[i][1] > 7){
                a = i;
                T2 = a;
                i = T2-1;
            }
        }

        for(i=0;i<T3;i++){
            t3[i][0] = X+1+i;
            t3[i][1] = Y+1+i;

            if(t3[i][0] > 7 || t3[i][1] > 7){
                a = i;
                T3 = a;
                i = T3-1;
            }
        }

        for(i=0;i<T4;i++){
            t4[i][0] = X+1+i;
            t4[i][1] = Y-1-i;

            if(t4[i][0] > 7 || t4[i][1] < 0){
                a = i;
                T4 = a;
                i = T4-1;
            }
        }

        //-------------------------------- verification des positions ----------------------------------------------

        r = T1;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t1[i][0] == N[j].x && t1[i][1] == N[j].y){
                     T1 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T2;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t2[i][0] == N[j].x && t2[i][1] == N[j].y){
                     T2 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T3;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t3[i][0] == N[j].x && t3[i][1] == N[j].y){
                     T3 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

        r = T4;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t4[i][0] == N[j].x && t4[i][1] == N[j].y){
                     T4 = i;// case alliée
                     i = r-1;
                     j = 15;
                }
            }
        }

    // 2 :

        r = T1;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t1[i][0] == B[j].x && t1[i][1] == B[j].y){
                    t1[i][2] = 2; // case adverse
                    M1[m1][0] = i;
                    M1[m1][1] = j;
                    m1++;
                    T1 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m1++;

        r = T2;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t2[i][0] == B[j].x && t2[i][1] == B[j].y){
                    t2[i][2] = 2; // case adverse
                    M2[m2][0] = i;
                    M2[m2][1] = j;
                    m2++;
                    T2 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m2++;

        r = T3;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t3[i][0] == B[j].x && t3[i][1] == B[j].y){
                    t3[i][2] = 2; // case adverse
                    M3[m1][0] = i;
                    M3[m1][1] = j;
                    m3++;
                    T3 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m3++;

        r = T4;
        for(i=0;i<r;i++){
            for(j=0;j<16;j++){
                if(t4[i][0] == B[j].x && t4[i][1] == B[j].y){
                    t4[i][2] = 2; // case adverse
                    M4[m4][0] = i;
                    M4[m4][1] = j;
                    m4++;
                    T4 = i+1;
                    i = r-1;
                    j = 15;
                    compt++;
                }
            }
        }
        m4++;

    // 1 :

        for(i=0;i<T1;i++){
            if(t1[i][2] != 2){
                t1[i][2] = 1; // case libre
                compt++;
            }
        }

        for(i=0;i<T2;i++){
            if(t2[i][2] != 2){
                t2[i][2] = 1; // case libre
                compt++;
            }
        }

        for(i=0;i<T3;i++){
            if(t3[i][2] != 2){
                t3[i][2] = 1; // case libre
                compt++;
            }
        }

        for(i=0;i<T4;i++){
            if(t4[i][2] != 2){
                t4[i][2] = 1; // case libre
                compt++;
            }
        }

        if(compt > 0){
            t = 0;
        }else{
            if(compt == 0){
                printf("Cette piece ne peut pas etre deplacer\n");
            }
        }

        if(t == 0){
//---------------------------------- demande au joueur --------------------------------------------------------------------

            printf("Voici le(s) deplacement(s) possible(s) de la piece :\n");

            compt2 = 0;
            for(i=0;i<T1;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t1[i][0]+1,t1[i][1]+1);
                compt2++;

                if(i == T1-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T2;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t2[i][0]+1,t2[i][1]+1);
                compt2++;

                if(i == T2-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T3;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t3[i][0]+1,t3[i][1]+1);
                compt2++;

                if(i == T3-1){
                    printf("\n");
                }
            }

            compt2 = 0;
            for(i=0;i<T4;i++){
                if(compt2 == 5){
                    printf("\n");
                }
                printf("  (%i,%i)",t4[i][0]+1,t4[i][1]+1);
                compt2++;

                if(i == T4-1){
                    printf("\n");
                }
            }

            do{
            printf("Voulez-vous continuer ou choisir une autre piece ?\nTapez 1 pour continuer ou 2 pour deplacer une autre piece\n");
            scanf("%i",&rep2);
            fflush(stdin);
            }while(rep2 != 1 && rep2 != 2);

            if(rep2 == 1){
                do{
                    printf("Veuillez saisir les coordonnees du deplacement que vous souhaitez\n");
                    printf("x : ");
                    scanf("%i",&Xrep);
                    fflush(stdin);
                    printf("y : ");
                    scanf("%i",&Yrep);
                    fflush(stdin);
                    printf("\n");
                    Xrep--;
                    Yrep--;

                    for(i=0;i<T1;i++){
                        if(Xrep == t1[i][0] && Yrep == t1[i][1]){
                            if(t1[i][2] == 1){
                                pos = 1;
                            }
                            if(t1[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m1;j++){
                                    if(M1[j][0] == i){
                                        m = M1[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T2;i++){
                        if(Xrep == t2[i][0] && Yrep == t2[i][1]){
                            if(t2[i][2] == 1){
                                pos = 1;
                            }
                            if(t2[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m2;j++){
                                    if(M2[j][0] == i){
                                        m = M2[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T3;i++){
                        if(Xrep == t3[i][0] && Yrep == t3[i][1]){
                            if(t3[i][2] == 1){
                                pos = 1;
                            }
                            if(t3[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m3;j++){
                                    if(M3[j][0] == i){
                                        m = M3[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    for(i=0;i<T4;i++){
                        if(Xrep == t4[i][0] && Yrep == t4[i][1]){
                            if(t4[i][2] == 1){
                                pos = 1;
                            }
                            if(t4[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m4;j++){
                                    if(M4[j][0] == i){
                                        m = M4[j][1];
                                    }
                                }
                            }
                        }else{
                            compt3++;
                        }
                    }

                    if(compt3 == T1+T2+T3+T4){
                        printf("Ce deplacement est impossible\n");
                    }
                }while(pos != 1 && pos != 2);

//--------------------------------- traitement du cas -------------------------------------------------------------
                if(pos == 1){
                    Echiquier[Yrep][Xrep] = Echiquier[Y][X];
                    Echiquier[Y][X] = 0;

                    N[n].x = Xrep;
                    N[n].y = Yrep;
                }
                if(pos == 2){
                    Echiquier[Yrep][Xrep] = Echiquier[Y][X];
                    Echiquier[Y][X] = 0;

                    N[n].x = Xrep;
                    N[n].y = Yrep;

                    B[m].etat--;
                    B[m].x = 100;
                    B[m].y = 100;

                }
            }
            if(rep2 == 2){
                t = 1;
            }
        }
    }
    return t;
}

int Cavalier(int Echiquier[8][8], char rep[3], Blanc B[16], Noir N[16], int joueur){
    printf("\n");
    int t=1,i,j,X,Y,m=0,m1,n,rep2,Xrep,Yrep,compt=0,compt2=0,compt3=0;
    int pos=0;
    int p[8][3],M[8][2];

    if(joueur == 1){

        for(i=0;i<16;i++){  //position
            if(strcmp(B[i].nom,rep) == 0){
                n = i;
                X = B[i].x;
                Y = B[i].y;
            }
        }
//-------------------------------------- position possible ---------------------------------------------------------

        p[0][0] = X-1;
        p[0][1] = Y-2;

        p[1][0] = X+1;
        p[1][1] = Y-2;

        p[2][0] = X-2;
        p[2][1] = Y-1;

        p[3][0] = X+2;
        p[3][1] = Y-1;

        p[4][0] = X-2;
        p[4][1] = Y+1;

        p[5][0] = X+2;
        p[5][1] = Y+1;

        p[6][0] = X-1;
        p[6][1] = Y+2;

        p[7][0] = X+1;
        p[7][1] = Y+2;

//-------------------------------- verification des positions ----------------------------------------------

        for(i=0;i<8;i++){
            if(p[i][0] < 0 || p[i][0] > 7 || p[i][1] < 0 || p[i][1] > 7){
                p[i][2] = 4; //  case en dehors des limites
            }
        }

        for(i=0;i<8;i++){
            if(p[i][2]!=4){
                for(j=0;j<16;j++){
                    if(p[i][0] == B[j].x && p[i][1] == B[j].y){
                        p[i][2] = 3; // case alliée
                    }
                }
            }
        }

        for(i=0;i<8;i++){
            if(p[i][2] != 4 && p[i][2] != 3){
                for(j=0;j<16;j++){
                    if(p[i][0] == N[j].x && p[i][1] == N[j].y){
                        p[i][2] = 2; // case adverse
                        M[m][0] = i;
                        M[m][1] = j;
                        m++;
                        compt++;
                    }
                }
            }
        }
        m++;

        for(i=0;i<8;i++){
            if(p[i][2] != 4 && p[i][2] != 3 && p[i][2] != 2){
                p[i][2] = 1; // case libre
                compt++;
            }
        }

        if(compt > 0){
            t = 0;
        }else{
            if(compt == 0){
                printf("Cette piece ne peut pas etre deplacer\n");
            }
        }

        if(t == 0){
//---------------------------------- demande au joueur --------------------------------------------------------------------

            printf("Voici le(s) deplacement(s) possible(s) de la piece :\n");
            for(i=0;i<8;i++){
                if(compt2 == 4){
                    printf("\n");
                }

                if(p[i][2] == 2 || p[i][2] == 1){
                    printf("  (%i,%i)",p[i][0]+1,p[i][1]+1);
                    compt2++;
                }
            }
            printf("\n");

            do{
            printf("Voulez-vous continuer ou choisir une autre piece ?\nTapez 1 pour continuer ou 2 pour deplacer une autre piece\n");
            scanf("%i",&rep2);
            fflush(stdin);
            }while(rep2 != 1 && rep2 != 2);

            if(rep2 == 1){
                do{
                    printf("Veuillez saisir les coordonnees du deplacement que vous souhaitez\n");
                    printf("x : ");
                    scanf("%i",&Xrep);
                    fflush(stdin);
                    printf("y : ");
                    scanf("%i",&Yrep);
                    fflush(stdin);
                    printf("\n");
                    Xrep--;
                    Yrep--;
                    for(i=0;i<8;i++){
                        if(Xrep == p[i][0] && Yrep == p[i][1]){
                            if(p[i][2] == 1){
                                pos = 1;
                            }
                            if(p[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m;j++){
                                    if(M[j][0] == i){
                                        m1 = M[j][1];
                                    }
                                }
                            }
                            if(p[i][2] == 3 || p[i][2] == 4){
                                    compt3++;
                            }
                        }else{
                            compt3++;
                        }
                    }
                    if(compt3 == 8){
                        printf("Ce deplacement est impossible\n");
                    }
                }while(pos != 1 && pos != 2);

//--------------------------------- traitement du cas -------------------------------------------------------------
                if(pos == 1){
                    Echiquier[Yrep][Xrep] = Echiquier[Y][X];
                    Echiquier[Y][X] = 0;

                    B[n].x = Xrep;
                    B[n].y = Yrep;
                }
                if(pos == 2){
                    Echiquier[Yrep][Xrep] = Echiquier[Y][X];
                    Echiquier[Y][X] = 0;

                    B[n].x = Xrep;
                    B[n].y = Yrep;

                    N[m1].etat--;
                    N[m1].x = 100;
                    N[m1].y = 100;
                }
            }
            if(rep2 == 2){
                t = 1;
            }
        }
    }

    if(joueur == 2){

        for(i=0;i<16;i++){  //position
            if(strcmp(N[i].nom,rep) == 0){
                n = i;
                X = N[i].x;
                Y = N[i].y;
            }
        }
//-------------------------------------- position possible ---------------------------------------------------------

        p[0][0] = X-1;
        p[0][1] = Y-2;

        p[1][0] = X+1;
        p[1][1] = Y-2;

        p[2][0] = X-2;
        p[2][1] = Y-1;

        p[3][0] = X+2;
        p[3][1] = Y-1;

        p[4][0] = X-2;
        p[4][1] = Y+1;

        p[5][0] = X+2;
        p[5][1] = Y+1;

        p[6][0] = X-1;
        p[6][1] = Y+2;

        p[7][0] = X+1;
        p[7][1] = Y+2;

//-------------------------------- verification des positions ----------------------------------------------

        for(i=0;i<8;i++){
            if(p[i][0] < 0 || p[i][0] > 7 || p[i][1] < 0 || p[i][1] > 7){
                p[i][2] = 4; //  case en dehors des limites
            }
        }

        for(i=0;i<8;i++){
            if(p[i][2]!=4){
                for(j=0;j<16;j++){
                    if(p[i][0] == N[j].x && p[i][1] == N[j].y){
                        p[i][2] = 3; // case alliée
                    }
                }
            }
        }

        for(i=0;i<8;i++){
            if(p[i][2] != 4 && p[i][2] != 3){
                for(j=0;j<16;j++){
                    if(p[i][0] == B[j].x && p[i][1] == B[j].y){
                        p[i][2] = 2; // case adverse
                        M[m][0] = i;
                        M[m][1] = j;
                        m++;
                        compt++;
                    }
                }
            }
        }
        m++;

        for(i=0;i<8;i++){
            if(p[i][2] != 4 && p[i][2] != 3 && p[i][2] != 2){
                p[i][2] = 1; // case libre
                compt++;
            }
        }

        if(compt > 0){
            t = 0;
        }else{
            if(compt == 0){
                printf("Cette piece ne peut pas etre deplacer\n");
            }
        }

        if(t == 0){
//---------------------------------- demande au joueur --------------------------------------------------------------------

            printf("Voici le(s) deplacement(s) possible(s) de la piece :\n");
            for(i=0;i<8;i++){
                if(compt2 == 4){
                    printf("\n");
                }

                if(p[i][2] == 2 || p[i][2] == 1){
                    printf("  (%i,%i)",p[i][0]+1,p[i][1]+1);
                    compt2++;
                }
            }
            printf("\n");

            do{
            printf("Voulez-vous continuer ou choisir une autre piece ?\nTapez 1 pour continuer ou 2 pour deplacer une autre piece\n");
            scanf("%i",&rep2);
            fflush(stdin);
            }while(rep2 != 1 && rep2 != 2);

            if(rep2 == 1){
                do{
                    printf("Veuillez saisir les coordonnees du deplacement que vous souhaitez\n");
                    printf("x : ");
                    scanf("%i",&Xrep);
                    fflush(stdin);
                    printf("y : ");
                    scanf("%i",&Yrep);
                    fflush(stdin);
                    printf("\n");
                    Xrep--;
                    Yrep--;
                    for(i=0;i<8;i++){
                        if(Xrep == p[i][0] && Yrep == p[i][1]){
                            if(p[i][2] == 1){
                                pos = 1;
                            }
                            if(p[i][2] == 2){
                                pos = 2;
                                for(j=0;j<m;j++){
                                    if(M[j][0] == i){
                                        m1 = M[j][1];
                                    }
                                }
                            }
                            if(p[i][2] == 3 || p[i][2] == 4){
                                    compt3++;
                            }
                        }else{
                            compt3++;
                        }
                    }
                    if(compt3 == 8){
                        printf("Ce deplacement est impossible\n");
                    }
                }while(pos != 1 && pos != 2);

//--------------------------------- traitement du cas -------------------------------------------------------------
                if(pos == 1){
                    Echiquier[Yrep][Xrep] = Echiquier[Y][X];
                    Echiquier[Y][X] = 0;

                    N[n].x = Xrep;
                    N[n].y = Yrep;
                }
                if(pos == 2){
                    Echiquier[Yrep][Xrep] = Echiquier[Y][X];
                    Echiquier[Y][X] = 0;

                    N[n].x = Xrep;
                    N[n].y = Yrep;

                    B[m1].etat--;
                    B[m1].x = 100;
                    B[m1].y = 100;
                }
            }
            if(rep2 == 2){
                t = 1;
            }
        }
    }
    return t;
}

int Pion(int Echiquier[8][8], char rep[3], Blanc B[16], Noir N[16], int joueur){
    printf("\n");
    int t=1,i,j,X,Y,m=0,m1,n,rep2,rep3,Xrep,Yrep,compt=0,compt2=0;
    int pos=0;
    int p[4][3],M[4][2];
    char stat[10];

    if(joueur == 1){

        for(i=0;i<16;i++){ //Verif du statut
            if(strcmp(B[i].nom,rep) == 0){
                n = i;
                strcpy(stat,B[i].pion);
            }
        }

        if(strcmp(stat,"Pion") == 0){
            printf("Pion\n");
                //position
            X = B[n].x;
            Y = B[n].y;

//-------------------------------------- position possible ---------------------------------------------------------

            p[0][0] = X;
            p[0][1] = Y-1;

            p[1][0] = X-1;
            p[1][1] = Y-1;

            p[2][0] = X+1;
            p[2][1] = Y-1;

            p[3][0] = X;
            p[3][1] = Y-2;

//-------------------------------- verification des positions ----------------------------------------------

            for(i=0;i<4;i++){
                if(p[i][0] < 0 || p[i][0] > 7 || p[i][1] < 0 || p[i][1] > 7){
                    p[i][2] = 4; //  case en dehors des limites
                }
            }

            for(i=0;i<4;i++){
                if(p[i][2]!=4){
                    for(j=0;j<16;j++){
                        if(p[i][0] == B[j].x && p[i][1] == B[j].y){
                            p[i][2] = 3; // case alliée
                        }
                    }
                }
            }

            for(i=0;i<4;i++){
                if(p[i][2] != 4 && p[i][2] != 3){
                    for(j=0;j<16;j++){
                        if(p[i][0] == N[j].x && p[i][1] == N[j].y){
                            p[i][2] = 2; // case adverse
                            M[m][0] = i;
                            M[m][1] = j;
                            m++;
                            compt++;
                        }
                    }
                }
            }
            m++;

            for(i=0;i<4;i++){
                if(p[i][2] != 4 && p[i][2] != 3 && p[i][2] != 2){
                    p[i][2] = 1; // case libre
                    compt++;
                }
            }

            if(p[0][2] == 2){
                p[0][2] = 4;
                compt--;
            }

            if(p[1][2] == 1){
                p[1][2] = 4;
                compt--;
            }

            if(p[2][2] == 1){
                p[2][2] = 4;
                compt--;
            }

            if(B[n].deplacement == 0){
                if(p[3][2] == 2 || p[3][2] == 1){
                    compt--;
                }
                p[3][2] = 4;
            }else{
                if(p[3][2] == 2){
                    p[3][2] = 4;
                    compt--;
                }
            }

            if(compt > 0){
                t = 0;
            }else{
                if(compt == 0){
                    printf("Cette piece ne peut pas etre deplacer\n");
                }
            }

            if(t == 0){
//---------------------------------- demande au joueur --------------------------------------------------------------------

                printf("Voici le(s) deplacement(s) possible(s) de la piece :\n");
                for(i=0;i<4;i++){
                    if(p[i][2] == 2 || p[i][2] == 1){
                        printf("  (%i,%i)",p[i][0]+1,p[i][1]+1);
                    }
                }
                printf("\n");

                do{
                printf("Voulez-vous continuer ou choisir une autre piece ?\nTapez 1 pour continuer ou 2 pour deplacer une autre piece\n");
                scanf("%i",&rep2);
                fflush(stdin);
                }while(rep2 != 1 && rep2 != 2);

                if(rep2 == 1){
                    //printf("rep 1\n");
                    do{
                        printf("Veuillez saisir les coordonnees du deplacement que vous souhaitez\n");
                        printf("x : ");
                        scanf("%i",&Xrep);
                        fflush(stdin);
                        printf("y : ");
                        scanf("%i",&Yrep);
                        fflush(stdin);
                        printf("\n");
                        Xrep--;
                        Yrep--;
                        for(i=0;i<4;i++){
                            if(Xrep == p[i][0] && Yrep == p[i][1]){
                                if(p[i][2] == 1){
                                    pos = 1;
                                }
                                if(p[i][2] == 2){
                                    pos = 2;
                                    for(j=0;j<m;j++){
                                        if(M[j][0] == i){
                                            m1 = M[j][1];
                                        }
                                    }
                                }
                                if(p[i][2] == 3 || p[i][2] == 4){
                                        compt2++;
                                }
                            }else{
                                compt2++;
                            }
                        }
                        if(compt2 == 4){
                            printf("Ce deplacement est impossible\n");
                        }
                    }while(pos != 1 && pos != 2);

    //--------------------------------- traitement du cas -------------------------------------------------------------
                    if(pos == 1){
                        Echiquier[Yrep][Xrep] = Echiquier[Y][X];
                        Echiquier[Y][X] = 0;

                        B[n].x = Xrep;
                        B[n].y = Yrep;

                        if(B[n].deplacement == 1){
                            B[n].deplacement--;
                        }
                    }
                    if(pos == 2){
                        Echiquier[Yrep][Xrep] = Echiquier[Y][X];
                        Echiquier[Y][X] = 0;

                        B[n].x = Xrep;
                        B[n].y = Yrep;

                        N[m1].etat--;
                        N[m1].x = 100;
                        N[m1].y = 100;
                        if(B[n].deplacement == 1){
                            B[n].deplacement--;
                        }
                    }
                    if(Yrep == 0){
                        do{
                            printf("Quelle type de piece voulez-vous que ce pion devienne ?\nTapez 1 pour qu'il soit une Dame, 2 pour qu'il soit une Tour, 3 pour qu'il soit un Fou ou 4 pour qu'il soit un Cavalier\n");
                            scanf("%i",&rep3);
                            fflush(stdin);
                        }while(rep3 != 1 && rep3 != 2 && rep3 != 3 && rep3 != 4);

                        if(rep3 == 1){
                            strcpy(B[n].pion,"Dame");
                            printf("%s est maintenant une Dame\n",B[n].nom);
                        }else{
                            if(rep3 == 2){
                                strcpy(B[n].pion,"Tour");
                                printf("%s est maintenant une Tour\n",B[n].nom);
                            }else{
                                if(rep3 == 3){
                                    strcpy(B[n].pion,"Fou");
                                    printf("%s est maintenant un Fou\n",B[n].nom);
                                }else{
                                    if(rep3 == 4){
                                        strcpy(B[n].pion,"Cavalier");
                                        printf("%s est maintenant un Cavalier\n",B[n].nom);
                                    }
                                }
                            }
                        }
                    }
                }
                if(rep2 == 2){
                    t = 1;
                }
            }

        }else{

            if(strcmp(stat,"Dame") == 0){
                printf("Ce pion a les fonctions d'une Dame\n");
                t = Dame(Echiquier,rep,B,N,joueur);
            }else{

                if(strcmp(stat,"Tour") == 0){
                    printf("Ce pion a les fonctions d'une Tour\n");
                    t = Tour(Echiquier,rep,B,N,joueur);
                }else{

                    if(strcmp(stat,"Fou") == 0){
                        printf("Ce pion a les fonctions d'un Fou\n");
                        t = Fou(Echiquier,rep,B,N,joueur);
                    }else{

                        if(strcmp(stat,"Cavalier") == 0){
                            printf("Ce pion a les fonctions d'un Cavalier\n");
                            t = Cavalier(Echiquier,rep,B,N,joueur);
                        }
                    }
                }
            }
        }
    }

    if(joueur == 2){

        for(i=0;i<16;i++){ //Verif du statut
            if(strcmp(N[i].nom,rep) == 0){
                n = i;
                strcpy(stat,N[i].pion);
            }
        }

        if(strcmp(stat,"Pion") == 0){
                //position
            X = N[n].x;
            Y = N[n].y;

//-------------------------------------- position possible ---------------------------------------------------------

            p[0][0] = X;
            p[0][1] = Y+1;

            p[1][0] = X-1;
            p[1][1] = Y+1;

            p[2][0] = X+1;
            p[2][1] = Y+1;

            p[3][0] = X;
            p[3][1] = Y+2;

//-------------------------------- verification des positions ----------------------------------------------

            for(i=0;i<4;i++){
                if(p[i][0] < 0 || p[i][0] > 7 || p[i][1] < 0 || p[i][1] > 7){
                    p[i][2] = 4; //  case en dehors des limites
                }
            }

            for(i=0;i<4;i++){
                if(p[i][2]!=4){
                    for(j=0;j<16;j++){
                        if(p[i][0] == N[j].x && p[i][1] == N[j].y){
                            p[i][2] = 3; // case alliée
                        }
                    }
                }
            }

            for(i=0;i<4;i++){
                if(p[i][2] != 4 && p[i][2] != 3){
                    for(j=0;j<16;j++){
                        if(p[i][0] == B[j].x && p[i][1] == B[j].y){
                            p[i][2] = 2; // case adverse
                            M[m][0] = i;
                            M[m][1] = j;
                            m++;
                            compt++;
                        }
                    }
                }
            }
            m++;

            for(i=0;i<4;i++){
                if(p[i][2] != 4 && p[i][2] != 3 && p[i][2] != 2){
                    p[i][2] = 1; // case libre
                    compt++;
                }
            }

            if(p[0][2] == 2){
                p[0][2] = 4;
                compt--;
            }

            if(p[1][2] == 1){
                p[1][2] = 4;
                compt--;
            }

            if(p[2][2] == 1){
                p[2][2] = 4;
                compt--;
            }

            if(B[n].deplacement == 0){
                if(p[3][2] == 2 || p[3][2] == 1){
                    compt--;
                }
                p[3][2] = 4;
            }else{
                if(p[3][2] == 2){
                    p[3][2] = 4;
                    compt--;
                }
            }

            if(compt > 0){
                t = 0;
            }else{
                if(compt == 0){
                    printf("Cette piece ne peut pas etre deplacer\n");
                }
            }

            if(t == 0){
//---------------------------------- demande au joueur --------------------------------------------------------------------

                printf("Voici le(s) deplacement(s) possible(s) de la piece :\n");
                for(i=0;i<4;i++){
                    if(p[i][2] == 2 || p[i][2] == 1){
                        printf("  (%i,%i)",p[i][0]+1,p[i][1]+1);
                    }
                }
                printf("\n");

                do{
                printf("Voulez-vous continuer ou choisir une autre piece ?\nTapez 1 pour continuer ou 2 pour deplacer une autre piece\n");
                scanf("%i",&rep2);
                fflush(stdin);
                }while(rep2 != 1 && rep2 != 2);

                if(rep2 == 1){
                    //printf("rep 1\n");
                    do{
                        printf("Veuillez saisir les coordonnees du deplacement que vous souhaitez\n");
                        printf("x : ");
                        scanf("%i",&Xrep);
                        fflush(stdin);
                        printf("y : ");
                        scanf("%i",&Yrep);
                        fflush(stdin);
                        printf("\n");
                        Xrep--;
                        Yrep--;
                        for(i=0;i<4;i++){
                            if(Xrep == p[i][0] && Yrep == p[i][1]){
                                if(p[i][2] == 1){
                                    pos = 1;
                                }
                                if(p[i][2] == 2){
                                    pos = 2;
                                    for(j=0;j<m;j++){
                                        if(M[j][0] == i){
                                            m1 = M[j][1];
                                        }
                                    }
                                }
                                if(p[i][2] == 3 || p[i][2] == 4){
                                        compt2++;
                                }
                            }else{
                                compt2++;
                            }
                        }
                        if(compt2 == 4){
                            printf("Ce deplacement est impossible\n");
                        }
                    }while(pos != 1 && pos != 2);

    //--------------------------------- traitement du cas -------------------------------------------------------------
                    if(pos == 1){
                        Echiquier[Yrep][Xrep] = Echiquier[Y][X];
                        Echiquier[Y][X] = 0;

                        N[n].x = Xrep;
                        N[n].y = Yrep;

                        if(N[n].deplacement == 1){
                            N[n].deplacement--;
                        }
                    }
                    if(pos == 2){
                        Echiquier[Yrep][Xrep] = Echiquier[Y][X];
                        Echiquier[Y][X] = 0;

                        N[n].x = Xrep;
                        N[n].y = Yrep;

                        B[m1].etat--;
                        B[m1].x = 100;
                        B[m1].y = 100;
                        if(N[n].deplacement == 1){
                            N[n].deplacement--;
                        }
                    }
                    if(Yrep == 0){
                        do{
                            printf("Quelle type de piece voulez-vous que ce pion devienne ?\nTapez 1 pour qu'il soit une Dame, 2 pour qu'il soit une Tour, 3 pour qu'il soit un Fou ou 4 pour qu'il soit un Cavalier\n");
                            scanf("%i",&rep3);
                            fflush(stdin);
                        }while(rep3 != 1 && rep3 != 2 && rep3 != 3 && rep3 != 4);

                        if(rep3 == 1){
                            strcpy(N[n].pion,"Dame");
                            printf("%s est maintenant une Dame\n",N[n].nom);
                        }else{
                            if(rep3 == 2){
                                strcpy(N[n].pion,"Tour");
                                printf("%s est maintenant une Tour\n",N[n].nom);
                            }else{
                                if(rep3 == 3){
                                    strcpy(N[n].pion,"Fou");
                                    printf("%s est maintenant un Fou\n",N[n].nom);
                                }else{
                                    if(rep3 == 4){
                                        strcpy(N[n].pion,"Cavalier");
                                        printf("%s est maintenant un Cavalier\n",N[n].nom);
                                    }
                                }
                            }
                        }
                    }
                }
                if(rep2 == 2){
                    t = 1;
                }
            }

        }else{

            if(strcmp(stat,"Dame") == 0){
                printf("Ce pion a les fonctions d'une Dame\n");
                t = Dame(Echiquier,rep,B,N,joueur);
            }else{

                if(strcmp(stat,"Tour") == 0){
                    printf("Ce pion a les fonctions d'une Tour\n");
                    t = Tour(Echiquier,rep,B,N,joueur);
                }else{

                    if(strcmp(stat,"Fou") == 0){
                        printf("Ce pion a les fonctions d'un Fou\n");
                        t = Fou(Echiquier,rep,B,N,joueur);
                    }else{

                        if(strcmp(stat,"Cavalier") == 0){
                            printf("Ce pion a les fonctions d'un Cavalier\n");
                            t = Cavalier(Echiquier,rep,B,N,joueur);
                        }
                    }
                }
            }
        }
    }
    return t;
}

int main()
{
    Blanc B[16];
    Noir N[16];
    int Echiquier[8][8]={
             {20,24,22,18,17,21,23,19},
             {32,31,30,29,28,27,26,25},
             {0,0,0,0,0,0,0,0},
             {0,0,0,0,0,0,0,0},
             {0,0,0,0,0,0,0,0},
             {0,0,0,0,0,0,0,0},
             {9,10,11,12,13,14,15,16},
             {3,7,5,1,2,6,8,4}
};
    char rep[4];
    int a,joueur=1,tour,fin=0;
    InitPieces(B,N);
    do{
        do{
            do{
                Affiche(Echiquier);
                if(joueur == 1){
                    printf("Joueur 1 (Blanc) :\n");
                }else{
                    printf("Joueur 2 (Noir) :\n");
                }
                printf("Quelle piece voulez-vous utiliser ?\n");
                gets(rep);
                fflush(stdin);
                a = Verif(rep,B,N,joueur);
            }while(a==0);
            switch( rep[1] ){
                case 'R' :
                    tour = Roi(Echiquier,rep,B,N,joueur);
                    break;
                case 'D' :
                    tour = Dame(Echiquier,rep,B,N,joueur);
                    break;
                case 'T' :
                    tour = Tour(Echiquier,rep,B,N,joueur);
                    break;
                case 'F' :
                    tour = Fou(Echiquier,rep,B,N,joueur);
                    break;
                case 'C' :
                    tour = Cavalier(Echiquier,rep,B,N,joueur);
                    break;
                case 'P' :
                    tour = Pion(Echiquier,rep,B,N,joueur);
            }
        }while(tour == 1);

        if(joueur == 1){
            joueur=joueur+1;
        }else{
            joueur=joueur-1;
        }

        if(B[0].etat == 0){
            printf("Echec et mat !!!\nLe joueur 2 a gagne\n");
            fin = 1;
        }
        if(N[0].etat == 0){
            printf("Echec et mat !!!\nLe joueur 1 a gagne\n");
            fin = 1;
        }
    }while(fin != 1);
    return 0;
}
