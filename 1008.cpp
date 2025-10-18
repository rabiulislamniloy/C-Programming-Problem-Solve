#include<stdio.h>

int main()
{
    int N;
    float H,S,M;
    scanf("%d%f%f",&N,&H,&M);
    S=H*M;
    printf("NUMBER = %d\n",N);
    printf("SALARY = U$ %.2f\n",S);
    return 0;
}