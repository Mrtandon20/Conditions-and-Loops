#include<iostream>
using namespace std;

int main(){
    int S;
    cout<<"Enter the Value of Start of Farenheit : ";
    cin>>S;

    int E;
    cout<<"Enter the Value of End of Farenheit : ";
    cin>>E;

    int W;
    cout<<"Enter the Step Size : ";
    cin>>W;

    int C;

    while(S<=E){
        C = (S-32)*(5.0/9);
        cout<<S<<" "<<C<<endl;
        S +=W;
    }
    
}