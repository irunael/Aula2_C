#include <stdio.h>
#include <stdbool.h>

void resposta(bool existe){
    if (existe == true){
        printf("O triângulo existe.\n");
    }else{
        printf("O triângulo não existe.\n");
    }
}

void triangulo(float a,float b, float c){
    bool existe;

    if(a < b + c && b < a + c && c < a + b){
        existe = true;
    }else{
        existe = false;
    }

    resposta(existe);
}

int main(){
    float a, b, c;

    printf("Digite o lado A do triângulo: \n");
    scanf("%f", &a);

    printf("Digite o lado B do triângulo: \n");
    scanf("%f", &b);

    printf("Digite o lado C do triângulo: \n");
    scanf("%f", &c);

    triangulo(a, b, c);


    return 0;
}
