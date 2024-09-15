#include<iostream>
using namespace std;
void naturalPrint(int n);
void reverseNumber(int n){
    if(n==0)
    return;
    int remainder=n%10;
    cout<<remainder<<" ";
    // remainder=remainder/10;
    reverseNumber(n/10);
}

int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(j>=i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    
}

void naturalPrint(int n){
    if(n==0)
    return;
   
    naturalPrint(n-1);
    cout<<n*n<<" "; 
}