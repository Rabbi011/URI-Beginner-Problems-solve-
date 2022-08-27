#include <stdio.h>
int main()
{
    int a,i,c;
    scanf("%d", &a);
    for(i=1; i<=a; i++)
    {
        scanf("%d", &c);
        if(c%2==0)
            printf("0\n");
        else
            printf("1\n");
    }
    return 0;
}
