// // Faça um programa que leia um vetor com 20 elementos. A seguir, troque o primeiro elemento com o último, o segundo com o penúltimo, etc, até o décimo com o décimo primeiro.


// #include <stdio.h>

// #define TAM 20

// int main() {
//     int vetor[TAM], i, aux;

//     // Lê os elementos do vetor
//     for (i = 0; i < TAM; i++) {
//         printf("Digite o %dº elemento: ", i+1);
//         scanf("%d", &vetor[i]);
//     }

//     // Realiza a troca de elementos
//     for (i = 0; i < TAM/2; i++) {
//         aux = vetor[i];
//         vetor[i] = vetor[TAM-1-i];
//         vetor[TAM-1-i] = aux;
//     }

//     // Imprime o vetor resultante
//     printf("\nVetor resultante: ");
//     for (i = 0; i < TAM; i++) {
//         printf("%d ", vetor[i]);
//     }
//     printf("\n");

//     return 0;
// }
