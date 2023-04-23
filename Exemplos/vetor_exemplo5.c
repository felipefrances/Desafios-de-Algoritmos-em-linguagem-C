// //conversão de base

// #include <stdio.h>

// int main(void){
//   const char baseDigitos[16] ={'0','1','2','3','4','5','6','7','8','9', 'A', 'B', 'C', 'D', 'E', 'F'};

//   int convertidoNum[64];
//   long int numAConverter;
//   int proxDigit, base, indice = 0;

//   //Recebe o número e a base

//   printf("Número para ser convertido? ");
//   scanf("%ld", &numAConverter);
//   printf("Base? ");
//   scanf("%i", &base);

//   //Converte para a base indicada

//   do {
//     convertidoNum[indice] = numAConverter % base;
//     ++ indice;
//     numAConverter /= base;
//       }
//     while (numAConverter != 0);

//   //Exibe o resultado na ordem inversa

//   printf ("Numero convertido = ");
//   for (--indice; indice >= 0; --indice) {
//     proxDigit = convertidoNum[indice];
//     printf("%c", baseDigitos[proxDigit]);

//   }

//   printf("\n");

//   return 0;
// }