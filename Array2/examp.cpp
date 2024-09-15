#include<iostream>
using namespace std;
float AvgArray(int arr[]){
    cout<<"Enter the 10 values :"<<endl;
    for(int i=0;i<=9;i++){
        cin>>arr[i];
    }
   float avg=0.0;
   int sum=0;
    int length =10;
    for(int i=0;i<=9;i++){
        sum=sum+arr[i];
    }
    avg=sum/length;
    return avg;
}

int main(){
    int arr[10];
    int length=sizeof(arr)/sizeof(int);
    cout<<length;
    cout<<"Avetage  is => "<<AvgArray(arr);
    return 0;
}
Array 2