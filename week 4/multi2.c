//the maximum of three numbers using conditional operator
#include<stdio.h>
int main()
{
int a,b,c,d;
scanf("%d%d%d",&a,&b,&c);

d=((a>b)&&(a>c))?printf("a is big"):((b>a)&&(b>c))?printf("b is big"):printf("c is big");

printf("%d",d);


}
