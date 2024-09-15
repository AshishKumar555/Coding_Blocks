#include<iostream>
using namespace std;
void swap(int *p,int *b){
    int temp=0;
        temp=*p;
        *p=*b;
        *b=temp;
}
int main(){
    int a=10;
    int b=20;
    int *x=;
    swap(&a,&b);
    cout<<a<<"  "<<b<<"  ";

    return 0;
}