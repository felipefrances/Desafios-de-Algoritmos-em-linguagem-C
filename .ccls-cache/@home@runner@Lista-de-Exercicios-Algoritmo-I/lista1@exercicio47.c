// // Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha

// #include <stdio.h>

// int main ()
// {
//   int n1, d1, d2, d3, d4;

//   printf("Digite um número de 4 dígitos entre 1000 e 9999: ");
//   scanf("%d", &n1);

//   if (n1 >= 1000 && n1 <= 9999) {
    
//     d1 = (n1 / 1000);
//     d2 = (n1 % 1000) / 100;
//     d3 = ((n1 % 1000) % 100) / 10;
//     d4 = ((n1 % 1000) % 100) % 10;

//     printf("%d\n %d\n %d\n %d\n", d1, d2, d3, d4);
//   } else {
    
//     printf("O número digitado não está entre 1000 e 9999");
//   }
//   return 0;
  
// }