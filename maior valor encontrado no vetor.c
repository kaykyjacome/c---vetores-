#include <stdio.h>

int main() {
    int numeros[10]; 
    int maior; 
    int i; 

    // Solicitação dos números ao usuário
    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Inicializando o maior valor com o primeiro elemento do vetor
    maior = numeros[0];

    // Percorrendo o vetor para encontrar o maior valor
    for (i = 1; i < 10; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i]; 
        }
    }

    // Exibindo o maior valor encontrado
    printf("O maior valor digitado e: %d\n", maior);

    return 0;
}
