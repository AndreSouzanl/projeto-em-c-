#include <stdio.h>
#include <locale.h>

int main(void) {

  setlocale(LC_ALL, "Portuguese");

  int idade;

  printf("Digite é a sua idade:");
  scanf("%d", &idade);

  if(idade >= 0 && idade <= 17){
   printf("Essa pessoa é uma criança");
  }
  else if(idade > 17 && idade <= 59){
    printf("Essa pessoa é um adulto");
  }
  else{
    printf("Essa pessoa é um idoso");
  }
  return 0;
}