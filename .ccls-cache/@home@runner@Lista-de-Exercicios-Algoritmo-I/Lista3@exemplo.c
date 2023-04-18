#include <stdio.h>

int ex (){
  float MA;
  printf("Digite a média do aluno: ");
  scanf("%f",&MA);
  if(MA>= 7.0){
    printf("Parabéns, o aluno foi Aprovado");}
  else{
    printf("Se fudeu, o aluno foi reprovado");
  }
return 0;
}