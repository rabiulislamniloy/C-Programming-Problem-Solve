#include<stdio.h>

int main()
{
    int a,b,c,m,n;
    scanf("%d%d",&a,&b);
  m=(b*(b+1)/2);
  c=a-1;
  n=m-(c*(c+1)/2);
  printf("%d\n",n);
 return 0;
}
