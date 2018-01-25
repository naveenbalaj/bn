#include<stdio.h>
int main()
{
int min,val=60,h,m;
printf("enter minutes");
scanf("%d",&min);
if(min>val)
{h=min/val;
m=min%val;
printf("%d  %d",h,m);
}
else
{
printf("0 %d",min);
}
return 0;
}
