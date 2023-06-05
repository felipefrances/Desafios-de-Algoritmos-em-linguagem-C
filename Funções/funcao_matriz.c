// #include <stdio.h>

// int main (){

//   // Declaração da matriz 3x3 com seus valores
//   int matriz [3] [3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  
//   //Declaração da função dentro de main
//   void funcaoPrint (int x[3] [3]);

//   //Chama a função declarada pra ser executada, usando a matriz declarada em main.
//   funcaoPrint(matriz);
    
//   // system ("pause"); - não sei pra que serve ainda.
//   return 0;
// }

// //no minimo quando você estiver declarando uma função que retorna matriz, você precisa informar pelo menos as colunas da matriz.

// void funcaoPrint (int x[] [3]) {

//   //Declaração das variáveis do laço de repetição
//   int i, j;

//   //laço de repetição para preenchimento dos valores da matriz, que será executado quando a função for chamada no programa.
  
//   for(i = 0; i < 3; ++i) {
//     for(j = 0; j < 3; ++j){
//       printf("%i ", x [i][j]);
//     }
 
//     //espaçamento para dar a matriz a forma gráfica usual  
//   printf("\n");
//   }
// }