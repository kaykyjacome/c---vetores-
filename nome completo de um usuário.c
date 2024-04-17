#include <stdio.h>

int main() {
    char nome[100]; 
    int contador; 

    // Solicitando o nome completo do usuário
    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin); 

    // Contagem de caracteres, incluindo o '\0' usando loop for
    for (contador = 0; nome[contador] != '\0'; contador++); // Percorre a string até encontrar '\0'
    contador++; 

    // Exibindo o resultado
    printf("Quantidade de caracteres inserida (incluindo '\\0'): %d\n", contador);

    return 0;
}
