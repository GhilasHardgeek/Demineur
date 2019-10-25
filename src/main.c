#include <stdlib.h>
#include <stdio.h>






void affichage(){
	int N=10;
	char grille[N][N];
	for (int i = 0; i < N; i++){
		printf("|");
		for (int j = 0; j < N; j++){
			grille[i][j] ='*';
			printf(" %c |",grille[i][j]);
	
		}
		printf("\n");

	}
}

void coordonees(){
	int i,j;
	printf("numero de la ligne: ");
	scanf("%d", &i);
	printf("numero de la colonne: ");
	scanf("%d", &j);
	printf("%d %d \n",i,j );
}




int main(int argc, char const *argv[]){
	affichage();
	coordonees();
	return 0;
}