#include<iostream>
using namespace std;
void sortArray(int *ptr,int size=5){
        for(int i=0;i<=3;i++){
            for(int j=i+1;j<=4;j++){
                if(*(ptr+i)>*(ptr+j)){
                   int temp=0;
                   temp=*(ptr+i);
                   *(ptr+i)=*(ptr+j);
                   *(ptr+j)=temp;
                
                }
            }
        }
}

int main(){
    int arr[5]={10,5,3,7,1};
    sortArray(arr,5);
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}