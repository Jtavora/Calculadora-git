#include <stdio.h>
#include <stdlib.h>

//PROGRAMA SIMPLES PARA MEXER COM VERSIONAMENTO DO GIT

float soma(float x, float y){
    float conta;

    conta = x + y;

    return conta;
}

float subtracao(float x, float y){
    float conta;

    conta = x - y;

    return conta;
}

float multiplicacao(float x, float y){
    float conta;

    conta = x * y;

    return conta;
}

float divisao(float x, float y){
    float conta;

    conta = x / y;

    return conta;
}

int main(){
    int op = 1;
    float resultado, x, y;

    while(op != 4){
        printf("Escolha qual conta deseja fazer.\n");
        printf("(0) Soma.\n");
        printf("(1) Subtracao.\n");
        printf("(2) Multiplicacao.\n");
        printf("(3) Divisao.\n");
        printf("(4) Sair.\n");
        scanf("%d", &op);

        if(op == 4){
            break;
        }

        printf("\n");

        printf("Digite o primeiro numero: ");
        scanf("%f", &x);
        printf("Digite o segundo numero: ");
        scanf("%f", &y);

        printf("Numero digitados: %.2f e %.2f\n", x, y);

        printf("\n");

        switch (op){
        case 0:
            resultado = soma(x, y);
            printf("%.2f + %.2f = %.2f\n\n", x, y, resultado);
            break;

        case 1:
            resultado = subtracao(x, y);
            printf("%.2f - %.2f = %.2f\n\n", x, y, resultado);
            break;

        case 2:
            resultado = multiplicacao(x, y);
            printf("%.2f * %.2f = %.2f\n\n", x, y, resultado);
            break;

        case 3:
            resultado = divisao(x, y);
            printf("%.2f / %.2f = %.2f\n\n", x, y, resultado);
            break;

        default:
            printf("Opcao invalida!\n");
            break;
        }
    }

    printf("\nObrigado por utilzar nossa calculadora!\n\n");

    return 0;
}