#include <stdio.h>
int main()
{
    double n, add = 0.0;
    scanf("%lf", &n);
    while(n--)
    {
        add+=6.0;
        add = 1.0/add;
    }
    add += 3.0;
    printf("%.10lf\n", add);
    return 0;
}
