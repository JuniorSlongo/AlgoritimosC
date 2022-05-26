/*Faça um programa que calcule o salário líquido dos funcionários de uma empresa. 
O salário líquido é composto por descontos e adicionais, seguindo as seguintes regras:

Descontos:
Salário bruto < 800,00 – não realizar nenhum desconto;
800,00 <= Salário bruto <=1600,00 – descontar 8% de Imposto de Renda e 5% de encargos.
Salário bruto > 1600,00 – descontar 15% de Imposto de Renda e 7% de encargos.

Adicionais:
Caso o funcionário tenha trabalhado mais de 160 horas no mês, divida o seu salário bruto por 160 (representa horas trabalhadas)
 e calcule 50% de adicional nas horas que excederem a 160.

O usuário deverá digitar o salário bruto e o número de horas trabalhadas no mês de cada funcionário, 
e deverá receber como resultado o salário líquido. Para finalizar o programa o usuário deverá digitar 0 no salário bruto,
 ao finalizar o programa exibir o total geral dos salários líquidos.*/


#include <stdio.h>
#include <math.h>
int main(){
	float salLiq, salBruto, valorHrs, horasExtra;
	int horasTrab, horasTrab2;
	
	do{
		printf("Informe o salario bruto do funcionario: ");
		scanf("%f", &salBruto);
		printf("Informe as horas trabalhadas no mes do funcionario: ");
		scanf("%i", &horasTrab);
		if (salBruto < 800){
			salLiq = salBruto;
		}
		else if(800 <= salBruto <= 1600){
			salLiq = salBruto-(salBruto*0.08)-salBruto*0.05;
		}
		else if(salBruto > 1600){
			salLiq = salBruto-(salBruto*0.15)-salBruto*0.07;
		}
		if (horasTrab > 160){
			valorHrs = salBruto/160;
			horasTrab2=horasTrab-160;
			horasExtra=(valorHrs*0.5)*horasTrab2;
			salLiq=salLiq+horasExtra;
			
		}
		printf("o total de horas trabalhadas eh:%i\n", horasTrab);
		printf("o salario liquido eh:%f\n", salLiq);
		
	}
	while (salBruto != 0);
	return 0;
}
