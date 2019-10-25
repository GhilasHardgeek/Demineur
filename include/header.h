/**
 * \file header.h
 * \brief introduction des bibliothèques necéssaire et les prototypes des fonctions 
 * \author Ghilas Akkal , Ifrene Tinhinane, Ifrene Chafia, Hounas Zehor Thilleli, Bouazza Manissa
 * \version 1.0
 * \date 25 octobre 2019
 */




#include <stdlib.h>
#include <stdio.h>
#include <time.h>


#define N 5
#define MINE 10 /*!< Déclarations des Variables globales */
#define X 'X'  /*!< Déclarations caractères */
#define M 'M'

typedef char tab[N][N]; /*!< Déclarations des tableaux */



void Initialisation(tab,tab);/*!< Prototypes des fonctions. */
void Affichage(tab);
void Mines_rand(tab);
void jeu(tab,tab);
void Nb_Mines_Voisines(tab,tab,int,int);