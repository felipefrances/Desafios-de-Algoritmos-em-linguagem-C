// Desenvolva um algoritmo que leia uma quantidade não determinada de números positivos e
// calcule a quantidade de números pares e ímpares, a média de valores pares e a média geral
// dos números lidos. A leitura de números deve encerrar quando for lido o número zero.

// #include <stdio.h>

// int main (){
//   float soma = 0, media_par, media_geral, soma_2;
//   int n, cont_par = 0, cont_total = 0, cont_impar = 0;

//   do{
//     printf("Digite um número positivo. Pressione 0 para sair: ");
//     scanf("%d", &n);

//     soma_2 = soma_2 + n;
      
//     if(n % 2 == 0 && n> 0){
//       soma = n + soma;
//       cont_par++;           
//     } else if(n % 2 != 0 && n>0){
//       cont_impar++;
//     } else{
//       printf("Número não positivo\n");
//       soma_2 = soma_2 - n;
//     }
//   } while (n != 0);

//   cont_total = cont_par + cont_impar;
//   media_par = (float) soma / cont_par;
//   media_geral = (float) soma_2 / cont_total;

//   printf("\n\nQuantidade de números pares: %d\n Quantidade de números ímpares: %d\n Média dos valores pares: %.2f\n Média geral dos números lidos: %.2f\n", cont_par, cont_impar, media_par, media_geral);

//   return 0;
// }