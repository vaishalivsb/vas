#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d\t%d",&a,&b);
c=a;a=b;b=c;
printf("%d%d",a,b);
}
