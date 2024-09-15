#include<iostream>
using namespace std;
int NaturalReverse(int n){
    if(n>0){
        
        NaturalReverse(n-1);
        cout<<2*n-1<<endl;
        
    }
    
}
int main()
{
    NaturalReverse(10);
    return 0;
}