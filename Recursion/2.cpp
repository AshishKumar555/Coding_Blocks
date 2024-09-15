#include<iostream>
using namespace std;
int NaturalReverse(int n){
    if(n>0){
        cout<<n<<endl;
        NaturalReverse(n-1);
        
    }
    
}
int main()
{
    NaturalReverse(10);
    return 0;
}