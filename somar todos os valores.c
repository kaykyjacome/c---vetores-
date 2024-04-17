#include <stdio.h>

int main() {
    int numeros[5]; 
    int soma = 0; 
    int i; 

    // Solicitação dos números ao usuário
    printf("Digite 5 numeros inteiros:\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Somando os valores do vetor
    for (i = 0; i < 5; i++) {
        soma += numeros[i];
    }

    // Exibindo o resultado da soma
    printf("A soma dos numeros digitados e: %d\n", soma);

    return 0;
}
