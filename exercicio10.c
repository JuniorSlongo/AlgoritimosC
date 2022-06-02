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
int main(){
	int m[TAM][TAM], l, c, somaLinhas, somaColunas, somaDiagonal1, somaDiagonal2, soma, somaTotal;

	for(l = 0; l < TAM; l++){
		for(c = 0; c < TAM; c++){
			printf("Valor do elemento linha:%i coluna:%i eh:", l, c);
			scanf("%i", &m[l][c]);
		}
	}
    l = 4;
    soma = 0;
	for(c = 0; c < TAM; c++){
	    soma += m[l][c];
	}
	somaLinhas = soma;

    c = 2;
    soma = 0;
    for(l = 0; l < TAM; l++){
        soma += m[l][c];
    }
    somaColunas = soma;
    soma = 0;
    for(l = 0; l < TAM; l++){
        soma += m[l][l];
        somaDiagonal1 = soma;
    }
    soma = 0;
    for(l = 0; l < TAM; l++){
        for(c = 0; c < TAM; c++){
            if((l + c)== 4){
                soma += m[l][c];
            }
        }
    }
    
    somaDiagonal2 += soma;
    soma = 0;
    for(l = 0; l < TAM; l++){
		for(c = 0; c < TAM; c++){
			soma += m[l][c];
		}
	}
	somaTotal += soma;
	for(l = 0; l < TAM; l++){
		for(c = 0; c < TAM; c++){
			printf("%i\t", m[l][c]);
			
		}
		printf("\n\n");
	}
	printf("O valor da soma dos elementos da linha 4 eh: %i\n", somaLinhas);
	printf("O valor da soma dos elementos da coluna 2 eh: %i\n", somaColunas);
	printf("O valor da soma dos elementos da diagonal principal eh: %i\n", somaDiagonal1);
	printf("O valor da soma dos elementos da diagonal secundaria eh: %i\n", somaDiagonal2);
	printf("A soma de todos os elementos da matriz eh: %i", somaTotal);
}
