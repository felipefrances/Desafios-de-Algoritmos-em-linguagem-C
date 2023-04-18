#include <stdio.h>
#include <string.h>

int main() {

  int senha;
  char quasesenha;
  senha = 985;
 
  printf("Digite a senha secreta com apenas 3 digitos: ");
  scanf("%d", &senha);

  while (senha != 985) {
        printf("digite a senha secreta com apenas 3 digitos: ");
    scanf("%d", &senha);
  }

  printf("Parabéns.\n Você ganhou o direito de fazer um BOQUETE no seu marido hoje!! ====D\n");

  return 0;
}