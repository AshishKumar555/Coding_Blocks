#include<iostream>
using namespace std;
int main(){
    char count='A';
    for(int i=1;i<=4;i++){
        for(int j=1;j<=7;j++){
            if(j>=i && j<=8-i){
                cout<<count;
                j<4?count++:count--;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        count='A';
    }
}