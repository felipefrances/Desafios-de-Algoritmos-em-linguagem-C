// #include <stdio.h>

// int main() {

//   // definição da estrutura e nome da definicao
//   struct horario {
  
//     // definição do tipo de variáveis que a struct vai conter. A struct pode ter variáveis de diferentes tipos.
//     int horas;
//     int minutos;
//     int segundos;
//     double teste;
//     char letra;
//   };

//   // declaração da estrutura de tipo horário, chamado agora. Significa que "agora" é uma estrutura do tipo horário. e o tipo horário foi definido acima, que é uma struct com três variáveis int. Em resumo, é preciso definir primeiro o tipo de uma struct antes de declará-la.
//   struct horario agora;

//   // Definição do valor da variável dentro da estrutura. A forma é nome da struct.variável = valor.
//   agora.horas = 15;
//   agora.minutos = 17;
//   agora.segundos = 30;

//   // criação de uma nova struct do tipo horario (já definida acima) com o nome depois.
//   struct horario depois;
  
//   // definição das variáveis dentro da estrutura, seguindo o formato struct.variável = valor. é possível fazer operações matemáticas envolvendo structs
//   depois.horas = agora.horas + 10;
//   depois.minutos = agora.minutos;
//   depois.segundos = agora.segundos;
//   depois.teste = 50.55 / 123;
//   depois.letra = 'a';

//   printf("%i\n", depois.horas);
//   printf("%i\n", depois.minutos);
//   printf("%f\n", depois.teste);
//   printf("%c\n", depois.letra);

//   return 0;
// }