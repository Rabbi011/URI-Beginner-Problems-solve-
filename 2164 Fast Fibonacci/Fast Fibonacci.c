#include <stdio.h>

int main()
{
    double n, x, y, cal;
    scanf("%lf", &n);
    x = (1 + sqrt(5))/2.0;
    y = (1 - sqrt(5))/2.0;
    cal = (pow(x,n) - pow(y,n))/sqrt(5);
    printf("%.1lf\n", cal);
    return 0;
}
