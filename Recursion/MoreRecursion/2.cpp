#include<iostream>
using namespace std;
int Sum(int n){
    if(n==1){
        return 1;
    }
     return 2*n-1+Sum(n-1);
}
int main()
{
    cout<<Sum(10);
    return 0;
}