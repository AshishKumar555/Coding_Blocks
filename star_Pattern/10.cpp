#include<iostream>
using namespace std;
int main(){
    int count=1;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=7;j++){
            if(j<=5-i || j>3+i){
                cout<<count;
                   j<5-i?count++:count--;
                // if(j<5-i){
                //     count++;
                // }
                // if(j>3+i){
                //     count--;
                // }
                
            }else{
                
                cout<<" ";
                
            }
           
            
        }  
        cout<<endl;
         count=1;
    }
}
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int i,j,k;
    
//     for(i=1;i<=4;i++)
//     {
//        k=1;
//         for(j=1;j<=7;j++)
//         {
//         if(j<=5-i||j>=3+i)
//             {   
//         printf("%d",k);
//         j<4?k++:k--;
        
//             }
//         else
//         printf(" ");
//         if(j==4)
//         k--;
        
//         }
//         printf("\n");
//     }
//     return 0;
// }
