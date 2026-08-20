#include <stdio.h>

int main () {

    float peso, altura;

    printf("Digite o peso em quilogramas: \n");
    scanf("%f", &peso);

    printf("Digite a altura em metros: \n");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);

    printf("O IMC de uma pessoa com o peso: %.2f e a altura %.2f é igual a %.2f.\n", peso, altura, imc);

    return 0;
}