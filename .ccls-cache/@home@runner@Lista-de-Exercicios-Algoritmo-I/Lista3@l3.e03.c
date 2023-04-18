#include <stdio.h>

int main() {
    float num, soma = 0, media, perc_positivos, perc_negativos;
    int n_positivos = 0, n_negativos = 0, n_total = 0;

    printf("Digite os numeros (digite 0 para parar): \n");

    // Loop para ler os numeros até que o usuario digite 0
    do {
        scanf("%f", &num);
        if (num != 0) { // se o numero for diferente de 0
            soma = num + soma; // adiciona o numero à soma
            n_total++; // incrementa a quantidade total de numeros

            if (num > 0) {
                n_positivos++; // incrementa a quantidade de numeros positivos
            } else {
                n_negativos++; // incrementa a quantidade de numeros negativos
            }
        }
    } while (num != 0);

    // Calcula a media aritmetica
    media = soma / n_total;

    // Calcula o percentual de valores positivos e negativos
    perc_positivos = (float) n_positivos / n_total * 100;
    perc_negativos = (float) n_negativos / n_total * 100;

    // Exibe os resultados na tela
    printf("Media aritmetica: %.2f\n", media);
    printf("Quantidade de valores positivos: %d\n", n_positivos);
    printf("Quantidade de valores negativos: %d\n", n_negativos);
    printf("Percentual de valores positivos: %.2f%%\n", perc_positivos);
    printf("Percentual de valores negativos: %.2f%%\n", perc_negativos);

    return 0;
}
