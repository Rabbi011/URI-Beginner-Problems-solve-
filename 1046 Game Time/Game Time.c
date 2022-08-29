#include <stdio.h>
int main(){
    int first, last, temp;
    scanf("%d %d", &first, &last);
    int def = 24 - first;
    int add = def + last;
    if(add <= 24){
        printf("O JOGO DUROU %d HORA(S)\n", add);
    }
    else if(add >= 24){
        temp = add -24;
        printf("O JOGO DUROU %d HORA(S)\n", temp);
    }
    return 0;
}
