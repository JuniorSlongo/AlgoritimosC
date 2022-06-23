/****************************************************************************
 
  
 Ler do teclado 12 números inteiros e armazená-los em um vetor N. 
 Em seguida, copiar os elementos pares divisíveis por 3 para o vetor
 X e os ímpares divisíveis por 5 para o vetor Y.



*******************************************************************************/

#include <stdio.h>
#define TAM 12
void entradaVetor(int vetor[TAM]){
    
    for(int i=0; i<TAM; i++){
       printf("Informe o valor para %i: ", i);
       scanf("%i", &vetor[i]);
   }
}

void testeDivisiveis3(int vetor[TAM]){
    int i, j;
    j=0;
    int vetorP[TAM];
    for(i = 0; i < TAM; i++){
        if((vetor[i] % 2) == 0 && (vetor[i] % 3 == 0)){
            vetorP[j]=vetor[i];
            j++;
        }
    }
    }

void testeDivisiveis5(int vetor[TAM]){
    int i, j;
    j=0;
    int vetorP[TAM];
    for(i = 0; i < TAM; i++){
        if((vetor[i] % 2 != 0) && (vetor[i] % 5 == 0)){
            vetorP[j]=vetor[i];
            j++;
        }
    }
}

int main()
{
   int vetor[TAM];
   entradaVetor(vetor);
   testeDivisiveis3(vetor);
   testeDivisiveis5(vetor);
}
