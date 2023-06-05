// #include <stdio.h>

// int main () {

//   //definição da struct horário e declaração da variável agora e do ponteiro "depois", que aponta para a struct horario.
//   struct horario {
//   int hora;
//   int minuto;
//   int segundo;
//   } agora, *depois;

//   depois = &agora;

//   //devido à precedência de sinais seria preciso escrever o ponteiro entre parêntesis para inicializar o valor.
//   (*depois).hora = 20;

//   //uma maneira mais facil é usar a seta, para apontar o ponteiro para a o membro da struct.
//   depois->minuto = 20;
//   depois->segundo = 20;
  
  

//   printf("Valor = %i: %i: %i\n", agora.hora, agora.minuto, agora.segundo);

//   return 0;
// }