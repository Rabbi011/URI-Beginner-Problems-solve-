#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char ch[600];

    gets(ch);
    if(strlen(ch)>80)
        printf("NO\n");

      else
       printf("YES\n");
       return 0;
}
