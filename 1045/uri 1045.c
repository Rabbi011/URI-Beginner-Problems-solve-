#include<stdio.h>
int main()
{
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);
    if(A>=B+C || B>=A+C || C>=A+B)
        printf("NAO FORMA TRIANGULO\n");
    if(A*A==B*B + C*C || B*B==A*A + C*C || C*C==B*B + A*A)
        printf("TRIANGULO RETANGULO\n");
   if(A*A>B*B+C*C || B*B>A*A+C*C || C*C>B*B+A*A)
        printf("TRIANGULO OBTUSANGULO\n");

  if(A*A<B*B+C*C || B*B<A*A+C*C || C*C<B*B+A*A)
        printf("TRIANGULO ACUTANGULO\n");
    if(A==B==C)
        printf("TRIANGULO EQUILATERO\n");
 else
        printf("TRIANGULO ISOSCELES\n");
    return 0;
}
