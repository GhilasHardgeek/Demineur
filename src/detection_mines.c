/**
 * \file detection_mines.c
 * \brief détection de nombres des mines voisines.
 * \author Ghilas Akkal , Ifrene Tinhinane, Ifrene Chafia, Hounas Zehor Thilleli, Bouazza Manissa
 * \version 1.0
 * \date 25 octobre 2019
 */


#include"..//include/header.h"

void
Nb_Mines_Voisines(tab T, tab TJ, int i, int j)
{
  int c = 0;

  if ((i == N - 1) && (j == N - 1))
    {				// Case "En bas à droite"
      if (T[i - 1][j - 1] == M)
	{
	  c++;
	}
      if (T[i][j - 1] == M)
	{
	  c++;
	}
      if (T[i - 1][j] == M)
	{
	  c++;
	}
      switch (c)
	{			// Attribution de la valeur
	case 0:
	  TJ[i][j] = '0';
	  break;
	case 1:
	  TJ[i][j] = '1';
	  break;
	case 2:
	  TJ[i][j] = '2';
	  break;
	case 3:
	  TJ[i][j] = '3';
	  break;
	}
    }
  else if ((i == 0) && (j == N - 1))
    {				// Case "En haut à droite"
      if (T[i][j - 1] == M)
	{
	  c++;
	}
      if (T[i - 1][j - 1] == M)
	{
	  c++;
	}
      if (T[i - 1][j] == M)
	{
	  c++;
	}
      switch (c)
	{			// Attribution de la valeur
	case 0:
	  TJ[i][j] = '0';
	  break;
	case 1:
	  TJ[i][j] = '1';
	  break;
	case 2:
	  TJ[i][j] = '2';
	  break;
	case 3:
	  TJ[i][j] = '3';
	  break;
	}
    }
  else if ((i == 0) && (j == 0))
    {				// Case "En haut à gauche"
      if (T[i][j + 1] == M)
	{
	  c++;
	}
      if (T[i + 1][j + 1] == M)
	{
	  c++;
	}
      if (T[i + 1][j] == M)
	{
	  c++;
	}
      switch (c)
	{			// Attribution de la valeur
	case 0:
	  TJ[i][j] = '0';
	  break;
	case 1:
	  TJ[i][j] = '1';
	  break;
	case 2:
	  TJ[i][j] = '2';
	  break;
	case 3:
	  TJ[i][j] = '3';
	  break;
	}
    }
  else if ((i == N - 1) && (j == 0))
    {				// Case "En bas à gauche"
      if (T[i - 1][j] == M)
	{
	  c++;
	}
      if (T[i - 1][j + 1] == M)
	{
	  c++;
	}
      if (T[i][j + 1] == M)
	{
	  c++;
	}
      switch (c)
	{			// Attribution de la valeur
	case 0:
	  TJ[i][j] = '0';
	  break;
	case 1:
	  TJ[i][j] = '1';
	  break;
	case 2:
	  TJ[i][j] = '2';
	  break;
	case 3:
	  TJ[i][j] = '3';
	  break;
	}
    }
  else if (i == 0)
    {				// Ligne du haut
      if (T[i][j - 1] == M)
	{
	  c++;
	}
      if (T[i + 1][j - 1] == M)
	{
	  c++;
	}
      if (T[i + 1][j] == M)
	{
	  c++;
	}
      if (T[i + 1][j + 1] == M)
	{
	  c++;
	}
      if (T[i][j + 1] == M)
	{
	  c++;
	}
      switch (c)
	{			// Attribution de la valeur
	case 0:
	  TJ[i][j] = '0';
	  break;
	case 1:
	  TJ[i][j] = '1';
	  break;
	case 2:
	  TJ[i][j] = '2';
	  break;
	case 3:
	  TJ[i][j] = '3';
	  break;
	case 4:
	  TJ[i][j] = '4';
	  break;
	case 5:
	  TJ[i][j] = '5';
	  break;
	}
    }
  else if (j == 0)
    {				// Colonne de gauche
      if (T[i - 1][j] == M)
	{
	  c++;
	}
      if (T[i - 1][j + 1] == M)
	{
	  c++;
	}
      if (T[i][j + 1] == M)
	{
	  c++;
	}
      if (T[i + 1][j + 1] == M)
	{
	  c++;
	}
      if (T[i + 1][j] == M)
	{
	  c++;
	}
      switch (c)
	{			// Attribution de la valeur
	case 0:
	  TJ[i][j] = '0';
	  break;
	case 1:
	  TJ[i][j] = '1';
	  break;
	case 2:
	  TJ[i][j] = '2';
	  break;
	case 3:
	  TJ[i][j] = '3';
	  break;
	case 4:
	  TJ[i][j] = '4';
	  break;
	case 5:
	  TJ[i][j] = '5';
	  break;
	}
    }
  else if (i == N - 1)
    {				// Ligne du bas
      if (T[i][j - 1] == M)
	{
	  c++;
	}
      if (T[i - 1][j - 1] == M)
	{
	  c++;
	}
      if (T[i - 1][j] == M)
	{
	  c++;
	}
      if (T[i - 1][j + 1] == M)
	{
	  c++;
	}
      if (T[i][j + 1] == M)
	{
	  c++;
	}
      switch (c)
	{			// Attribution de la valeur
	case 0:
	  TJ[i][j] = '0';
	  break;
	case 1:
	  TJ[i][j] = '1';
	  break;
	case 2:
	  TJ[i][j] = '2';
	  break;
	case 3:
	  TJ[i][j] = '3';
	  break;
	case 4:
	  TJ[i][j] = '4';
	  break;
	case 5:
	  TJ[i][j] = '5';
	  break;
	}
    }
  else if (j == N - 1)
    {				// Colonne de droite
      if (T[i - 1][j] == M)
	{
	  c++;
	}
      if (T[i - 1][j - 1] == M)
	{
	  c++;
	}
      if (T[i][j - 1] == M)
	{
	  c++;
	}
      if (T[i + 1][j - 1] == M)
	{
	  c++;
	}
      if (T[i + 1][j] == M)
	{
	  c++;
	}
      switch (c)
	{			// Attribution de la valeur
	case 0:
	  TJ[i][j] = '0';
	  break;
	case 1:
	  TJ[i][j] = '1';
	  break;
	case 2:
	  TJ[i][j] = '2';
	  break;
	case 3:
	  TJ[i][j] = '3';
	  break;
	case 4:
	  TJ[i][j] = '4';
	  break;
	case 5:
	  TJ[i][j] = '5';
	  break;
	}
    }
  else
    {				// N'importe où ailleurs
      if (T[i][j + 1] == M)
	{
	  c++;
	}
      if (T[i + 1][j + 1] == M)
	{
	  c++;
	}
      if (T[i + 1][j] == M)
	{
	  c++;
	}
      if (T[i + 1][j - 1] == M)
	{
	  c++;
	}
      if (T[i][j - 1] == M)
	{
	  c++;
	}
      if (T[i - 1][j - 1] == M)
	{
	  c++;
	}
      if (T[i - 1][j] == M)
	{
	  c++;
	}
      if (T[i - 1][j + 1] == M)
	{
	  c++;
	}
      switch (c)
	{			// Attribution de la valeur
	case 0:
	  TJ[i][j] = '0';
	  break;
	case 1:
	  TJ[i][j] = '1';
	  break;
	case 2:
	  TJ[i][j] = '2';
	  break;
	case 3:
	  TJ[i][j] = '3';
	  break;
	case 4:
	  TJ[i][j] = '4';
	  break;
	case 5:
	  TJ[i][j] = '5';
	  break;
	case 6:
	  TJ[i][j] = '6';
	  break;
	case 7:
	  TJ[i][j] = '7';
	  break;
	case 8:
	  TJ[i][j] = '8';
	  break;
	}
    }
}
