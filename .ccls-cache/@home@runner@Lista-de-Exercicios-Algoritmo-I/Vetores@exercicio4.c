// // O imperador romano Júlio César usava um método de criptografa para mandar mensagens criptografadas para seus generais. Este método considerava a ordem dos caracteres no alfabeto e trocava cada letra pela k-ésima letra seguinte a letra. Por exemplo, se k = 3, então a ocorrência da letra 'A' era trocada pela letra 'D'. A letra 'B' era trocada pela letra 'E', assim por diante. Esta substituição era feita de maneira cíclica, que neste caso a letra 'Z' era trocada pela letra 'C'. Faça um programa que lê um inteiro k e uma cadeia de caracteres e imprime a correspondente mensagem criptografada pela cifra de César com parâmetro k.

// #include <stdio.h>
// #include <string.h>

// #define TAM_MAX 1000

// int main() {
//     char mensagem[TAM_MAX];
//     int k, tamanho;

//     // Lê a mensagem
//     printf("Digite a mensagem a ser criptografada: ");
//     fgets(mensagem, TAM_MAX, stdin);

//     // Remove o caractere de nova linha no final da mensagem
//     tamanho = strlen(mensagem);
//     if (mensagem[tamanho-1] == '\n') {
//         mensagem[tamanho-1] = '\0';
//         tamanho--;
//     }

//     // Lê o parâmetro k
//     printf("Digite o parametro k: ");
//     scanf("%d", &k);

//     // Criptografa a mensagem
//     for (int i = 0; i < tamanho; i++) {
//         char c = mensagem[i];

//         // Se c é uma letra maiúscula
//         if (c >= 'A' && c <= 'Z') {
//             c = (c - 'A' + k) % 26 + 'A';
//         }
//         // Se c é uma letra minúscula
//         else if (c >= 'a' && c <= 'z') {
//             c = (c - 'a' + k) % 26 + 'a';
//         }

//         mensagem[i] = c;
//     }

//     // Imprime a mensagem criptografada
//     printf("Mensagem criptografada: %s\n", mensagem);

//     return 0;
// }
