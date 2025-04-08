// Codifique a funcao rodizio(placa), que recebe um numero ente 0 e 9 que representa o ultimo digito da placa de um veiculo e
// exibe na tela o dia em ele esta no rodizio. Faca um programa para testar sua rotina.

#include <stdio.h>

void rodizio(int placa) {
	
	if ((placa >= 0) && (placa <= 9))
	    printf("Dia de rodizio: ");

	switch(placa) {
	case (1):
	case (2):
		printf("Segunda-feira.");
		break;
	case (3):
	case (4):
		printf("Terca-feira.");
		break;
	case (5):
	case (6):
		printf("Quarta-feira.");
		break;
	case (7):
	case (8):
		printf("Quinta-feira.");
		break;
	case (9):
	case (0):
		printf("Sexta-feira.");
		break;
	default:
		printf("Valor invalido.");
		break;
	}
	
}

int main()
{
	int p;

	printf("\nUltimo digito da placa do veiculo: ");
	scanf("%d", &p);

	rodizio(p);
}