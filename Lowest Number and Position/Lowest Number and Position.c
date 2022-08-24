#include<stdio.h>
int main()
{
    int N[1000],i,count=0,x;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&N[i]);
    }
    int min =N[0];
    for(i=1;i<x;i++)
    {
        if(min>N[i])
        {
            min=N[i];

        }

    }
    printf("Menor valor: %d\n",min);
    for(i=0;i<x;i++)
    {
        if(min == N[i])
        {
            count = i;
            break;

        }
    }
    printf("Posicao: %d\n",count);
    return 0;
}
