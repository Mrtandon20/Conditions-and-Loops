#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of N : ";
    cin>>n;

    int i=2;
    int sum =0;
    while(i<=n){
        if(i%2==0){
            sum = sum+i;
        }
        i++;
    }
    cout<<"Sum of Even no : "<<sum<<endl;
}