// // Implemente e C uma função recursiva que receba um número inteiro positivo par e imprima a soma desses números pares até n.

// #include <stdio.h>

// int rec(int n) {
//     if (n <= 0) {
//         return 0;
//     } else {
//         if (n % 2 == 0) {
//             return n + rec(n - 2);
//         } else {
//             printf("O número não é par.\n");
//         }
//     }
// }


// int main (){

//   int numPar;

//   printf("Digite um número inteiro: ");
//   scanf("%d", &numPar);
  
//  int resultado = rec(numPar);

//   printf("resultado: %d ", resultado);

//   return 0;
// }