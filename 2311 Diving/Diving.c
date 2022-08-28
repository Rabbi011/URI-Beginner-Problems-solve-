#include <stdio.h>

int main()
{
    int t, i, j;
    char name[1000];
    double dif, score;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        double max = -10.00, min = 100.00, cal = 0.00;
        scanf("%s", name);
        scanf("%lf", &dif);
        for(j=1; j<=7; j++)
        {
            scanf("%lf", &score);
            if(score > max) max = score;
            if(score < min) min = score;
            cal += score;
        }
        cal -= (max+min);
        cal *= dif;
        printf("%s %.2lf\n", name, cal);
    }
    return 0;
}
