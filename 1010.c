#include<stdio.h>

int main()
{
    int p1,p2,p3,p4;
    double a,b,c,d, value;
    scanf("%d%d%lf",&p1,&p2,&a);
    scanf("%d%d%lf",&p3,&p4,&b);
    c=p2*a;
    d=p4*b;
    value=c+d;
    printf("VALOR A PAGAR: R$ %.2lf\n", value);
    return 0;
}