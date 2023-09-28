// // Implemente um programa com uma função recursiva que calcule o valor de a^n.
// // Entre com os valores inteiros positivos de a e n.

// //Criação da função recursiva
// int func(int n, x){

//   if(x == 0){
//     return 1;
//   } else if(n >= 0 && x> 0) {   
//     return n = n * func(n, x -1);
//   } else {
//     return 0;
//   }
// }


// int main () {

//   int num, potencia;
  
//   printf("Digite um número inteiro positivo:");
//     scanf("%d", &num);

//   printf("Digite a potência: ");
//     scanf("%d", &potencia);

// //chamada da função recursiva no programa
//   int resultado = func(num, potencia);

//   if(num > 0 && potencia >0)
//   printf("O resultado de %d elevado a %d é: %d", num, potencia, resultado);

//   if(num < 0 || potencia < 0)
//     printf("Um dos números digitados não é positivo.");

//   return 0;
// }