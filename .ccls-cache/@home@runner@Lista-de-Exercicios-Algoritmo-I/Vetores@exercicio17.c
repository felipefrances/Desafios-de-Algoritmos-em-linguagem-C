// // Escreva um programa em C que leia um vetor de inteiros e retorne o índice do elemento com a maior soma de seus elementos adjacentes.


// #include <stdio.h>

// #define TAM 10

// int main() {
//     int vetor[TAM];
//     int i, soma_max = -1, indice_max = -1;

//     // Leitura do vetor
//     printf("Digite os %d elementos do vetor:\n", TAM);
//     for (i = 0; i < TAM; i++) {
//         scanf("%d", &vetor[i]);
//     }

//     // Cálculo da soma dos elementos adjacentes
//     for (i = 1; i < TAM-1; i++) {
//         int soma = vetor[i-1] + vetor[i+1];
//         if (soma > soma_max) {
//             soma_max = soma;
//             indice_max = i;
//         }
//     }

//     // Impressão do índice com a maior soma
//     printf("O índice com a maior soma de elementos adjacentes é: %d\n", indice_max);

//     return 0;
// }
