#include <stdio.h>

// Função para calcular e imprimir a sequência de Fibonacci até um número específico
void calcularFibonacci(int numero) {
    int num1 = 0;
    int num2 = 1;
    int proximo;

    printf("Sequência de Fibonacci até %d:\n", numero);

    printf("%d, ", num1);
    printf("%d, ", num2);

    proximo = num1 + num2;

    while (proximo <= numero) {
        printf("%d, ", proximo);
        num1 = num2;
        num2 = proximo;
        proximo = num1 + num2;
    }

    printf("\n");
}

// Função para verificar se um número pertence à sequência de Fibonacci
int pertenceFibonacci(int numero) {
    int num1 = 0;
    int num2 = 1;
    int proximo = num1 + num2;

    while (proximo <= numero) {
        if (proximo == numero) {
            return 1;
        }
        num1 = num2;
        num2 = proximo;
        proximo = num1 + num2;
    }

    return 0;
}

int main() {
    int numero;

    printf("Digite um número para calcular a sequência de Fibonacci até ele: ");
    scanf("%d", &numero);

    calcularFibonacci(numero);

    if (pertenceFibonacci(numero)) {
        printf("O número informado pertence à sequência de Fibonacci.\n");
    } else {
        printf("O número informado não pertence à sequência de Fibonacci.\n");
    }

    return 0;
}
