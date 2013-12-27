#include <stdio.h>
#include <math.h>
int main()
{
    unsigned short int T,N,i,j;
    unsigned long sum;
    scanf("%us",&T);


    for(i = 0; i<T;i++)
    {
        sum = 0;
        scanf("%us",&N);
        for(j = 1;j<=N;j++)
        {
            sum += j*pow(2,N-1);
        }
        printf("%d",sum);
    }
return 0;
}
