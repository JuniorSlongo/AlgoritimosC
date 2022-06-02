/*Faça um programa em C que leia a idade e a altura de 5 pessoas, 
armazene cada informação no seu respectivo vetor. Imprima a idade e a altura na ordem inversa a ordem lida
*/
#define TAM 5
#include <stdio.h>
int main(){
	int altura[TAM], i;
	for (i=0;  i < TAM;  i++){
		printf("Digite um valor para altura[%i]: ", i);
		scanf("%i", &altura[i]);
}
	i= i - 1;
	for (i=i;  i >= 0;  i=i-1){
		printf("Valor de alura para[%i] %i: \n", i, altura[i]);
}
return 0;
}

