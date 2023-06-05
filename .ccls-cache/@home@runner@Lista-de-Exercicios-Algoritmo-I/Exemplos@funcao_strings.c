// #include <stdio.h>

// void strcat_custom(const char *s1, const char *s2, char *sres) {
//   int i = 0;
//   int j = 0;

//   // Copia s1 para sres
//   while (s1[i] != '\0') {
//     sres[j] = s1[i];
//     i++;
//     j++;
//   }

//   // Concatena s2 ao final de sres
//   i = 0;
//   while (s2[i] != '\0') {
//     sres[j] = s2[i];
//     i++;
//     j++;
//   }

//   // Adiciona o caractere nulo de terminação
//   sres[j] = '\0';
// }

// int main() {
//   char s1[20] = "Hello, ";
//   char s2[] = "world!";
//   char sres[30];

//   strcat_custom(s1, s2, sres);
//   printf("Resultado: %s\n", sres);

//   return 0;
// }
