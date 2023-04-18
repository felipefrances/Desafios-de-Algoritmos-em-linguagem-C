// Leia um numero real e imprima o resultado do quadrado desse numero.

//Utilize o arquivo "main.c" para executar o código.

#include <stdio.h>
  
int q4() {

  float num, quad;

   printf("Digite um número real: ");
    scanf("%f", &num);

    quad = num * num;

  printf("O quadrado do numero é: %.2f", quad);

return 0;
}
