#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of N : ";
    cin>>n;
    int sumE=0;
    int sumO=0;
    int temp = n;
    while(temp!=0){
        int ld = temp%10;
        if(ld%2==0){
            sumE = sumE+ld;
        }else{
            sumO = sumO+ld;
        }
        temp= temp/10;
    }
    cout<<"Sum of Even Numbers : "<<sumE<<endl;
    cout<<"Sum of Odd Numbers : "<<sumO<<endl;

}