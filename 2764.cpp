#include<stdio.h>
int main()
{
char d1,d2,b1,m1,m2,b2,y1,y2;
scanf("%c%c%c%c%c%c%c%c",&d1,&d2,&b1,&m1,&m2,&b2,&y1,&y2);

printf("%c%c%c%c%c%c%c%c\n",m1,m2,b1,d1,d2,b2,y1,y2);
printf("%c%c%c%c%c%c%c%c\n",y1,y2,b1,m1,m2,b2,d1,d2);
printf("%c%c-%c%c-%c%c\n",d1,d2,m1,m2,y1,y2);
return 0;
}
