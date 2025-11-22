#include<stdio.h>
int main ()
{
    int x,z;
    scanf("%d%d",&x,&z);

    while(z<=x)
    {
        scanf("%d",&z);
    }

    int sum=x;
    int c=1;

    for(int i=x+1;sum<=z;i++)
    {
        sum+=i;
        c++;
    }
    printf("%d",c);
    return 0;
}
