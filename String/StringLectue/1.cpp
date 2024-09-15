#include<iostream>
using namespace std;
#include<string>
string swap(string str){
    int length=str.length()-1;
    cout<<"lenght is -> "<<length<<endl;
    char temp;
    int start=0, end=length;
    while(start<=end){
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        cout<<str[start]<<"-> "<<str[end]<<endl;
        start++;
        end--;
    }
    return str;
}
int main(){
    string str;
    cout<<"Enter a string"<<endl;
    getline(cin,str);
//    for(int i=0;i<str.length();i++){
//     cout<<str[i]<<endl;
//    }
 cout<<swap(str);
cout<<str;
    return 0;
}