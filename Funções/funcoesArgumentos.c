// #include <stdio.h>

// int main () {

//   //declaração da função "funcaoPrint"
//   void funcaoPrint (int x, int vetor[]);

//   //Declaração de uma variável inteira de valor 10
//   int x = 10;

//   //Declaração de um vetor de números inteiros, com três espaços, sendo o
//   primeiro preenchido pelo valor 10 int vetor [3] = {10};

//   //chamada da função "funcaoPrint" para execução, com os argumentos
//   declarados acima (x e vetor) funcaoPrint(x, vetor);

//   //imprime o valor da variável declarada dentro de main, sem a alteração da
//   função printf("Variável int na função principal = %i\n", x);

//   //imprime o endereço da matriz na memória. Como o valor dentro do endereço
//   foi alterado, ele imprimirá o valor alterado e não o valor inicialmente
//   declarado dentro de main. printf("Vetor na função principal = %i\n", vetor
//   [1]);

//   //system ("pause");
//   return 0;
// }

// //Criação da função "funcaoPrint"
// void funcaoPrint(int x, int vetor []) {

//   //O que será executado na função:
//   //Alteração da variável x, para x+10 (variável local)
//   //Alteração do primeiro espaço do vetor para 20
//   x = x + 10;
//   vetor [1] = 20;

//   //imprime os valores que a função pede, com as alterações
//   printf("Variável int na função principal = %i\n", x);
//   printf("Vetor na função principal = %i\n", vetor [1]);

// }