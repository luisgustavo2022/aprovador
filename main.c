#include <stdio.h>

int main(void) {
float nota1, nota2, media;

  printf("digite a sua primeira nota: ");
  scanf ("%f", &nota1);
  printf("digite a sua primeira nota: ");
  scanf ("%f", &nota2);

  media = (nota1+nota2)/2;
  printf("%.2f\n", media);

  if (media>=7){
    printf("aprovado\n");
    }
  else{
    printf("reprovado\n");
  }
  return 0;

}
