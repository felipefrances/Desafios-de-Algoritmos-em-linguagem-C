// // Crie uma estrutura representando os alunos de um determinado curso. A
// // estrutura deve conter a matrıcula do aluno, nome, nota da primeira prova,
// // nota da segunda prova e nota da terceira prova. (a) Permita ao usuario entrar
// // com os dados de 5 alunos. (b) Encontre o aluno com maior nota da primeira
// // prova. (c) Encontre o aluno com maior media geral. (d) Encontre o aluno com
// // menor media geral. (e) Para cada aluno diga se ele foi aprovado ou reprovado,
// // considerando o valor 6 para aprovacao.

// // // Construa uma estrutura aluno com nome, numero de matrıcula e curso. Leia
// // do usuario a informacao de 5 alunos, armazene em vetor dessa estrutura e
// // imprima os dados na tela.

// #include <stdio.h>
// #include <string.h>

// struct dado {
//   char nome[100];
//   int matricula;
//   float np1;
//   float np2;
//   float np3;
// } ;

// int main() {

//   struct dado aluno[5];

//   int i = 0;
//   float maiorNP1 = 0;
//   float maiorMedia = 0;
//   float menorMedia = 11;
//   float media[5];

//   for (i = 0; i < 5; i++) {
//     printf("Digite o nome do aluno %d: ", i + 1);
//     fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
//     aluno[i].nome[strcspn(aluno[i].nome, "\n")] = '\0';

//     printf("Digite o número de matrícula do aluno %d: ", i + 1);
//     scanf("%d", &aluno[i].matricula);

//     printf("Digite a nota da NP1 do aluno %d: ", i + 1);
//     scanf("%f", &aluno[i].np1);

//     printf("Digite a nota da NP2 do aluno %d: ", i + 1);
//     scanf("%f", &aluno[i].np2);

//     printf("Digite a nota da NP3 do aluno %d: ", i + 1);
//     scanf("%f", &aluno[i].np3);

//     printf("\n");

//     media[i] = (aluno[i].np1 + aluno[i].np2 + aluno[i].np3) / 3.0;

//     if (media[i] > maiorMedia) {
//       maiorMedia = media[i];
//     }

//     if (media[i] < menorMedia) {
//       menorMedia = media[i];
//     }

//     if (aluno[i].np1 > maiorNP1) {
//       maiorNP1 = aluno[i].np1;
//     }

//   getchar(); 
//   }

//   for (i = 0; i < 5; i++) {
//     printf("Nome do Aluno: %s\n", aluno[i].nome);
//     printf("Matrícula: %d\n", aluno[i].matricula);
//     printf("Nota NP1: %f\n", aluno[i].np1);
//     printf("Nota NP2: %f\n", aluno[i].np2);
//     printf("Nota NP3: %f\n", aluno[i].np3);
//     printf("Média do aluno: %.2f", media[i]);

//     if (media[i] >= 6.0) {
//       printf(" - Aluno Aprovado\n");
//     } else {
//       printf(" - Aluno Reprovado\n");
//     }

//     printf("\n");
//   }

//   printf("\n");

//   for (i = 0; i < 5; i++) {

//     if (maiorMedia == media[i]) {
//       printf("O aluno %s teve a maior média geral: %f\n", aluno[i].nome, maiorMedia);
//     }

//     if (menorMedia == media[i]) {
//       printf("O aluno %s teve a menor média geral: %f\n", aluno[i].nome, menorMedia);
//     }

//     if (maiorNP1 == aluno[i].np1) {
//       printf("O aluno %s teve a maior nota na NP1: %f\n", aluno[i].nome, aluno[i].np1);
//     }
//   }

//   return 0;
// }