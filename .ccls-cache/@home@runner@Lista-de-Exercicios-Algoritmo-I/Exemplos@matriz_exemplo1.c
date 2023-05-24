// #include <stdio.h>

// int main(){

//   const int numerodeAlunos = 4;
//   const int bimestres = 4;

//   float notasAlunos [numerodeAlunos] [bimestres] = {0};
//   float mediaAluno [numerodeAlunos] = {0};

//   float somadasNotas = 0;
//   int nota = 0;

//   for(int aluno = 0; aluno < numerodeAlunos; ++aluno){ //loop para iniciar o aluno X
//     printf("Digite as notas do aluno %d: ", aluno+1);
    
//     for(int nota = 0; nota < bimestres; ++nota){ //loop para armazenas as notas do aluno X.
    
//     scanf("%f", &notasAlunos [aluno][nota]); //armazena a nota do aluno X na matriz.

//     somadasNotas += notasAlunos [aluno][nota]; //soma e atualiza a soma das notas do aluno X. 
//   }

//   mediaAluno [aluno] = somadasNotas / bimestres; //armazena a média do aluno no array.
//   somadasNotas = 0;  //zerar a soma para não somar o valor da média com as notas do próximo aluno.

//   printf("\n");

//   }

//   for (int aluno = 0; aluno < numerodeAlunos; ++aluno){

//     printf("A média do aluno %d é %2.f\n", aluno+1, mediaAluno[aluno]);
    
//   }

//   return 0;
// }
