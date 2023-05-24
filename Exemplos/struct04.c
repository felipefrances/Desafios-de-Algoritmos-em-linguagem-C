// #include <stdio.h>

// int main() {

//   //uma forma de definir a struct e já declarar sua variável, sem precisar declarar separadamente (ex. struct horario agora). Basta incluir o nome das variáveis, separadas por vírgulas, após o fechamento de chaves, como abaixo:
//   struct horario {
//     int horas;
//     int minutos;
//     int segundos;
//   } agora = {10, 20, 30}, outraVarStruct, exemplo = {10};

//   //outra forma de atribuir valores da variável. Repare que os valores atribuídos seguem a ordem definida na struct:
//   struct horario proximo = {15, 25, 35};

//   //atribuir valores fora da ordem definida e incompletos (o programa lerá o valor horas por último e atribuirá valor 0):
//   struct horario teste = {.minutos = 35, .segundos = 45};

  
//   printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);

//   printf("%i:%i:%i\n", proximo.horas, proximo.minutos, proximo.segundos);

//   printf("%i:%i:%i\n", teste.horas, teste.minutos, teste.segundos);

//   printf("%i:%i:%i\n", exemplo.horas, exemplo.minutos, exemplo.segundos);

//   return 0;  
// }