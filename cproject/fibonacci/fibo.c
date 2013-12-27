#include <stdio.h>

int main() 
{
	int CT,PT,NT,i;
	int number;
	printf("Enter upto which length you want to get the series \n");
	scanf("%d", &number);
	CT = 1;
	PT = 1;
	printf("%d %d ",PT,CT);
	for(i = 3; i <= number; i++)
	{
		NT = CT + PT;
		PT = CT;
		CT = NT;
		printf("%d ",NT);
	}


}