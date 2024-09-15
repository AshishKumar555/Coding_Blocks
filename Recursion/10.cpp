#include<iostream>
using namespace std;
void reverse(int n){
    if(n>0) {
      int rem=n%10;
    cout<<rem;
    reverse( n/10);

    }
    
}
int main(){
    reverse(54321);
}