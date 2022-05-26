/*Fa�a um programa que calcule o sal�rio l�quido dos funcion�rios de uma empresa. 
O sal�rio l�quido � composto por descontos e adicionais, seguindo as seguintes regras:

Descontos:
Sal�rio bruto < 800,00 � n�o realizar nenhum desconto;
800,00 <= Sal�rio bruto <=1600,00 � descontar 8% de Imposto de Renda e 5% de encargos.
Sal�rio bruto > 1600,00 � descontar 15% de Imposto de Renda e 7% de encargos.

Adicionais:
Caso o funcion�rio tenha trabalhado mais de 160 horas no m�s, divida o seu sal�rio bruto por 160 (representa horas trabalhadas)
 e calcule 50% de adicional nas horas que excederem a 160.

O usu�rio dever� digitar o sal�rio bruto e o n�mero de horas trabalhadas no m�s de cada funcion�rio, 
e dever� receber como resultado o sal�rio l�quido. Para finalizar o programa o usu�rio dever� digitar 0 no sal�rio bruto,
 ao finalizar o programa exibir o total geral dos sal�rios l�quidos.*/


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
