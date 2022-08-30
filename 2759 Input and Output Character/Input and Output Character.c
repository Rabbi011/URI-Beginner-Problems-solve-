#include<stdio.h>
int main()
{
    char ch[10];
    int i;

    for(i=0;i<4;i++){
        scanf("%c",&ch[i]);
        printf("ch = %c",ch[i]);
    }
    printf("A = %c, B = %c, C = %c",ch[0],ch[1],ch[2]);

}
