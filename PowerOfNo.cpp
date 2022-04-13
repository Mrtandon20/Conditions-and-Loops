#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter the Value of Number : ";
    cin>>x;

    int n;
    cout<<"Enter the value of Power : ";
    cin>>n;

    int i=n;
    int ans = 1;
    while(i!=0){
        ans = ans*x;
        i--;
    }
    cout<<"Answer : "<<ans;
}