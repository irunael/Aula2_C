#include <stdio.h>

int main () {

    int numero1;

    int numero2;

    printf("Digite um número inteiro: \n");
    scanf("%d", &numero1);

    printf("Digite outro número inteiro: \n");
    scanf("%d", &numero2);

    int soma = numero1 + numero2;

    int subtracao = numero1 - numero2;

    int multiplicacao = numero1 * numero2;

    float divisao = numero1 / numero2;

    printf("A soma dos seus dois números é de: %d\n", soma);

    printf("A subtração dos seus dois números é de: %d\n", subtracao);

    printf("A multiplicação dos seus dois números é de: %d\n", multiplicacao);

    printf("A divisão dos seus dois números é de: %.0f\n", divisao);

    return 0;
}