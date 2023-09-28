  // // Elabore um programa em C para receber até 20 elementos de uma lista e imprima-os de maneira ordenada.
  // // Utilize o tipo de ordenação "Merge Sort"
  
  // #include<stdio.h>
  
  // void intercalar (int vetor[],int aux[],int ini1, int ini2,int fim2)
  // {
  // int in1=ini1,in2=ini2,fim1=in2-1,au=0,i;
  // while(in1<=fim1 && in2<=fim2)
  // {
  // if (vetor[in1]<vetor[in2])
  // {
  // aux[au++] = vetor[in1++];
  // }
  // else
  // {
  // aux[au++] = vetor[in2++];
  // }
  // }
  // while(in1<=fim1)
  // {
  // aux[au++] = vetor[in1++];
  // }
  // while(in2<=fim2)
  // {
  // aux[au++] = vetor[in2++];
  // }
  // for(i=0;i<au;i++){
  // vetor[i+ini1]=aux[i];}
  // }
  
  // //função Merge Sort para ordenação
  // void mergeSort (int v[], int aux[],int esq, int dir)
  // {
  // int meio,i;
  // if(esq<dir)
  // {
  // meio=(esq+dir)/2;
  
  // //chamada da função merge para ordenação da metade esquerda do vetor
  // mergeSort(v,aux,esq,meio);
  // //chamada da função merge para ordenação da metade direita do vetor
  // mergeSort(v,aux,meio+1,dir);
  
  // intercalar(v,aux,esq,meio+1,dir);
  // }
  // }
  
  // //função principal
  // int main()
  // {
  // int vetor[5]={},aux[5],i;
  
  // for(i = 0; i<5; i++){
  //   printf("Entre com o valor desejado: ");
  //   scanf("%d", &vetor[i]);
  // }
  
  // //chamada da função merge sort
  // mergeSort(vetor,aux,0,4);
  
  // //output dos números ordenados  
  // for(i=0;i<5;i++)
  // {
  // printf("%d\t\n",vetor[i]);
  // }
  // return 0;
  // }