#include <stdio.h>

int main(){
    
    char matrizNotas[5][10], vetorGabarito[10];
    int notaFinal[10], i, j, contadorNotas = 1, contadorAluno = 1, contadorGabarito = 1, corretas = 0, nota = 0;
    
    for(i = 0; i < 10; i++){
        printf("\n Informe a resposta correta da %dº questão: ", contadorGabarito);
        scanf("%c%*c", &vetorGabarito[i]);
        contadorGabarito++;
    }
    
    contadorGabarito = 1;
    
    for(i = 0; i < 5; i++){
        for(j = 0; j < 10; j++){
            printf(" Informe a resposta do %dº aluno para a questão %d: ", contadorAluno, contadorGabarito);
            scanf("%c%*c", &matrizNotas[i][j]);
            if(matrizNotas[i][j] == vetorGabarito[nota]){
                corretas++;
            }
            contadorGabarito++;
            nota++;
            notaFinal[i] = corretas;
        }
        
        corretas = 0;
        contadorAluno++;
    }
    
    contadorGabarito = 1;
    
    printf("\n");
    
    for(i = 0; i < 10; i++){
            printf(" \n Gabarito da Questão %d é a alternativa %c).", contadorGabarito, vetorGabarito[i]);
            contadorGabarito++;
        }
      
    contadorAluno = 1;  
        
    for(i = 0; i < 5; i++){
        printf("\n A nota final do %dº aluno foi: %d", contadorAluno, notaFinal[i]);
    }
    
    return 0;

}
