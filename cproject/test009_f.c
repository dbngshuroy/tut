#include <stdio.h>
#include <stdlib.h>

struct student
    {
        int sr_no;
        char *name;
        char sec;
        struct student *next;
    };
void print_struct(struct student *s);
int main()
{


    struct student *s1,*s2,*s3;
    s1 = (struct student *)malloc(sizeof(struct student));
    s2 = (struct student *)malloc(sizeof(struct student));
    s3 = (struct student *)malloc(sizeof(struct student));
    s1->sr_no = 123;
    s1->name = "Something";
    s1->sec = 'B';
    s1->next = s2;

    s2->sr_no = 189;
    s2->name = "kjaskjds";
    s2->sec = 'E';
    s2->next=s3;

    s3->sr_no = 121;
    s3->name = "iuwdfcsa";
    s3->sec = 'F';
    s3->next = NULL;
    print_struct(s1);

    return 0;
}

void print_struct(struct student *s)
{
    if(s != NULL)
    {
        printf("%s %d %c \n",s->name,s->sr_no,s->sec);
        print_struct(s->next);
    }
    return;
}

