// // Faça um programa que lê as notas de n alunos, cada nota é um inteiro entre 0 e 100, e imprima a quantidade de vezes com que apareceu cada nota.

// #include <stdio.h>

// int main() {
//     int n, nota, i;
//     int notas[101] = {0}; // Inicializa o array com zero em todos os índices

//     printf("Digite a quantidade de alunos: ");
//     scanf("%d", &n);

//     for (i = 0; i < n; i++) {
//         printf("Digite a nota do aluno %d: ", i+1);
//         scanf("%d", &nota);

//         notas[nota]++; // Incrementa a quantidade de vezes que a nota apareceu
//     }

//     printf("Quantidade de vezes que cada nota apareceu:\n");
//     for (i = 0; i <= 100; i++) {
//         if (notas[i] > 0) {
//             printf("Nota %d: %d\n", i, notas[i]);
//         }
//     }

//     return 0;
// }
