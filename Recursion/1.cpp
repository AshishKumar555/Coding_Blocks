#include<iostream>
using namespace std;
int NaturalNumbers(int n){
    if(n>0){
        NaturalNumbers(n-1);
        cout<<n<<endl;
    }
    
}
int main()
{
    NaturalNumbers(10);
    return 0;
}