/*Escreva um algoritmo que lê uma matriz M(5,5) e calcula as somas:
da linha 4 de M.
da coluna 2 de M.
da diagonal principal.
da diagonal secundária.
de todos os elementos da matriz.
Escreva estas somas e a matriz.
*/
#include <stdio.h>
#define TAM 5
#include <time.h>
#include <stdlib.h>
int main(){
	int m[TAM][TAM], l, c, somaLinhas[TAM], somaColunas[TAM];
	srand(time(NULL));
	for(l = 0; l < 5; l++){
		for(c = 0; c < 10; c++){
			m[l][c] = rand() % 100;
		}
	}
	
}
