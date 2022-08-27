#include<stdio.h>
int main()
{
    int n,i,count1=0,count2=0,a[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=10 && a[i]<=20)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    printf("%d in\n",count1);
    printf("%d out\n",count2);
    return 0;

}
