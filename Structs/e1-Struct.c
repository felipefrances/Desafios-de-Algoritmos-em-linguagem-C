// // Escreva um trecho de codigo para fazer a criacao dos novos tipos de dados
// // conforme solicitado abaixo: • Horario: composto de hora, minutos e segundos.
// // • Data: composto de dia, mes e ano.
// // • Compromisso: composto de uma data, horario e texto que descreve o
// // compromisso.

// #include <stdio.h>
// #include <string.h>

// struct hor {
//   int hora;
//   int minuto;
//   segundo;
// } horario;




// struct dat {
//   int dia;
//   int mes;
//   int ano;
// } data;

// struct agenda {
//   struct hor horario;
//   struct dat data;
//   char texto[140];
// } compromisso;

// int main() {

//   struct hor horario = {};
//   struct dat data = {};
//   struct agenda compromisso = {};

//   printf("Digite a data do compromisso no formato dd mm aaaa \n");
//   scanf("%d/%d/%d", &data.dia, &data.mes, &data.ano);

//   printf("Digite o horario do compromisso no formato h:m:s \n");
//   scanf("%d:%d:%d", &horario.hora, &horario.minuto, &horario.segundo);

//   printf("Digite o nome do seu compromisso: \n");
//   getchar(); // Limpar o caractere de nova linha pendente do scanf anterior
//   fgets(compromisso.texto, sizeof(compromisso.texto), stdin);
//   compromisso.texto[strcspn(compromisso.texto, "\n")] = '\0'; // Remover o caractere de nova linha lido pelo fgets

//   printf("Seu compromisso está agendado. Dados do evento:\n");
//   printf("Compromisso: ");
//   puts(compromisso.texto);
//   printf("Data: %d/%d/%d\n", data.dia, data.mes, data.ano);
//   printf("Horário: %d:%d:%d.\n", horario.hora, horario.minuto, horario.segundo);

//   return 0;
// }
