#include<iostream>
using namespace std;
int SumArray(int arr[10]){
    int sum=0;
    for(int i=0;i<=9;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    int brr[]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Sum is => "<<SumArray(brr);
    return 0;
}