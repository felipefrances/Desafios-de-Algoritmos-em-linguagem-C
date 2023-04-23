// // Faça um programa em C (com a estrutura do...while) que leia 20 valores inteiros e: – Encontre e mostre o maior valor; – Encontre e mostre o menor valor; – Calcule e mostre a média dos números lidos;

// #include <stdio.h>

// int main () {

//   int i = 1, num, maior = 0, menor = 99999999, soma = 0, media;

//    do {
//     printf("Digite um número: ");
//     scanf("%d", &num); 

//      soma += num;
   
//     if (num > maior){
//       maior = num;
//     }
    
//     if (num < menor){
//         menor = num;
//     }     
    
//      i ++;
     
//    } while (i <= 20);
 
//   media = soma / 20;
         
//   printf("O maior valor digitado foi: %d\n", maior);
//   printf("O menor valor digitado foi: %d\n", menor);
//   printf("A media dos valores digitados foi: %d\n", media);
     
  
// }