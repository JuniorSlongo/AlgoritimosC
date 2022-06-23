/******************************************************************************
Para o controle dos ve�culos que circulam em uma determinada cidade, a Secretaria dos Transportes criou o seguinte registro-padr�o:
Propriet�rio: ___________________________________ Combust�vel: _________________
Modelo: _____________________________________ Cor: __________________________
No. chassi: _______________________ Ano: __________ Placa: _____________________

Em que:
combust�vel pode ser �lcool, diesel ou gasolina;
placa possui os tr�s primeiros valores alfab�ticos e os quatro restantes num�ricos;

1Sabendo que o n�mero m�ximo de ve�culos da cidade � de 5.000 unidades e que os valores precisam ser lidos.

2Construa um algoritmo que liste todos os propriet�rios cujos carros s�o do ano de 1980 ou posterior e que sejam movidos a diesel.

3Escreva um algoritmo que liste todas as placas que comecem com a letra A e terminem com 0, 2, 4 ou 7 e 
seus respectivos propriet�rios. (Sugest�o: utilize a placa como um vetor de caracter)

4Elabore um algoritmo que liste o modelo e a cor dos ve�culos cujas placas possuem como segunda 
letra uma vogal e cuja soma dos valores num�ricos fornece um n�mero par.

5Construa um algoritmo que permita a troca de propriet�rio com o fornecimento do n�mero do chassi apenas para 
carros com placas que n�o possuem nenhum d�gito igual a zero.
	printf("\tProprietario: %s\n", v1[i].prop);
		printf("\tTipo de combustivel: %s\n", v1[i].comb);
		printf("\tModelo do carro: %s\n", v1[i].model);
		printf("\tCor do carro: %s\n", v1[i].cor);
		printf("\tNumero de chassi: %s\n", v1[i].chassi);
		printf("\tAno do carro: %i\n", v1[i].ano);
		printf("\tPlaca do carro: %s\n", v1[i].placa);
[^\n]
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#define TAM 4
//registro
struct sVeiculos{
    char prop[50];
    char comb[15];
    char model[15];
    char cor[10];
    char chassi[10];
    int ano;
    char placa[7];
};


int main(){
	struct sVeiculos v1[TAM];
	int i;
	
	for (i=0; i<TAM; i++){
		
		printf("Informe o proprietario %i: ", i);
		scanf("%[^\n]", v1[i].prop);
		printf("Informe o tipo de combustivel %i: ", i);
		scanf("%s", v1[i].comb);
		printf("Informe o modelo do carro %i: ", i);
		scanf("%s", v1[i].model);
		printf("Informe a cor do carro %i: ", i);
		scanf("%s", v1[i].cor);
		printf("Informe o numero de chassi %i: ", i);
		scanf("%s", v1[i].chassi);
		printf("Informe o ano do carro %i: ", i);
		scanf("%i", &v1[i].ano);
		printf("Informe a placa do carro %i: ", i);
		scanf("%s", v1[i].placa);
		getchar();
	
	
	}
	for (i=0; i<TAM; i++){
		if(v1[i].ano >= 1980 && v1[i].comb == "diesel"){
			printf("\tProprietario: %s\n", v1[i].prop);
		}
	}
	return 0;
}





















