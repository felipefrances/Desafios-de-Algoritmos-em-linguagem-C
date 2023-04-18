//Faca um programa que leia um numero real e o imprima.

//Utilize o arquivo "main.c" para executar o código.

#include <stdio.h>

int q2() {
    float num; 

    printf("Digite um numero real: ");
    scanf("%f", &num); 
    printf("Voce digitou o numero %.2f\n", num);

    return 0;
}
