#include <stdio.h>

/*int main() {
int num;
scanf("%d",&num);
while(num != 42)

    {

        printf("%d\n",num);
        scanf("%d",&num);
    }
return 0;
}
*/

int main()
{
    unsigned long int number,length,i;
    scanf("%lu",&length);
    for(i=1;i<=length;i++){
    scanf("%lu",&number);
    unsigned long int sum=0;
    while(number != 0)
    {
        number= number/5;
        sum = sum + number;
    }
    printf("%lu\n",sum);
    }
    return 0;
}

