// // Elabore um programa em C para receber até 20 elementos de uma lista e imprima-os de maneira ordenada.
// // Utilize o tipo de ordenação "Insertion Sort"

// #include <stdio.h>
// #include <math.h>

// //função que faz o Insertion Sort
// void iSort(int num[], int tam) {
//  int i, j, atual;
//  for (i = 1; i < tam; i++){
//  atual = num[i];
//  j = i - 1;

//  while ((j>=0) && (atual < num[j])) {
//  num[j+1] = num[j];
//  j--;

//  }
//  num[j+1] = atual;

//  }
// }

// //função principal
// int main()
// {
// int v[10],aux[10],i;

// //input do usuário
// for(i=0;i<10;i++)
// {
// printf("Entre com o valor %d = ",i+1);
// scanf("%d", &v[i]);
// }

// //ordenação dos dados com o insertion sort
// iSort(v,10);

// //impressão do resultado ordenado
// for(i=0;i<10;i++)
// {
// printf("valor = %d\t\n",v[i]);
// }
// return 0;
// }