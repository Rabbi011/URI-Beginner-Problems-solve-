#include <stdio.h>
int main()
{
    int n, m , i, count=0;
    scanf("%d", &n);
    for(i=0; i<5; i++)
    {
        scanf("%d", &m);
        if(m==n)
          count++;
    }
    printf("%d\n", count);
    return 0;
}
