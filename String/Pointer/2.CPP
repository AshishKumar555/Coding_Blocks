#include<iostream>
using namespace std;
#include<string.h>
// void swap(char *p,char *q){
//      char temp[20]="";
//      temp=*p;  
//      *p=*q;
//      *q=temp;
// }
void swap2(char str1[],char str2[]){
     char temp[20]="";
     strcpy(temp,str1);
     strcpy(str1,str2);
     strcpy(str2,temp);
}
int main(){
 char str1[10]="Ashish";
 char str2[20]="Manish";

 swap2(str1,str2);
 cout<<"a => "<<str1<<" b => "<<str2<<endl;
    return 0;
}