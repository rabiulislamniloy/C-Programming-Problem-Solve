#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,g;
    scanf("%d%d%d",&a,&b,&c);
    g=(a+b+abs(a-b))/2;
    g=(g+c+abs(g-c))/2;
    printf("%d eh o maior\n",g);
    return 0;
}

