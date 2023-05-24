//  // Faça um programa que lê uma cadeia de caracteres e transforma a cadeia de caracteres na mesma cadeia, mas com as letras transformadas para minúsculas. Em seguida imprime a cadeia de caracteres resultante. Depois, faça o mesmo com letras maiúsculas.

// #include <stdio.h>
// #include <string.h>

// int main() {
//   char str[100];

//   // Lê a cadeia de caracteres
//   printf("Digite uma cadeia de caracteres: ");
//   fgets(str, 100, stdin);

//   // Transforma para minúsculas
//   for(int i=0; i<strlen(str); i++) {
//     if(str[i]>='A' && str[i]<='Z') {
//       str[i] = str[i] + 32;
//     }
//   }

//   // Imprime a cadeia de caracteres em minúsculas
//   printf("Cadeia em minúsculas: %s", str);

//   // Transforma para maiúsculas
//   for(int i=0; i<strlen(str); i++) {
//     if(str[i]>='a' && str[i]<='z') {
//       str[i] = str[i] - 32;
//     }
//   }

//   // Imprime a cadeia de caracteres em maiúsculas
//   printf("Cadeia em maiúsculas: %s", str);

//   return 0;
// }
