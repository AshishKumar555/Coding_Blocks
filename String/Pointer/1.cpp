#include<iostream>
using namespace std;
void swap(int *p,int *q){
     int temp=0;
     temp=*p;  
     *p=*q;
     *q=temp;
     cout<<"*p"<<*p<< "*q"<<q;
}
int main(){
 int a=5, b=10;

 swap(&a,&b);
 cout<<"a => "<<a<<" b => "<<b<<endl;
    return 0;
}