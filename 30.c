#include<stdio.h>
int main()
{
int a,b,c,d,hr,minutes;
scanf("%d%d%d%d",&a,&b,&c,&d);
hr=a-c;
minutes=b-d;
printf("%d\t%d",hr,minutes);
return 0;
}
