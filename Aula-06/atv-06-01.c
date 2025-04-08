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
