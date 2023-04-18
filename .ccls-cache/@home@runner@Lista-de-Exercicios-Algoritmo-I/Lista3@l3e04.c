// Escreva um algoritmo que leia uma quantidade desconhecida de números e conte quantos
// deles estão nos intervalos de [0-25], [26-50], [51-75] e [76-100]. A entrada de dados deve
// terminar quando for lido um número negativo.


// #include <stdio.h>

// int main() {
//   float num;
//   int c1 = 0, c2 = 0, c3 = 0, c4 = 0;

//   do{
//     printf("Digite um número positivo. Para sair, digite um número negativo: ");
//     scanf("%f", &num);

//     if (num <= 25 && num >= 0) {
//       c1++;
//     }
//     if (num >= 26 && num <= 50) {
//       c2++;
//     }
//     if (num >= 51 && num <= 75) {
//       c3++;
//     }
//     if (num >= 76 && num <= 100) {
//       c4++;
//     }
//   } while(num >= 0);

//   printf("\nForam computados os seguintes valores para cada intervalo:\n [0 a "
//          "25]: %d\n [26 a 50]: %d\n [51 a 75]: %d\n [76 a 100]: %d\n Valores "
//          "acima de 100 não foram computados.\n",
//          c1, c2, c3, c4);

//   return 0;
// }