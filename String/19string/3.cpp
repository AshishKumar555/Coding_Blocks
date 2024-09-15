#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char a[5][20],search[20];
    printf("Enter 5 city names\n");
    for(i=0;i<5;i++)
    gets(a[i]);
    printf("Enter the name you want to serach\n");
    gets(search);
    for(i=0;i<5;i++)
    {
        if(strcmp(a[i],search)==0)
        {
        printf("string is found : %s",a[i]);
        break ;
        }
      
    }
    
            printf("String is not find :\n");
        
    
    return 0;
}