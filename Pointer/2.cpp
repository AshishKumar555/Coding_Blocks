#include<stdio.h>
#include<conio.h>
void swap(char **p,char **q);
int main()
{
    
    char *a[20],*b[20];
    printf("Enter the two string\n");
    gets(a);
    gets(b);
    swap(&a,&b);
    printf("%s %s",a,b);
    return 0;
}
void swap(char **p,char **q)
{
    char *temp;
    temp=*p;
    *p=*q;
    *q=temp;
}