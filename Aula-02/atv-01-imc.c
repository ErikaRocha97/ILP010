// Elabore um programa em C que leia peso e altura de um indivíduo, calcule e exiba seu índice de massa corpórea (IMC).
// Sendo o IMC =  peso/altura2

#include <stdio.h>
#include <math.h>

int main()
{
  float imc, altura, peso;

  printf("Digite um peso e uma altura para obter o IMC correspondente.\n\n");

  printf("Digite a altura: ");
  scanf("%f", &altura);

  printf("Digite o peso: ");
  scanf("%f", &peso);

  imc = peso / pow(altura, 2);

  printf("\nValor do IMC obtido: %.2f.\n\n", imc);

  return 0;
}