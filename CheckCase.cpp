#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the character : "<<endl;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<0;
    }else if(ch>='A' && ch<='Z'){
        cout<<1<<endl;
    }else{
        cout<<-1<<endl;
    }
}