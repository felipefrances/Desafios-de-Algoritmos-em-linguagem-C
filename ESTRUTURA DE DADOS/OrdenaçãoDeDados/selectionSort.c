// #include <stdio.h>


// void s_sort(int num[], int tam)
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

// int main()
// {
// int v[10]={63,13,10,37,79,45,46,22,30,1},aux[10],i;
// s_sort(v,10);

// for(i=0;i<10;i++)
// {
// printf("valor = %d\t\n",v[i]);
// }
// return 0;
// }