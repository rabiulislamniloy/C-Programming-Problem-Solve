#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x=0,y=1,z;
    for(int i=0;i<n;i++)
    {
       if(i==0)
       {
           printf("%d",x);
       }
       else if(i==1)
       {
           printf("%d",y);
       }
       else {
          z=x+y;
          printf("%d",z);
          x=y;
          y=z;
       }
    }
        printf("\n");


    return 0;
}
