// #include <stdio.h>

// int main() {
//     char operacao;
//     float num1, num2, resultado;
    
//     printf("Digite a operacao desejada (+, -, / ou *): ");
//     scanf("%c", &operacao);
    
//     printf("Digite o primeiro numero: ");
//     scanf("%f", &num1);
    
//     printf("Digite o segundo numero: ");
//     scanf("%f", &num2);
    
//     switch (operacao) {
//         case '+':
//             resultado = num1 + num2;
//             printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
//             break;
//         case '-':
//             resultado = num1 - num2;
//             printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
//             break;
//         case '/':
//             if (num2 == 0) {
//                 printf("Erro: divisao por zero!\n");
//             } else {
//                 resultado = num1 / num2;
//                 printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
//             }
//             break;
//         case '*':
//             resultado = num1 * num2;
//             printf("%.2f * %.2f = %.2f\n", num1, num2, resultado);
//             break;
//         default:
//             printf("Operacao invalida!\n");
//             break;
//     }
    
//     return 0;
// }
