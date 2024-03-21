#include <stdio.h>

// Questão 01
int soma_ate_N(int N) {
    if (N == 1)
        return 1;
    else
        return N + soma_ate_N(N - 1);
}

// Questão 02
int fatorial(int N) {
    if (N == 0)
        return 1;
    else
        return N * fatorial(N - 1);
}

// Questão 03
int fibonacci(int N) {
    if (N <= 1)
        return N;
    else
        return fibonacci(N - 1) + fibonacci(N - 2);
}

//Questão 04
void imprime_crescente(int N) {
    if (N > 0) {
        imprime_crescente(N - 1);
        printf("%d\n", N);
    }
}

// Questão 05
void imprime_decrescente(int N) {
    if (N > 0) {
        printf("%d\n", N);
        imprime_decrescente(N - 1);
    }
}


int main() {
    int N = 5;
    printf("Soma ate %d: %d\n", N, soma_ate_N(N));
    printf("Fatorial de %d: %d\n", N, fatorial(N));
    printf("Fibonacci(%d): %d\n", N, fibonacci(N));
    printf("Numeros naturais ate %d em ordem crescente:\n", N);
    imprime_crescente(N);
    printf("Numeros naturais ate %d em ordem decrescente:\n", N);
    imprime_decrescente(N);
    return 0;
}
