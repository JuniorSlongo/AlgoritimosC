#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int isSimian();
void transfMat(char *dna, char **mat, int tam);
void armzVlr(int i, int j, char **mat, char matrizTest[4][4]);
int verifySequence(char matrizTest[4][4]);
char *leArquivo(char *nomeArq);
int verifyValidChar(char *dna, int tam);


struct validCarac{
	char A;
	char G;
	char T;
	char C;
};


int main(){
	setlocale(LC_ALL, "Portuguese");
	int v = isSimian();
	if (v == 8){
		return 0;
	}
	printf("O resultado da análise é: \n");
	if(v == 1){
		printf("\tA fita de DNA presente no arquivo é de um símio.");
	}else printf("\tA fita de DNA presente no arquivo não pertence a um símio.");
	printf("\n\n\n==================================================");
	printf("\n\n Digite 1 para encerrar o programa: ");
	scanf("%i", &v);
	if(v == 1){
		return 0;
	}
}


int isSimian(){
	
	int i=0;
	int j=0;
	printf("==================================================\n");
	printf("===PROJETO PARA DETECTAR FITAS DE DNA DE SÍMIOS===\n");
	printf("==================================================\n\n\n");
	char nomeArq[1024];
	printf("Informe o nome do arquivo a ser lido: ");
	scanf("%s", nomeArq);
	char *dna = leArquivo(nomeArq);
	if(dna == NULL){
		printf("Formatacao indevida do arquivo");	
		return 8;
	}
	printf("\n\n\n==================================================\n");
	printf("A sequência de DNA informada é:\n\t%s\n", dna);
	printf("==================================================\n\n\n");
	if(verifyValidChar(dna, strlen(dna))){
		return 8;
	}
	int tam = sqrt(strlen(dna));
	char **mat;
	mat = malloc(tam * sizeof(char*));
	transfMat(dna, mat, tam);
	
		for (i=0; i<tam; i++){
	        for (j=0; j<tam; j++){
	            if ((tam-j-1)<4 && j>0){
	                break;
	            }
	            char matrizTest[4][4];
	            armzVlr(i, j, mat, matrizTest);
	            int boolSim = verifySequence(matrizTest);

	            if (boolSim == 1){
	            	return 1;
				}
	        }
        if ((tam-i-1)<4){
            break;
        }  
    }
	
    return 0;
}

int verifyValidChar(char *dna, int tam){
	struct validCarac carac1;
	carac1.A = 'A';
	carac1.C = 'C';
	carac1.T = 'T';
	carac1.G = 'G';
	for(int i=0; i<tam; i++){
		if(carac1.A != dna[i] && carac1.C != dna[i] && carac1.T != dna[i] && carac1.G != dna[i]){
			printf("O caractere %c não é válido.", dna[i]);
			return 1;
		}
	}
	return 0;
}

void transfMat(char *dna, char **mat, int tam){
	int c=0;
	for(int i=0; i<tam; i++){
		mat[i]= malloc(tam * sizeof(char));
		for(int j=0; j<tam; j++){
			mat[i][j]=dna[c];
			c++;
		}
	}
}

void armzVlr(int i, int j, char **mat, char matrizTest[4][4]){
    int v=i;
    for (int x=0; x<4; x++){
        int p = j;
        for (int y = 0; y < 4; y++){
            matrizTest[x][y] = mat[v][p];
            p++;
        }
        v++;
    }
}

int verifySequence(char matrizTest[4][4])
{
	
	//Mostra as matrizes que sao printadas
	
	
	int i, j;
	i = j = 0;
	/*
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%c\t", matrizTest[i][j]);
		}
		printf("\n");
	}
	
	
	printf("\n\n\n\n");
*/
	
	
	int cont=0;
   char ultimoChar;
	for(i=0; i<4; i++){
		cont = 0;
		ultimoChar = matrizTest[i][0];
		for(j=0; j<4; j++){
			if(matrizTest[i][j] == ultimoChar){
				cont++;
				if(cont == 4){
					return 1;
				}
			}
		}
	}
		
	for(j=0; j<4; j++){
		cont=0;
		ultimoChar = matrizTest[0][j];
		for(i=0; i<4; i++){
			if(ultimoChar == matrizTest[i][j]){
	        	cont++;
	        	if(cont == 4){
	        		return 1;
				}
   			}
		}
	}
	
   cont=0;
	for(i=0; i<4; i++){
   		if(ultimoChar == matrizTest[i][i]){
   			cont++;
		   }
	   }
	   if(cont == 4){
   		return 1;
  	   }
  	   
   
	cont=0;
  	ultimoChar = matrizTest[0][3];
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
	    	if((j + i)== 3 && ultimoChar == matrizTest[i][j]){
	        	cont++;
	        	if(cont == 4){
	        		return 1;
				}
	        }
	    }
    }
    

    return 0;
}


char *leArquivo(char *nomeArq)
{
	FILE *arq;
	arq = fopen(nomeArq, "r");
	if (arq == NULL) return NULL;
	fseek(arq, 0, SEEK_END); 
	int tamanho = ftell(arq);
	fseek(arq, 0, SEEK_SET);
	char *dna = malloc(sizeof(char) * (tamanho+1));
	char carac;
	int i = 0;
	while ( (carac = fgetc(arq)) != EOF){
	dna[i] = carac;
	i++;
	}
	dna[i] = '\0';
	fclose(arq);  
	return dna;
}

