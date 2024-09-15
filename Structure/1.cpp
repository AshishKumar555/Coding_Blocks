#include<iostream>
using namespace std;
struct book{
       int bookid;
       char title[20];
       float price;   
};


int main(){
struct book b1,b2;
cout<<"Enter the bookid title and price"<<endl;
cin>>b1.bookid;
fflush(stdin);
fgets(b1.title,20,stdin);
cin>>b1.price;

cout<<b1.bookid<<endl<<b1.title<<endl<<b1.price<<endl;

return 0;
}