#include <stdio.h>
#define BUFFER_LIMIT 1000

/*
1 4 5 7
*/

int main()
{
    int _buffer[BUFFER_LIMIT];
    int *pbuffer;
    pbuffer = _buffer;
    int *p;
    int min_diff=6000000;
    int n,i=0;
     //printf("%d %d %d\n",pbuffer,p,&_buffer[0]);
    do
    {
        scanf("%d",pbuffer);
        pbuffer++;

    }
    while(*(pbuffer-1)!=-1);
 //printf("%d %d %d\n",pbuffer,p,&_buffer[0]);
    while(pbuffer >=_buffer)
    {

        pbuffer--;
        p = pbuffer-1;
        //printf("%d %d %d\n",pbuffer,p,_buffer);
        while(p >=_buffer)
        {
            //printf("fuck here");
            if(min_diff > (*p>*pbuffer?*p-*pbuffer:*pbuffer-*p))
            {
                min_diff = *p>*pbuffer?*p-*pbuffer:*pbuffer-*p;
            }
            p--;
        }
    }
    printf("%d",min_diff);
return 0;
}
