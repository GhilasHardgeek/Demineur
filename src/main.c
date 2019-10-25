#include <stdlib.h>
#include <stdio.h>


void bombes() {
	int nombreBombe = 5;
	int i=0
	int j=0
	time_t t;
	srand((unsigned)time(&t));
	for (i = 0; i < n; i++) {
	 i=rand() % 10)
	 for (j = 0; j < n; j++) {
		 j = rand() % 10);
		 grille[i][j] = 0;
	 }
	}
	
}



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
