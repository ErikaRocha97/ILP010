// Codifique a função fat(n), que devolve o fatorial de um inteiro n.

int fat (int n) {
    int f = 1;
    if ( n == 0 ) 
        return 1;
    else {
        while ( n > 0 ) 
            f*=n--;
        return f;
    }
}

#include <stdio.h>

int main()
{
    int n;
    
    printf("Digite um numero para calcular seu fatorial: ");
    scanf("%i", &n);
    printf("\nO fatorial de %i é %i.", n, fat(n));

}