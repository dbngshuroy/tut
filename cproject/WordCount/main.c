#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
#define MAX_WORD 100
#define MAX_LETTER 100


char newWord(char s[]);
struct node *addTree(struct node *p,char *w);
struct node *memNode(void);
char *strcopy(char *s);
void printcount( struct node *r);

struct node
{
        char *word;
        int n;
        struct node *left;
        struct node *right;
};

int main()
{
    struct node *root;
    root = NULL;
    char wordBank[MAX_WORD][MAX_LETTER];
    int i = 0;
    while(newWord(wordBank[i])!= '\n')
        root = addTree(root,wordBank[i++]);
    root = addTree(root,wordBank[i++]);
    printcount(root);



    return 0;

}
void printcount( struct node *r)
{

    printf("%s :%d\n",r->word,r->n);
    if(r->left!=NULL)
        printcount(r->left);
    if(r->right!=NULL)
        printcount(r->right);
    return;
}
struct node *addTree(struct node *p,char *w)
{
    if(*w != '\0')
    {
    int cond = 0;
    if (p == NULL)
    {
        p = memNode();
        p->word = strcopy(w);
        p->n = 1;
        p->left = NULL;
        p->right = NULL;

    }else if((cond = strcmp(p->word,w))==0)
        p->n++;
    else if(cond <0)
    {
        p->left = addTree(p->left,w);
    }else
    {
        p->right = addTree(p->right,w);
    }
    }
    return p;

}
struct node *memNode(void)
{
   return (struct node *) malloc(sizeof(struct node));
}
char *strcopy(char *s)
{
    char *p;
    if(*s == '\0')
        p = NULL;
    else
        p = (char *)malloc(sizeof((strlen(s)+1)));
    if (p != NULL)
        strcpy(p,s);
    return p;

}


char newWord(char s[])
{
    char c;
    int i = 0;
    while((c = getchar())!= '\n'
          && c != ' '
          && c != '\t'
          && c != '.'
          && c != ','
          && i <= MAX_LETTER)
        s[i++] = c;
    s[i]='\0';
    return c;
}
