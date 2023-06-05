// #include <stdio.h>

// int main() {

//   // definição da struct horário e declaração da variável agora e do ponteiro "depois", que aponta para a struct horario.
  
//   struct horario {
//     int hora;
//     int minuto;
//     int segundo;
//   } agora, *depois;

//   depois = &agora;

//   depois->hora = 10;
//   depois->minuto = 20;
//   depois->segundo = 50;

//   int somatorio = 100;

//   struct horario antes;

//   //operações aritméticas para definir os membros da struct antes, usando uma variável int e os valores que o ponteiro "depois" aponta.
//   antes.hora = somatorio + depois->segundo;
//   antes.minuto = somatorio - depois->minuto;
//   antes.segundo = somatorio / depois->hora;
  
//   printf("Valor = %i: %i: %i\n", antes.hora, antes.minuto, antes.segundo);

//   return 0;
// }