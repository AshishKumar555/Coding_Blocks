#include<iostream>
using namespace std;
int main(){
    char count='A';
    for(int i=1;i<=5;i++){
        for(int j=1;j<=9;j++){
            if((j>=6-i) && (j<=4+i)){
                cout<<count;
                j<5?count++:count--;
            }else{
                cout<<" ";
            }
            
        }
        count='A';
        cout<<endl;
    }
        
    
}

// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i,j,k;
//     for(i=1;i<=5;i++)
    
//     {  
//         k='A';
//         for(j=1;j<=9;j++)
//         if(j>=6-i&&j<=4+i)
//         {
//         printf("%c",k);
//         j<5?k++:k--;
        
//         }
//         else
//         printf(" ");
//         printf("\n");
//     }
    
//     return 0;
// }
