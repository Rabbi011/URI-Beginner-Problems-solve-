#include <stdio.h>

int main()
{
    double n, div, mul;
    scanf("%lf", &n);
    div = n/log(n);
    mul = (1.25506)*(n/log(n));
    printf("%.1lf %.1lf\n", div, mul);
    return 0;
}
