#include<iostream>
using namespace std;
// void sortArray(int *ptr,int size=5){
//         for(int i=0;i<=3;i++){
//             for(int j=i+1;j<=4;j++){
//                 if(*(ptr+i)>*(ptr+j)){
//                    int temp=0;
//                    temp=*(ptr+i);
//                    *(ptr+i)=*(ptr+j);
//                    *(ptr+j)=temp;
//                 }
//             }
//         }
// }
void maximum(int *ptr1,int *ptr2){
    *ptr1>*ptr2?(cout<<"maximum is => "<<*ptr1):
    (cout<<"maximum is => "<<*ptr2);
}

int main(){
    int a=10;
    int b=20;

   maximum(&a,&b);
    return 0;
}