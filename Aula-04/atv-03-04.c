// Dados os coeficientes (a≠0, b e c) de uma equaçao do 2o grau, calcule e informe suas raizes reais, usando a fórmula de Báskara a seguir:

#include <stdio.h>
#include <math.h> // Para usar a funçao sqrt()

int main()
{
  // Declaraçao das variáveis
  float a, b, c, delta, raiz1, raiz2;

  // Solicita ao usuário para inserir os coeficientes a, b e c
  printf("Digite o valor de a (diferente de 0): ");
  scanf("%f", &a);
  printf("Digite o valor de b: ");
  scanf("%f", &b);
  printf("Digite o valor de c: ");
  scanf("%f", &c);

  // Verifica se 'a' e diferente de 0, caso contrário, nao e uma equaçao do 2o grau
  if (a == 0)
  {
    printf("O coeficiente 'a' nao pode ser igual a 0.\n");
    return 0;
  }

  // Calcula delta
  delta = b * b - 4 * a * c;

  // Verifica o valor de delta para determinar o numero de raizes reais
  if (delta > 0)
  {
    // Duas raizes reais
    raiz1 = (-b + sqrt(delta)) / (2 * a);
    raiz2 = (-b - sqrt(delta)) / (2 * a);
    printf("As raizes reais sao: %.2f e %.2f\n", raiz1, raiz2);
  }
  else if (delta == 0)
  {
    // Uma raiz real
    raiz1 = -b / (2 * a);
    printf("A raiz real e: %.2f\n", raiz1);
  }
  else
  {
    // Nenhuma raiz real
    printf("Nao existem raizes reais.\n");
  }

  return 0;
}