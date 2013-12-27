#include <stdio.h>

int main()
{
    long n;
    long coun = 1;
    int prev,curr;
    scanf("%d",&n);
    scanf("%d",&prev);
    n--;
    while(n-- > 0)
    {
        scanf("%d",&curr);
        if(curr != prev)
        {
            coun++;
            prev = curr;
        }


    }
    printf("%d",coun);
    return 0;



}
