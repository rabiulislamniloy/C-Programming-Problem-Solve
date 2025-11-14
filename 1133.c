#include <stdio.h>
int main()
{
    int i,X,Y;
    scanf("%d%d",&X,&Y);
    int t;
    if(X>Y)
    {
        t=X;
        X=Y;
        Y=t;
    }
    for (i=X+1;i<Y;i++)
    {
        if (i%5==2||i%5==3)
        {
            printf("%d\n",i);
        }
    }


    return 0;
}
