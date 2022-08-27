#include <stdio.h>
int main()
{
    int i,b,c,d,e;
    char ara[10];
    scanf("%d", &i);
    for(b=1; b<=i; b++)
    {
        scanf("%s %d",ara,&c);
        if(ara[0]=='T' && ara[1]=='h' && ara[2]=='o' && ara[3]=='r')
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
