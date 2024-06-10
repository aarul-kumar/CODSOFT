#include<iostream>
using namespace std;

int main(){

    float a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;

    char operation;
    cout<<"Enter an operation (+, -, *, /)"<<endl;
    cin>>operation;

    switch (operation)
    {
    case '+':
        cout<<"The sum is "<<a+b<<endl;
        break;
    case '-':
        cout<<"The difference is"<<a-b<<endl;
        break;
    case '*':
        cout<<"The product is"<<a*b<<endl;
        break;
    case '/':
        cout<<"The division is"<<a/b<<endl;
        break;
    
    default:
    cout<<"Enter another operation"<<endl;
        break;
    }
}
