// #include <stdio.h>

// // Definição da struct horário. Ao estar fora da função int main e da função struct horario teste, ela se torna uma struct global, ou seja, a duas funções aceitarão os parâmetros da struct. Se ela estiver dentro do main ou do teste, será uma struct local, lida apenas pela função que a recebe.
// struct horario {
//   int horas;
//   int minutos;
//   int segundos;
// };

// int main() {

//   // Declaração da função "teste", do tipo "horario", que retorna uma struct e que recebe (o que está entre parênteses) uma struct do tipo horario, de nome x.
//   struct horario teste(struct horario x);

//   // Declaração de "agora" (tipo = "struct horario" + nome = "agora")
//   struct horario agora;
//   agora.horas = 10;
//   agora.minutos = 42;
//   agora.segundos = 58;

//   //Declaração de "proxima" (tipo = "struct horario" + nome = "proxima").
//   struct horario proxima;
  
//   //proxima recebe a função teste com a estrutura de "agora" (já que text deve retornar uma estrutura) 
//   proxima = teste(agora);

//   printf("Proxima = %i: %i: %i, imprime os valores modificados na função teste, que retorna x.\n", proxima.horas, proxima.minutos, proxima.segundos);

//   return 0;
// }

// // função
// struct horario teste(struct horario x) {

//   //Nessa impressão o usuário receberá os valores recebidos de "agora"
//   printf("Teste, que recebe os valores de 'agora' = %i: %i: %i\n", x.horas, x.minutos, x.segundos);

//   //Essa declaração das variáveis da struct x, altera os valores que serão printados na tela, ao retornar x. Com isso a impressão de "próxima" terá os valores modificados
//   x.horas = 100;
//   x.minutos = 100;
//   x.segundos = 100;

//   return x;
// }