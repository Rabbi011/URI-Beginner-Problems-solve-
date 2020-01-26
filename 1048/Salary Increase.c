#include<stdio.h>
int main()
{
    float n,a,b;
    int c;
    scanf("%f",&n);
    if(n>=0 && n<=400)
    {
        a=(n*15)/100;
        b=n+a;
        c=15;
        printf("Novo salario: %.2f\n",b);
        printf("Reajuste ganho: %.2f\n",a);
        printf("Em percentual: %d %%\n",c);
    }
  else if(n>400.01 && n<=800)
    {
        a=(n*12)/100;
        b=n+a;
        c=12;
        printf("Novo salario: %.2f\n",b);
        printf("Reajuste ganho: %.2f\n",a);
        printf("Em percentual: %d %%\n",c);
    }
    else if(n>800.01 && n<=1200)
    {
        a=(n*10)/100;
        b=n+a;
        c=10;
        printf("Novo salario: %.2f\n",b);
        printf("Reajuste ganho: %.2f\n",a);
        printf("Em percentual: %d %%\n",c);
    }
    else if(n>1200.01 && n<=2000)
    {
        a=(n*7)/100;
        b=n+a;
        c=7;
        printf("Novo salario: %.2f\n",b);
        printf("Reajuste ganho: %.2f\n",a);
        printf("Em percentual: %d %%\n",c);
    }
    else if(n>2000)
    {
        a=(n*4)/100;
        b=n+a;
        c=4;
        printf("Novo salario: %.2f\n",b);
        printf("Reajuste ganho: %.2f\n",a);
        printf("Em percentual: %d %%\n",c);
    }
    return 0;
}
