// // Escreva um algoritmo que calcule a média dos números digitados pelo usuário,
// // se eles forem pares. Termine a
// // leitura se o usuário digitar zero (0).

// #include <stdio.h>
// int main() {
//   int x, soma, contador;
//   float media;
//   soma = 0;
//   contador = 0;

//   printf("Digite um número diferente de 0 ou pressione 0 para encerrar: ");
//   scanf("%d", &x);

//   while (x != 0) {
//     if (x % 2 == 0) {
//       soma = soma + x;
//       contador++;
//     }
//     printf("Digite um número diferente de 0 ou pressione 0 para encerrar: ");
//     scanf("%d", &x);
//   }

//   if (contador == 0) {
//     printf("Não foram digitados números pares.\n");
//   } else {
    
//     media = soma / contador;

//     printf("A média doa números pares fornecidos é: %.2f\n", media);
//     }
//     return 0;
//   }