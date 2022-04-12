#include<iostream>
using namespace std;
int main(){
    int n1;
    cout<<"enter the value of N1 : ";
    cin>>n1;

    int n2;
    cout<<"Enter the value of N2 : ";
    cin>>n2;

    if(n1>n2){
        cout<<"N1 is Largest"<<endl;
    }
    else if(n1<n2){
        cout<<"N2 is Largest"<<endl;
    }else{
        cout<<"Both are equals"<<endl;
    }
}