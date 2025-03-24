// Dado um caracter, informe seu código ASCII em octal, decimal e hexadecimal.

#include <stdio.h>

int main()
{
  char caracter;

  printf("Digite um caractere para obter seu valor em: octal, decimal e hexadecimal.\n\n");
  printf("Digite um caractere: ");
  scanf("%c", &caracter);

  printf("\nCodigo ASCII de '%c' em:\n", caracter);
  printf("\nOctal: %o\n", caracter);
  printf("Decimal: %d\n", caracter);
  printf("Hexadecimal: %X\n\n", caracter);

  return 0;
}