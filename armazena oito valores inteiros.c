#include <stdio.h>

int main() {
    int A[8]; // Declaração do vetor com 8 elementos inteiros
    int i; // Variável para controle de loop

    // Solicitação dos valores do usuário
    printf("Digite 8 valores inteiros:\n");
    for (i = 0; i < 8; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    // Exibindo os valores armazenados na ordem inversa
    printf("Valores na ordem inversa:\n");
    for (i = 7; i >= 0; i--) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
