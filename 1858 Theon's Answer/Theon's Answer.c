#include <stdio.h>
int main()
{
    int n,i,m,j,p=1;
    scanf("%d", &n);
    int ara[n];
    for(i=0; i<n; i++)
        scanf("%d", &ara[i]);
    m = ara[0];
    for(j=0; j<n; ++j)
    {
        if(ara[j]< m)
        {
            m=ara[j];
            p=j+1;
        }

    }
    printf("%d\n", p);
    return 0;
}
