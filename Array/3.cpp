#include<iostream>
using namespace std;
void SumArray(int arr[10]){
    int sumOdd=0;
    int sumEven=0;
    for(int i=0;i<=9;i++){
        if(arr[i]%2==0){
            sumEven=sumEven+arr[i];
        }else{
            sumOdd=sumOdd+arr[i];
        }
    }
    cout<<"Odd => "<<sumOdd<<endl;
    cout<<"Even =>"<<sumEven<<endl;
}

int main(){
    int brr[]={1,2,3,4,5,6,7,8,9,10};
    SumArray(brr);
    return 0;
}