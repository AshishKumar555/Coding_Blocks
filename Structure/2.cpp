#include<iostream>
using namespace std;
int main(){
    int x=9;
    int *p=&x;
    int &y=x;
    y++;
    cout<<y<<endl;
    return 0;
}