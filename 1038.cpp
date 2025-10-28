#include<stdio.h>
int main()
{
    int p,q;
    scanf("%d%d",&p,&q);

    if(p==1)
    {
        printf("Total: R$ %.2lf\n",q*4.00);
    }
    else if(p==2)
    {
        printf("Total: R$ %.2lf\n",q*4.50);
    }
    else if(p==3)
    {
        printf("Total: R$ %.2lf\n",q*5.00);
    }
    else if(p==4)
    {
        printf("Total: R$ %.2lf\n",q*2.00);
    }
    else if(p==5)
    {
        printf("Total: R$ %.2lf\n",q*1.50);
    }
  return 0;
}
