/****************************************************************************
 
  
Leia uma matriz 10 x 10 que se refere respostas de 10 questões de múltipla escolha,
referentes a 10 alunos. Leia também um vetor de 10 posições contendo o gabarito de 
respostas que podem ser a, b, c ou d. Seu programa deverá comparar as respostas de 
cada candidato com o gabarito e emitir um vetor Resultado, contendo a pontuação correspondente.





*******************************************************************************/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define TAM 10
void carregaMatriz(char mat[TAM][TAM]){
    for(int i=0; i < TAM; i++){
        for(int j=0; j <TAM; j++){
            printf("Digite um valor para matriz[%i][%i]: ", i, j);
            scanf("%c%*c", &mat[i][j]);
            
            
        }
    }
}

void carregaVetor(char vet[TAM]){
    for(int i=0; i<TAM; i++){
        printf("Digite um valor para o vetor[%i]", i);
        scanf("%c%*c", &vet[i]);
        
       
    }
}
void compararRespostas(char vet[TAM], char mat[TAM][TAM], int vetResp[TAM]){
    for(int i=0;i<TAM;i++){
        vetResp[i]=0;
        for(int j=0;j<TAM;j++){
            if(mat[i][j]==vet[j]){
                vetResp[i]=vetResp[i]+1;
            }
        }
    }
}

void escreveVetor(int vetResp[TAM]){
    printf("Vetor contendo as respostas: \n");
    for(int i=0;i<TAM;i++){
        printf("%i  ", vetResp[i]);
    }
}

int main(){
    char mat[TAM][TAM];
    char vet[TAM];
    int vetResp[TAM];
    carregaMatriz(mat);
    carregaVetor(vet);
    compararRespostas(vet, mat, vetResp);
    escreveVetor(vetResp);
}