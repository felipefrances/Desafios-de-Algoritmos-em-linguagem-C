// Escreva um programa que calcule o salário semanal de um trabalhador. As entradas são o número de horas
// trabalhadas na semana e o valor da hora. Até 40 h/semana não se acrescenta nenhum adicional. Acima de 40h e
// até 60h há um bônus de 50% para essas horas. Acima de 60h há um bônus de 100% para essas horas

// # include <stdio.h>

// int main (){

//   float hora, salario, valor;
//   valor = 10;

//   printf("Digite o número de horas trabalhadas: ");
//   scanf("%f", &hora);

//   if(hora <= 40 && hora > 0){
//     salario = valor * hora;
//   } else if(hora > 40 && hora <= 60) {
//     salario = (valor + (0.5 * valor)) * hora;
//   } else if(hora > 60) {
//     salario = (valor + valor) * hora;
//   } 

//   if (hora < 0){
//   printf("Valor inválido.\n");
//     }

//   printf("O salário é de: %.2f reais\n", salario);

//   return 0;
// }