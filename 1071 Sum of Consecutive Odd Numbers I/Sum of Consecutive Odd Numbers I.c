#include<stdio.h>
int main()
{
    int x,y,odd=0,i,od=0;
    scanf("%d %d",&x,&y);
    for(i=y;i<x;i++)
    {
        if(i%2 !=0)
            {
                odd++;

               od=od+i;
            }
    }
    printf("%d\n",od);
    return 0;
}
