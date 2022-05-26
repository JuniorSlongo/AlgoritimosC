/*Faça um programa que receba duas notas de 6 alunos calcule e imprima: 
a média entre essas 2 notas de cada aluno;
a mensagem de acordo com a tabela abaixo: 
Média
Mensagem 
De 0 a 5.0
reprovado
De 5.1 a 6.9
recuperação 
De 7.0 a 10
aprovado


total de alunos aprovados e o total de alunos reprovados; 
a média geral do Programa, isto é, a média entre as médias dos alunos. 
*/
#include <stdio.h>
int main(){
	int numrAlun, i, rep, apr;
	float mediaGeral, n1, n2, mediaMedia;
	numrAlun=6;
	rep=0;
	apr=0;
	for(i=0;i < numrAlun; i++){
		printf("Informe a nota 1 do aluno: ");
		scanf("%f", &n1);
		printf("informe a nota 2 do aluno: ");
		scanf("%f", &n2);
		mediaGeral=(n1+n2)/2;
		
		if (mediaGeral <= 5){
			printf("Aluno reprovado\n");
			rep++;
		}
		else if( mediaGeral>5 && mediaGeral < 7){
			printf("Aluno em recuperacao\n");	
		}
		else if(mediaGeral>=17){
			printf("Aluno aprovado\n");
			apr++;
		}
		mediaMedia=mediaMedia+mediaGeral;
		
		
	}
	mediaMedia=mediaMedia/numrAlun;
	printf("O numero de alunos aprovados eh: %i\n", apr);
	printf("O numero de alunos reprovados eh: %i\n", rep);
	printf("A media das medias dos alunos eh: %f", mediaMedia);
	return 0;
	
}
