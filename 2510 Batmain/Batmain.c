#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,l;
    scanf("%d",&t);
    char str[100];
    for(i = 0;i < t;i++){
        scanf("%s",str);
        l=strlen(str);
        if(l>0 && l<=25)printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
