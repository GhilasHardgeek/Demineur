/**
 * \file deroulement.c
 * \brief Initialisation et affichage de la Grille, Placement des mines aléatoirement ainsi que l'intéraction avec l'utilisateur
 * \author Ghilas HardGeek , Ifrene Tinhinane, Ifrene Chafia, Hounas Zehor Thilleli, Bouazza Manissa
 * \version 1.0
 * \date 25 octobre 2019
 */
#include"..//include/header.h"


/**
 * \void Initialisation()
 * \brief la fonction d'initialisation des Tableaux avec 'X'
 *
 * \param tableau des mines, et la Grille 
 * \return ne renvoit aucune valeur
 */
void
Initialisation (tab TM, tab TJ)
{
  int i, j;
  for (i = 0; i < N; i++)             /*!<boucles pour parcourir les tableaux*/ 
    {
      for (j = 0; j < N; j++)
	{
	  TM[i][j] = X;            /*!<remplissage des tableaux avec le charactère 'X'*/ 
	  TJ[i][j] = X;
	}
    }
}

/**
 * \int Affichage()
 * \brief Fonction d'affichage 
 *
 * \param le paramétre grille 
 * \return ne renvoit aucune valeur 
 */

void
Affichage (tab T)
{
  int i, j;
  int c = 0;
  printf ("  ");
  for (c = 0; c < N; c++)    
    {
      printf ("%d ", c);
    }
  c = 0;
  printf ("\n");

  for (i = 0; i < N; i++)
    {
      printf ("%d ", c);
      c++;
      for (j = 0; j < N; j++)
	{
	  printf ("%c ", T[i][j]);
	}
      printf ("\n");
    }
  printf ("\n");
}

/**
 * \void Mines_rand()
 * \brief dépot des mines de façon aléatoire
 *
 * \param Sans paramètres
 * \return ne renvoit aucune valeur
 */

void
Mines_rand(tab TM)
{
  int i, j;
  int cm;

  for (cm = 0; cm < MINE; cm++)      /*!<boucles pour parcourir les tableaux*/
    {
      i = rand () % N;
      j = rand () % N;                 /*!<choix de coordonnées aléatoires*/
      if (TM[i][j] == M)   
	{
	  while (TM[i][j] == M)
	    {
	      i = rand () % N;
	      j = rand () % N;
	    }
	  TM[i][j] = M;
	}
      else
	{
	  TM[i][j] = M;
	}
    }
}

/**
 * \void jeu()
 * \brief Fonction permettant l'interaction avec le joueur
 * 
 * \param tableau des mines et grille 
 * \return Ne renvoi aucune valeur 
 */

void
jeu (tab TM, tab TJ)
{
  int CL;
  int CC;
  int perdu = -1;
  int compteur = 0;	     /*!<compteur de cases découvertes*/
  int nbcasesm = N * N - MINE;	/*!<compteur de cases sans mines*/

  printf ("\nJeu du démineur\n\n");

  while ((perdu == -1) && (compteur != nbcasesm))
    {
      Affichage (TJ);

      printf ("Ligne : ");
      scanf ("%d", &CL);
      while ((CL < 0) || (CL >= N))
	{
	  printf ("Ligne invalide : ");
	  scanf ("%d", &CL);
	}

      printf ("Colonne : ");
      scanf ("%d", &CC);
      while ((CC < 0) || (CC >= N))
	{
	  printf ("Colonne invalide : ");
	  scanf ("%d", &CC);
	}
      printf ("\n");

      if (TM[CL][CC] == M)
	{
	  perdu = 1;	
	  printf ("C'est une mine :O\n\n");
	}
      else
	{
	  if (TJ[CL][CC] != X)
	    {
	      printf ("Vous avez déjà rentré cette valeur.\n\n");
	    }
	  else
	    {
	      Nb_Mines_Voisines(TM, TJ, CL, CC);	// Recherche du nombre de mines aux alentours
	      compteur++;	// Accrémentation du compteur de case
	    }
	}
    }

  if (perdu == 1)
    {
      printf ("Game Over\n\n");
    }
  else
    {
      printf ("Vous avez gagné!\n\n");
    }

}

