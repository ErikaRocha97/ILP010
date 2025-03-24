// Dado um inteiro n, informe se n é par ou ímpar usando o operador condicional ternário.
// Sintaxe: condição ? valor_se_verdadeiro : valor_se_falso

#include <stdio.h>

int main()
{
  int n;

  // Solicita ao usuário para inserir um número
  printf("Digite um número inteiro: ");
  scanf("%d", &n);

  // Usa o operador condicional ternário para verificar se o número é par ou ímpar
  (n % 2 == 0) ? printf("%d é par.\n", n) : printf("%d é ímpar.\n", n);

  return 0;
}