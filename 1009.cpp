#include<stdio.h>

int main()
{
    char name[20];
    double s,v,T;
    scanf("%s%lf%lf",name,&s,&v);
    T=v*0.15+s;
    printf("TOTAL = R$ %.2lf\n",T);
    return 0;
}