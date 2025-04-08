// Codifique um programa de teste para a rotina max( ).

// double max (double a, double b) {
//   if ( a>b )
//      return a;/* interrompe a função*/
//   return b;
// }

#include <stdio.h>

double max (double a, double b) {
    if (a > b)
        return a;
    return b;
    
}

int main()
{
    printf("%.1lf", max(5,10));

    return 0;
}