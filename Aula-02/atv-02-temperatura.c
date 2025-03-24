// Faça um programa em Java que leia uma temperatura em Fahrenheit, calcule e exiba seu valor em Celsius.
// Fórmula: C = (F-32) * 5 / 9.

#include <stdio.h>
// #include <math.h>

int main()
{
  float c, f;

  printf("Digite uma temperatura em Fahrenheit para obter seu valor em Celsius.\n\n");

  printf("Temperatura em Fahrenheit: ");
  scanf("%f", &f);

  c = (f - 32) * (5.0 / 9.0);

  printf("\nTemperatura em Celsius: %.2f\n\n", c);

  return 0;
}