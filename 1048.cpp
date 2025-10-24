#include<stdio.h>

int main ()
{
    double s;
    scanf("%lf",&s);

    if(0<=s&&s<=400)
    {
       printf("Novo salario: %.2lf\n",s+((s/100)*15));
       printf("Reajuste ganho: %.2lf\n",s/100*15);
       printf("Em percentual: 15 %%\n");
    }
    else if(400<s&&s<=800)
    {

       printf("Novo salario: %.2lf\n",s+((s/100)*12));
       printf("Reajuste ganho: %.2lf\n",s/100*12);
       printf("Em percentual: 12 %%\n");
    }
    else if(800<s&&s<=1200)
    {
       printf("Novo salario: %.2lf\n",s+((s/100)*10));
       printf("Reajuste ganho: %.2lf\n",s/100*10);
       printf("Em percentual: 10 %%\n");
    }
   else if(1200<s&&s<=2000)
    {
       printf("Novo salario: %.2lf\n",s+((s/100)*7));
       printf("Reajuste ganho: %.2lf\n",s/100*7);
       printf("Em percentual: 7 %%\n");
    }
   else if(2000<s)
   {
       printf("Novo salario: %.2lf\n",s+((s/100)*4));
       printf("Reajuste ganho: %.2lf\n",s/100*4);
       printf("Em percentual: 4 %%\n");
   }
    return 0;
}
