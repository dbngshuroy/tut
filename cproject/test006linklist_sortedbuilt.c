#include <stdio.h>
#include <stdlib.h>

struct linked_list
{
    float num;
    struct linked_list *next;
};

typedef struct linked_list node;

void create_node(node *p,float f);
int print(node *p);

node *prev_p;

int main()
{
    node *head;

    head = (node *)malloc(sizeof(node));
    head->num = 0;
    head->next = NULL;
    float f = 0;
    while(1)
    {
        scanf("%f",&f);
        if (f == -1)
            break;
        if (head == NULL)
            printf("GO TO HELL ");
        create_node(head,f);

    }
    int n = print(head);
    printf("\n %d items sorted",n);
    return 0;

}

void create_node(node *p,float f)
{
    //static node *prev_p;
    if(p->next != NULL && f > p->num )
    {
        //printf("FUCK OFF");
        prev_p = p;
        create_node(p->next,f);

    }else if(p->next == NULL)
    {
        //printf("FUCK");

        if(p == NULL)
            printf("MALLOC SUCKS");

        p->num = f;
        p->next = (node *)malloc(sizeof(node));
        p->next->next = NULL;

    }
    else
    {
        node *new_p;
        new_p = (node *)malloc(sizeof(node));
        new_p->num = f;
        new_p->next =p;
        prev_p->next = new_p;
    }


}

int print(node *p)
{
    static int coun = 0;
    if(p->next != NULL)
    {
       printf("%.4f ",p->num);
       print(p->next);
       coun++;

    }
    return coun;

}
