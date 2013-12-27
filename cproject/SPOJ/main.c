#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T,n,G,step=0;//no of test case,order of matrix,no of Gold coin
    int i,j;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        step = 0;
        scanf("%d%d",&n,&G);
        int row[G],column[G];
        for(j = 0;j<G;j++)
        {
            scanf("%d",&row[j]);

        }
        for(j = 0;j<G;j++)
        {
            scanf("%d",&column[j]);
        }
        for(j = 0;j<G;j++)
        {
                step += (row[j]<=n/2?(row[j]-1):(n-row[j]))+ (column[j]<=n/2?(column[j]-1):(n-column[j]));

        }
        printf("%d\n",step);
    }
    return 0;
}

