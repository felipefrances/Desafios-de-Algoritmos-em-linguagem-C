// // Construa uma função que calcule e retorne a distância entre dois pontos ( x1, y1) e (x2, y2). Todos os números e valores de retorno devem ser do tipo double. Você terá que incluir trechos de código no algoritmo para que ele retorne o que se está sendo pedido.

// // --------------------------------------------------------------------------------------

// // DICA:

// // Sabemos que para calcular a distância entre dois pontos ( x1, y1) e (x2, y2), temos que calcular da seguinte forma:

// // a = x1 - x2; // Encontra a distancia entre os pontos x1 e x2
// // b = y1 - y2; // Encontra a distancia entre os pontos y1 e y2
// // c = a * a + b * b; // faz a conta = aˆ2 + bˆ2
// // sqrt(c); // Acha a raiz da equação.


// #include <stdio.h>
// #include <math.h>

// double calcularDistancia(double x1, double y1, double x2, double y2) {
//     double a = x1 - x2;
//     double b = y1 - y2;
//     double c = a * a + b * b;
//     double distancia = sqrt(c);
//     return distancia;
// }

// int main() {
//     double x1, x2, y1, y2, res;
//     printf("Digite as coordenadas X e Y do ponto 1:\n");
//     scanf("%lf %lf", &x1, &y1);
//     printf("Digite as coordenadas X e Y do ponto 2:\n");
//     scanf("%lf %lf", &x2, &y2);

//     res = calcularDistancia(x1, y1, x2, y2);
//     printf("A distância entre os pontos é: %.2lf\n", res);

//     return 0;
// }
