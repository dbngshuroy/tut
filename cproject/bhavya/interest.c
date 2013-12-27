#include<stdio.h>
#include<math.h>
int main()
{
int i;
float x;
x=5500;
for(i=1;i<=10;i++)
{
x=(11*x)/10;
printf("%d",i);
printf("\t");
printf("%f \n",x);
}
return 0;
}