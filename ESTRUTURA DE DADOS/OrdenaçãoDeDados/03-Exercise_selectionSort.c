// // Elabore um programa em C para receber até 20 elementos de uma lista e imprima-os de maneira ordenada.
// // Utilize o tipo de ordenação "Selection Sort"

// #include <stdio.h>

// //função selection sort
// void selectionSort(int num[], int tam)
// {
//  int i, j, min, aux;
//  for (i = 0; i < (tam-1); i++)
//  {
//  min = i;
//  for (j = (i+1); j < tam; j++) {
//  if(num[j] < num[min]) {
//  min = j;
//  }
//  }
//  if (i != min) {
//  aux = num[i];
//  num[i] = num[min];
//  num[min] = aux;
//  }
//  }
// }

// //função principal
// int main()
// {
// int vetor[10]={}, aux[10], i;

//   //input usuário
// for(i=0; i < 10; i++){
//   printf("Digite o valor desejado:");
//   scanf("%d", &vetor[i]);
// }
  
// //chamada função Selection Sort
// selectionSort(vetor,10);
 
// //Output dos dados ordenados
// for(i=0;i<10;i++){
// printf("valor = %d\t\n",vetor[i]);
// }
// return 0;
// }