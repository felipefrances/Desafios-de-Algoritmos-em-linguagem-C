//  #include <stdio.h>

// int main() {

//   // definição da struct horário cujos membros da struct são ponteiros que apontam para inteiros. Declaração da variável "hoje".
//     struct horario {
//     int *pHora;
//     int *pMinuto;
//     int *pSegundo;
//   } hoje;

//   //declaração de 3 variáveis int
//   int hora = 200;
//   int minuto = 300;
//   int segundo = 400;

//   //endereçando o ponteiro para o endereço da variável.
//   hoje.pHora = &hora;
//   hoje.pMinuto = &minuto;
//   hoje.pSegundo = &segundo;

//   //imprime os valores acessados pelos ponteiros
//   printf("Hora = %i\n", *hoje.pHora);
//   printf("Minuto = %i\n", *hoje.pMinuto);
//   printf("Segundo = %i\n", *hoje.pSegundo );

//   return 0;
// }