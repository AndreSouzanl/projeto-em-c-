#include <stdio.h>
#include <math.h>

int main(void) {

   double raio,area, perimetro;

  printf("Insira o raio do circulo: ");
  scanf("%lf", &raio);

  area = M_PI * raio * raio;  
  perimetro = 2 * M_PI * raio;

  printf("Área do círculo: %.2lf\n", area);
  printf("Perímetro do círculo: %.2lf\n", perimetro);


  
  return 0;
}