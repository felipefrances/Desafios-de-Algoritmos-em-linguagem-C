// // Implemente um programa que leia o nome, a idade e o endereco de uma pessoa e
// // armazene os dados em uma estrutura.
// #include <stdio.h>
// #include <string.h>

// struct dados {
//   char nome[100];
//   int idade;
//   char endereco[140];
// } dadosPessoais;

// int main () {

//   struct dados dadosPessoais = {};

//   printf("Digite seu nome:");
//   fgets(dadosPessoais.nome, sizeof(dadosPessoais.nome), stdin);  dadosPessoais.nome[strcspn(dadosPessoais.nome,"\n")] = '\0';
 
//   printf("Digite sua idade:"); 
//   scanf("%d", &dadosPessoais.idade);

//   printf("Digite seu endereço:");
//   getchar();
//   fgets(dadosPessoais.endereco, sizeof(dadosPessoais.endereco), stdin);
// dadosPessoais.endereco[strcspn(dadosPessoais.endereco,"\n")] = '\0';

//   printf("\n");
  
//   printf("Dados informados pelo usuário:\n");
//   printf("Nome: %s\n", dadosPessoais.nome);
//   printf("Idade: %d\n", dadosPessoais.idade);
//   printf("Endereço: %s\n", dadosPessoais.endereco);

//   return 0;
// }