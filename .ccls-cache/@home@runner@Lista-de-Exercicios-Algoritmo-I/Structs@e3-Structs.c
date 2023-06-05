// // Construa uma estrutura aluno com nome, numero de matrıcula e curso. Leia do usuario a informacao de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.

// #include <stdio.h>
// #include <string.h>

// struct dado {
// char nome[100];
// int matricula;
// char curso[100];
// } aluno[5];

// int main() {

//   int i = 0;

//   for (i = 0; i < 5; i++) {
//     printf("Digite o nome do aluno %d: ", i+1);
//     fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
//     aluno[i].nome[strcspn(aluno[i].nome,"\n")] = '\0';

//     printf("Digite o número de matrícula do aluno %d: ", i+1);
//     scanf("%d", &aluno[i].matricula);
//     getchar(); // Limpar o buffer do stdin

//     printf("Digite o curso do aluno %d: ", i+1);
//     fgets(aluno[i].curso, sizeof(aluno[i].curso), stdin);
//     aluno[i].curso[strcspn(aluno[i].curso, "\n")] = '\0';
//     printf("\n");
//   }

//   for (i = 0; i < 5; i++) {
//         printf("Aluno %d:\n", i + 1);
//         printf("Nome: %s\n", aluno[i].nome);
//         printf("Matrícula: %d\n", aluno[i].matricula);
//         printf("Curso: %s\n", aluno[i].curso);
//         printf("\n");
//     }
  
//   return 0;
// }