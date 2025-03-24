// Escreva um programa em C que leia a quantidade de faltas de um aluno e sua média e informe seu conceito final, sendo:
// Faltas > 5 🡺 F
// Faltas <= 5 e Média <6 🡺 C
// Faltas <= 5 e 6 <= Média < 7.5 🡺 B
// Faltas <= 5 e 7.5 <= Média < 9 🡺 A
// Faltas <= 5 e Média >= 9 🡺 E

#include <stdio.h>

int main()
{
  int faltas;
  float media;

  // Solicita ao usuário para inserir a quantidade de faltas e a média
  printf("Digite a quantidade de faltas: ");
  scanf("%d", &faltas);

  printf("Digite a media do aluno: ");
  scanf("%f", &media);

  // Verifica o conceito final
  if (faltas > 5)
  {
    printf("Conceito: F\n");
  }
  else if (faltas <= 5 && media < 6)
  {
    printf("Conceito: C\n");
  }
  else if (faltas <= 5 && media >= 6 && media < 7.5)
  {
    printf("Conceito: B\n");
  }
  else if (faltas <= 5 && media >= 7.5 && media < 9)
  {
    printf("Conceito: A\n");
  }
  else if (faltas <= 5 && media >= 9)
  {
    printf("Conceito: E\n");
  }

  return 0;
}