#include <stdio.h>

void aluno(float nota, int frequencia){
    
    if(frequencia < 75){
        printf("Aluno repovado.\n");
    }
    else if(frequencia >= 75 && nota >= 7.5){
        printf("Aluno aprovado.\n");
    }
    else{
        printf("Aluno esta de exame.\n");
    }
}

int main(){
    float media, frequencia;

    printf("Digite sua média: \n");
    scanf("%f", &media);

    printf("Digite a número correspondente a porcentagem da sua frequência: \n");
    scanf("%f", &frequencia);

    aluno(media, frequencia);

    return 0;
}