#include <stdio.h>
#define MAXSIZE 100
char buff[MAXSIZE];
char *restrict[3] ={"FUCK","DICK","PUSSI"};
int i=0;
char add_word();
void addc_buff(char c,char *s);
void buff_flush();
void check_word();
void replace_buff();
int main()
{
    while(add_word()!= '\n');

    return 0;


}

char add_word()
{
    char c;
    //int n = 0;
    while((c=getchar()) != ' ' || c != '\n' || c != '\t' || c != '.'||c!= ','||c!=-1)
    {
      addc_buff(c,buff);
      //n++;
    }
    check_word();
    return c;
}
void addc_buff(char c,char *s)
{
    s[i++] = c;
    s[i] = '\0';

}
void buff_flush()
{
    int j = 0;
    while(buff[j] != '\0' )
        putchar(buff[j++]);
    i = 0;
}
void check_word()
{
    int j =0,k=0;
    while(j++ <=3)
        while(buff[k] != '\0')
            if(buff[k] != restrict[j][k++])
                break;
    if(j == 4)
        buff_flush();
    else
        replace_buff();

}
void replace_buff()
{
    int k = 0;
    while (buff[k]!='\0')
        buff[k++] ='#';
    buff_flush();


}


