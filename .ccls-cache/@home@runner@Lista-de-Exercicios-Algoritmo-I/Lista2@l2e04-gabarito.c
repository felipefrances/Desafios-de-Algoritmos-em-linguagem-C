// // Escreva um algoritmo que calcule a média dos números digitados pelo usuário, se eles forem pares. Termine a
// // leitura se o usuário digitar zero (0).

// #include <stdio.h>

// int main() {
//     int num, count, soma;
//     float media;
//     count = 0;
//     soma = 0;
    
//     printf("Digite um número inteiro (ou 0 para encerrar): ");
//     scanf("%d", &num);
    
//     while (num != 0) {
//         if (num % 2 == 0) { // verifica se o número é par
//             soma = soma + num;
//             count++; // conta a quantidade de números pares
//         }
        
//         printf("Digite um número inteiro (ou 0 para encerrar): ");
//         scanf("%d", &num);
//     }
    
//     if (count == 0) {
//         printf("Não foram digitados números pares.\n");
//     } else {
//         media = (float) soma / count;
//         printf("A média dos números pares é: %.2f\n", media);
//     }
    
//     return 0;
// }
