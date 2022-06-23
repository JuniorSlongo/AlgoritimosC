/****************************************************************************
 
  
Escreva um algoritmo que lê uma matriz M(5,5) e calcula as somas:
     a   da linha 4 de M.
     b  da coluna 2 de M.
     c   da diagonal principal.
     d   da diagonal secundária.
     e   de todos os elementos da matriz.
     f   Escreva estas somas e a matriz.




*******************************************************************************/

#include <stdio.h>
#define TAM 5
void carregaMatriz(int mat[TAM][TAM]){
    for(int i=0; i < TAM; i++){
        for(int j=0; j <TAM; j++){
            printf("Digite um valor para matriz[%i][%i]: ", i, j);
            scanf("%i", &mat[i][j]);
        }
    }
}

void calculaSomaLinha4(int mat[TAM][TAM]){
    int soma;
    soma = 0;
    for(int i=0; i < TAM; i++){
        soma = soma + mat[3][i];
    }
    printf("O valor da soma da linha 4 eh: %i\n", soma);
}

void calculaSomaColuna2(int mat[TAM][TAM]){
    int soma;
    soma = 0;
    for(int i=0; i < TAM; i++){
        soma = soma + mat[i][1];
    }
    printf("O valor da soma da coluna 2 eh: %i\n", soma);
}

void calculaSomaDiagonal1(int mat[TAM][TAM]){
    int soma = 0;
    for(int i=0; i < TAM; i++){
        for(int j=0; j <TAM; j++){
            if(i == j){
                soma = soma + mat[i][j];
            }
        }
    }
    printf("O valor da soma da diagonal primaria eh: %i\n", soma);
}

void calculaSomaDiagonal2(int mat[TAM][TAM]){
    int soma = 0;
    for(int i=0; i < TAM; i++){
        for(int j=0; j <TAM; j++){
            if((i+j) == 5){
                soma = soma + mat[i][j];
            }
        }
    }
    printf("O valor da soma da diagonal secundaria eh: %i\n", soma);
}

void calculaSomaMatriz(int mat[TAM][TAM]){
    int soma = 0;
    for(int i=0; i < TAM; i++){
        for(int j=0; j <TAM; j++){
           soma = soma + mat[i][j]; 
        }
    }
    printf("O valor da soma da matriz eh: %i\n", soma);
}

void escreveMatriz(int mat[TAM][TAM]){
    printf("As somas derivam da seguinte matriz: ");
    for(int i=0; i < TAM; i++){
        printf("\n\n");
        for(int j=0; j <TAM; j++){ 
            printf("%i\t", mat[i][j]);
            
        }
    }
}

int main(){
    int mat[TAM][TAM];
    carregaMatriz(mat);
    calculaSomaLinha4(mat);
    calculaSomaColuna2(mat);
    calculaSomaDiagonal1(mat);
    calculaSomaDiagonal2(mat);
    calculaSomaMatriz(mat);
    escreveMatriz(mat);
}