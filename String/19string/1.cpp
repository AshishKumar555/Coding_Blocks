#include<iostream>
using namespace std;
void countVowel(){
     int vowel=0,i,j;
     char str[5][20];
     cout<<"enter the five string "<<endl;
     for(int i=0;i<=4;i++){
        fgets(str[i],20,stdin);
     }
     for( i=0;i<=4;i++){
        for( j=0;str[i][j]!='\0';j++){
                 if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u'){
                    vowel++;
                 }
                 
        }
        cout<<str[i]<<" =>"<<vowel<<endl;
        vowel=0;
     }
}
int main(){
  countVowel();

    return 0;
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int i,j,vowel=0;
//     char a[5][20];
//     printf("Enter the 5 strings\n");
//     for(i=0;i<5;i++)
//     fgets(a[i],10,stdin);
//     for(i=0;i<5;i++)
//     {
//         for(j=0;a[i][j]!='\0';j++)
//         {
//             if(a[i][j]=='a'||a[i][j]=='e'||a[i][j]=='i'||a[i][j]=='o'||a[i][j]=='u')
//             vowel++;
//         }
//         printf("%s=>%d\n",a[i],vowel);
//         vowel=0;
//     }
//     return 0;
// }