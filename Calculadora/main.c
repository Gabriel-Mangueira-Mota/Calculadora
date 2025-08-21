#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    // Suporte a caracter PTBR

    setlocale(0, "Portuguese_Brazil");

    // Constante de escolha do usuario

    const char caracter_soma = '+';
    const char caracter_subtracao = '-';
    const char caracter_multiplicacao = '*';
    const char caracter_divisao = '/';

    // Opera��o baseada no usuario

    char operacao;

    // Valores

    double primeiro_valor;
    double segundo_valor;

    // Resultado

    double resultado;

    // Ambiente de escolha do usuario.

    printf("Escolha a opera��o.\n");

    // Opera��es.

    printf("Para adi��o use: %c\n", caracter_soma);
    printf("Para subtrair use: %c\n", caracter_subtracao);
    printf("Para multiplicar use: %c\n", caracter_multiplicacao);
    printf("Para dividir use: %c\n", caracter_divisao);

    // Escolhas baseadas nos usuarios

    printf("Digite a opera��o (+, -, *, /): ");
    scanf(" %c", &operacao);

    printf("Digite o primeiro valor: \n");
    scanf(" %lf", &primeiro_valor);

    printf("Digite o segundo valor: \n");
    scanf(" %lf", &segundo_valor);

    // Formulas

    double soma = (primeiro_valor + segundo_valor);
    double subtracao = (primeiro_valor - segundo_valor);
    double multiplicacao = (primeiro_valor * segundo_valor);
    double divisao = (primeiro_valor / segundo_valor);

    // Check de respostas

    if (operacao == caracter_soma) {
        resultado = soma;
    }

    else if (operacao == caracter_subtracao) {
        resultado = subtracao;
    }

    else if (operacao == caracter_multiplicacao) {
        resultado = multiplicacao;
    }

    else if (operacao == caracter_divisao) {
        if (segundo_valor == 0) {
            printf("Erro! Divis�o com zero 0\n");
                return 1;
            } else {
                resultado = primeiro_valor / segundo_valor;
            }

        }

    else {
        printf("Opera��o inv�lida!\n");
        return 1;
    }

    // Resultado

    printf("Resultado da opera��o �: %.10g\n", resultado);

    // Retorno

    return 0;
}
