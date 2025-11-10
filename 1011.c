#include<stdio.h>

int main()
{
    double R,P,volume;
    P=3.14159;
    scanf("%lf",&R);
    volume=(4/3.0)*P*R*R*R;
    printf("VOLUME = %.3lf\n",volume);
    return 0;
}