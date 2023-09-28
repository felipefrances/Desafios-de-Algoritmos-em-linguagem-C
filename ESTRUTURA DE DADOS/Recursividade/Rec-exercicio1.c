// // (Faça um algoritmo que) tenha uma entrada de elementos (vetor de 6 números inteiros) com uma função para realizar a busca de um elemento K nesse vetor. Depois retorne a posição do elemento encontrado e caso o elemento não seja encontrado retorne -1.

// #include <stdio.h>

// int buscarElemento(int vetor[], int tamanho, int elemento) {
//     for (int i = 0; i < tamanho; i++) {
//         if (vetor[i] == elemento) {
//             return i; 
//         }
//     }
//     return -1;
// }

// int main() {
//     int tamanho = 6;
//     int vetor[] = {10, 20, 30, 40, 50, 60};
//     int elemento;

//     printf("Digite o elemento a ser buscado: ");
//     scanf("%d", &elemento);

//     int posicao = buscarElemento(vetor, tamanho, elemento);

//     if (posicao != -1) {
//         printf("O elemento %d foi encontrado na posição %d do vetor.\n", elemento, posicao);
//     } else {
//         printf("O elemento %d não foi encontrado no vetor.\n", elemento);
//     }

//     return 0;
// }
