#include<iostream>
using namespace std;

int length(char str[]){
    int length=0;
    for(int i=0;i<=str[i];i++){
       length++;
       
    }
    return length-1; 
}
void reverse(char str[]){
    int start=0;
    int count=length(str);
    int end=count-1;
    while(start<end){

        char temp;
        temp=str[end];
        str[end]=str[start];
        str[start]=temp;

        start++;
        end--;
    }
}
void print(char str[]){
    for(int i=0;i<=str[i];i++){
        cout<<str[i];
    }
}
int main(){
     //char str[]="ashish";
    char str[50];
    cout<<"Enter a string"<<endl;
    fgets(str,50,stdin);
    int count=length(str);
    cout<<"length is => "<<count<<endl;

    reverse(str);
    print(str);
    return 0;
}