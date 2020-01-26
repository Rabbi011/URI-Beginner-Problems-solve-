#include<stdio.h>
int main()
{
    float n[10],Avg,coun=0;
    int i,count=0;
    for(i=0;i<6;i++)
    {
        scanf("%f",&n[i]);
    }
    for(i=0;i<6;i++)
    {
      if(n[i]>0)
      {
        count++;
        coun = coun+n[i];
      }
    }
    Avg = coun/count;
    printf("%d valores positivos\n",count);
    printf("%.1f\n",Avg);

    return 0;

}

