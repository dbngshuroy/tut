#include"stdio.h"
int sum(int i,int n)
{
if(n==1)
return i;
else
return i+sum(i+3,n-1);
}
main()
{
printf("%d",sum(1,4));
}
