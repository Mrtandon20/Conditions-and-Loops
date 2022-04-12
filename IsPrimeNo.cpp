#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of N : ";
    cin>>n;

    int flag = 0;
    int i=2;
    while(i<n){
        if(n%i==0){
            flag = 1;
            break;
        }
        i++;
    }
    if(flag ==1){
        cout<<"Not A Prime No "<<endl;
    }else{
        cout<<"A Prime No "<<endl;
    }
}