#include<stdio.h>
int main()
{
    float A,B,C,h,p;
    scanf("%f %f %f",&A,&B,&C);
    if(A<B+C &&B<A+C && C<A+B)
    {

        printf("Perimetro = %.1f\n",p = (A+B+C));
    }
    else
    {

        printf("Area = %.1f\n",h = ((A+B)/2.0) *C);
    }
    return 0;
}
