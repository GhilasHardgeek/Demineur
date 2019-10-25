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

int main(int argc, char const *argv[]){
	affichage();
	return 0;
}
