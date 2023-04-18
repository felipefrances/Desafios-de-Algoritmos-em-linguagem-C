#include <stdio.h>

int ex (){
  float MA;
  printf("Digite a média do aluno");
  scanf("%f",&MA);
  if(MA>= 7.0){
    printf("Parabéns, você foi Aprovado");}
  else{
    printf("Se fudeu, você foi reprovado");
  }
return 0;
}