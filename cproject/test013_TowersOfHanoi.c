#include <stdio.h>
enum tower {A='A',B='B',C='C'};
void toh(int n,enum tower x,enum tower y,enum tower z );
int i = 0;
int main()
{
    printf("Enter the no of disk in first tower: ");
    int n;
    scanf("%d",&n);
    int j;
    //for(j = 1;j<=31;j++)
   // {
               toh(n,A,B,C);
              // printf("%d disks take %d steps\n",j,i);
               i=0;
    //}

    printf("The last work is for you");
    return 0;
}

void toh(int n,enum tower x,enum tower y,enum tower z )
{
    //static i = 0;
    if(n)
    {
        toh(n-1,x,z,y);
        i++;
        printf("Move top piece from tower %c to tower %c\n",x,y);
        toh(n-1,z,y,x);
    }
}
