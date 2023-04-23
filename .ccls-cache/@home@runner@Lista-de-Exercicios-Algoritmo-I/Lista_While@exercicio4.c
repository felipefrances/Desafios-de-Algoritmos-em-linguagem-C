// // Faça um programa em C (atualize a estrutura for) que leia 10 valores inteiros e:
// // • Encontre e mostre o maior valor
// // • Encontre e mostre o menor valor
// // • Calcule e mostre a média dos números lidos

// #include <stdio.h>

// int main(){

//   int i, num, soma, maior, menor;

//   float media;

//   printf("digite um número: ");
//   scanf("%d", &num);

//   maior = menor = soma = num;
//   soma += num;

//   for(i = 2; i <= 10; i++){

//   printf("digite o próximo número: ");
//   scanf("%d", &num);

//   if(num > maior){
//     maior = num;
//   }

//   if(num < menor){
//     menor = num;
//   }

// soma += num;
//  }
//   media = soma / 10;  
         
//   printf("O maior valor digitado foi: %d\n", maior);
//   printf("O menor valor digitado foi: %d\n", menor);
//   printf("A media dos valores digitados foi: %.2f\n", media);
// }