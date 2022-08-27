#include <stdio.h>
int main()
{
    double n, cal = 0.0;
    scanf("%lf", &n);
    while(n--)
    {
        cal+=2.0;
        cal = 1.0/cal;
    }
    cal += 1.0;
    printf("%.10lf\n", cal);
    return 0;
}
