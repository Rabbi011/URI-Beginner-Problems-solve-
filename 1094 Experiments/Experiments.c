#include<stdio.h>
int main()
{
    int a,n,i,coelhos=0,ratos=0,sapos=0,total;
    double coelhos_per, ratos_per, sapos_per;
    char ch;
    scanf("%d",&a);
    for(i = 1 ; i <= a ; i++){

        scanf("%d %c",&n, &ch);
    if(ch == 'C'){
        coelhos = coelhos + n;
    }
    else if(ch == 'R'){
        ratos = ratos + n;
    }
    else{
        sapos = sapos + n;
    }

}
 total = coelhos + ratos + sapos;

   coelhos_per = ((double)coelhos / total) * 100.00;
   ratos_per = ((double)ratos / total) * 100.00;
   sapos_per = ((double)sapos / total) * 100.00;

   printf("Total: %d cobaias\n",total);
   printf("Total de coelhos: %d\n",coelhos);
    printf("Total de ratos: %d\n",ratos);
     printf("Total de sapos: %d\n",sapos);
      printf("Percentual de coelhos: %.2lf %%\n",coelhos_per);
      printf("Percentual de ratos: %.2lf %%\n",ratos_per);
       printf("Percentual de sapos: %.2lf %%\n",sapos_per);


   return 0;


}
