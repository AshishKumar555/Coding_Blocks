#include<iostream>
using namespace std;
int main(){
    char count='A';
    
    for(int i=1;i<=7;i++){
        for(int j=1;j<=13;j++){
            if(j<=8-i || j>5+i){
                cout<<count;
                j<7?count++:count--;
            }
            else{
                if(j==7){
                    count--;
                }
                cout<<" ";
            }
        }
        cout<<endl;
        count='A';
    }
}