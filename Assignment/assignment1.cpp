#include<iostream>
using namespace std;

int length(char name[]){
    int i=0;
    for(i=0;name[i];i++){
      cout<<name[i]<<"---"<<i<<endl;
    }
    return i-1;
}

void reverseString(char string[],int length){
    int s=0,e=length;
    while(s<e){
        char temp;
        temp=string[s];
        string[s]=string[e];
        string[e]=temp;
        s++;
        e--;
    }
}

void printString(char string[]){
    for(int i=0;string[i];i++){
        cout<<string[i];
    }
}

int main(){
    char str[20];
    cout<<"Enter a string :";
    fgets(str,20,stdin);
    // cout<<str;
    printString(str);
    
    int strl=length(str);
    cout<<strl;

    reverseString(str,strl);
    printString(str);
}

