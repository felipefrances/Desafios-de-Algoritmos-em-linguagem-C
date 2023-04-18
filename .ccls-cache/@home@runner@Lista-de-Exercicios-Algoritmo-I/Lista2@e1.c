#include <stdio.h>

int main() {

  char op;
  float x, y, r;

  printf("Digite um símbolo matemático ( +, -, *, /): ");
  scanf("%c", &op);

  printf("Digite dois números reais: ");
  scanf("%f, %f", &x, &y);

  if (op == '+')  // se existe apenas um comando em if 
    r = x + y;              //não há necessidade do uso  
    else if (op == '-')  //de {} (a não ser por uma boa 
    r = x - y;                 //prática).
    else if (op == '*')
    r = x * y;
    else
    r = x / y;
    

  printf("resultado: %f", r);

  return 0;
}