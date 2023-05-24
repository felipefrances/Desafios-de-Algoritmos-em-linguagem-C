// // Faça um programa que lê um número n, depois lê n números reais e o programa imprime, em relação aos números reais, o maior valor, o menor valor, a média e quantos números foram maiores ou iguais a média.

// #include <stdio.h>

// #define MAX_SIZE 100

// int main() {
//   int n, i;
//   float numeros[MAX_SIZE], soma = 0.0, media, maior, menor;
//   int num_maiores_ou_iguais = 0;

//   printf("Digite a quantidade de números reais a serem lidos: ");
//   scanf("%d", &n);

//   // Lê os n números reais e armazena no vetor numeros
//   for (i = 0; i < n; i++) {
//     printf("Digite o %dº número real: ", i+1);
//     scanf("%f", &numeros[i]);
//   }

//   // Encontra o maior e o menor número
//   maior = numeros[0];
//   menor = numeros[0];
//   for (i = 1; i < n; i++) {
//     if (numeros[i] > maior) {
//       maior = numeros[i];
//     }
//     if (numeros[i] < menor) {
//       menor = numeros[i];
//     }
//   }

//   // Calcula a média
//   for (i = 0; i < n; i++) {
//     soma += numeros[i];
//   }
//   media = soma / n;

//   // Conta quantos números são maiores ou iguais à média
//   for (i = 0; i < n; i++) {
//     if (numeros[i] >= media) {
//       num_maiores_ou_iguais++;
//     }
//   }

//   // Imprime os resultados
//   printf("Maior valor: %.2f\n", maior);
//   printf("Menor valor: %.2f\n", menor);
//   printf("Média: %.2f\n", media);
//   printf("Quantidade de números maiores ou iguais à média: %d\n", num_maiores_ou_iguais);

//   return 0;
// }
