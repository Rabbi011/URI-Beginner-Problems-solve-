#include <stdio.h>
int main()
{
    int n, tmp = 0, RPM, count = 0, cal = 0, count1 = 1;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &RPM);
        count++;
        if(RPM<tmp && count1==1)
        {
            cal = count;
            count1 = 0;
        }
        tmp = RPM;
    }
    printf("%d\n", cal);
    return 0;
}
