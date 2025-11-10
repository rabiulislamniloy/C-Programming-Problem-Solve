#include<stdio.h>

int main()
{ 
    double h,k;
    double c;
    scanf("%lf%lf",&h,&k);
    c=k/12*h;
    printf("%.3lf\n",c);
    return 0;
}