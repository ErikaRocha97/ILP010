// Dados ultimo digito da placa de um carro, informe o dia do seu rodizio. Sugestão: utilize switch / case.

#include <stdio.h>

int main()
{
  int d;

  // Solicita ao usuário para inserir o ultimo digito da placa do carro
  printf("Digite o ultimo digito da placa do carro (0-9): ");
  scanf("%d", &d);

  // Verifica o dia do rodizio usando a estrutura switch/case
  switch (d)
  {
  case 0:
  case 1:
    printf("O dia do rodizio e segunda-feira.\n");
    break;
  case 2:
  case 3:
    printf("O dia do rodizio e terça-feira.\n");
    break;
  case 4:
  case 5:
    printf("O dia do rodizio e quarta-feira.\n");
    break;
  case 6:
  case 7:
    printf("O dia do rodizio e quinta-feira.\n");
    break;
  case 8:
  case 9:
    printf("O dia do rodizio e sexta-feira.\n");
    break;
  default:
    printf("Numero inválido! O ultimo digito deve ser entre 0 e 9.\n");
  }

  return 0;
}