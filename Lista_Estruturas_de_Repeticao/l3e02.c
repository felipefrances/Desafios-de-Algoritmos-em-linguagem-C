// // Desenvolva um algoritmo que leia a altura de 15 pessoas e apresente a menor e a maior altura

// #include <stdio.h>

// int main (){

//   float altura, menor_altura, maior_altura;
//   int x;

//   printf("Digite a altura da primeira pessoa: ");
//   scanf("%f", &altura);
  
//   menor_altura = altura;
//   maior_altura = altura;
  
//   for(x = 2; x <= 15; x++){

//     printf("Digite a altura da próxima pessoa: ");
//     scanf("%f", &altura);

//     if(altura < menor_altura){
//       menor_altura = altura;
//     }

//     if(altura > maior_altura){
//       maior_altura = altura;
//     }
//   }

//   printf("A menor e maior altura são: %.2f e %.2f\n", menor_altura, maior_altura);

//   return 0;
// }