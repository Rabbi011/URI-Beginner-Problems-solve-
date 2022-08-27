#include<stdio.h>
int main()
{
    int a[10],i,even=0,odd=0,pos=0,neg=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {

        if(a[i]%2==0)
        {
            even++;
        }

        if(a[i]%2!=0)
        {
            odd++;
        }

        if(a[i]>0)
        {
            pos++;
        }

        if(a[i]<0)
        {
            neg++;
        }
    }
        printf("%d valor(es) par(es)\n",even);
        printf("%d valor(es) impar(es)\n",odd);
        printf("%d valor(es) positivo(s)\n",pos);
        printf("%d valor(es) negativo(s)\n",neg);
        return 0;

}
