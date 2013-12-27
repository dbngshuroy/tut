#include <stdio.h>
int main()
{
    int x,y,N,i,j,sum;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        sum = 0;
        scanf("%d%d",&x,&y);
        if(x==y)
        {
            for(j=0;j<x;j++)
            {
                sum += (j%2)?3:1;
            }
            printf("%d\n",sum);
        }else if(x == (y+2))
        {
            sum = 2;
            for(j=0;j<y;j++)
            {
                sum += (j%2)?3:1;
            }
            printf("%d\n",sum);
        }
        else
        {
            printf("No Number\n");
        }


    }
}
