// Escreva um programa em C que leia o raio de um círculo, calcule sua área e perímetro e imprima na tela.
// Defina uma constante PI = 3,1415
// #include ...
// #define PI 3.1415

#include <stdio.h>
#include <math.h>
#define PI 3.1415

int main()
{
  float r, a, p;

  printf("Digite o raio do circulo para calcular sua area e perimetro.\n\n");

  printf("Raio do circulo: ");
  scanf("%f", &r);

  a = PI * pow(r, 2);

  p = 2 * PI * r;

  printf("\nArea do circulo: %.2f\n", a);

  printf("\nPerimetro do circulo: %.2f\n\n", p);

  return 0;
}