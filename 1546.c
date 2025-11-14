#include<stdio.h>
int main ()
{
    int i,n,j,k,t;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&k);

        for(j=1;j<=k;j++)
        {
            scanf("%d",&t);
        if(t==1)
        printf("Rolien\n");

        else if(t==2)
        printf("Naej\n");

         else if(t==3)
        printf("Elehcim\n");

        else if (t==4)
        printf("Odranoel\n");

        }

    }

    return 0;
}
