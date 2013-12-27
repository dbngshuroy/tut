#include <stdio.h>

int main() 
{
int x = 214,i;
float a = -7.7,amin =3.0;
printf("%d \n",x);


printf("HELLO THERE!THIS IS CARRAIGE RETURN\n");
printf("%c%-8.2f%3d%0.3s",'A',-1.238,5678,"BENARAS\n");
if(fabs(a) > amin) a = (amin == 3)?fmod(a,amin):fmod(amin,a);
printf("%f",a);
return 0;
}