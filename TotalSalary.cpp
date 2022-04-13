#include<iostream>
using namespace std;

int main(){
    double Total_salary;
    int basic;
    double hra;
    double da;
    double pf;
    int allow;
    char grade;

    cout<<"Enter Basic Salary :";
    cin>>basic;

    cout<<"Enter Grade : ";
    cin>>grade;

    if(grade == 'A'){
        allow = 1700;
    }else if(grade == 'B'){
            allow = 1500;
    }else if(grade == 'C' || grade<='Z'){
        allow = 1300;
    }
    pf = (basic*0.11);
    hra = (basic*0.2);
    da = (basic*0.5);

    Total_salary = basic + hra +da + allow - pf;
    int x = Total_salary;
    if(Total_salary-x >0.5){
        Total_salary = x+1;
    }else{
        Total_salary = x;
    }
    int total = Total_salary;
    cout<<"Total Salary : "<<total;
}