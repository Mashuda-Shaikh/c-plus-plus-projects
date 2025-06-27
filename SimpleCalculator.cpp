#include <iostream>
using namespace std;

int main()
{
    double no1,no2;
    char operation;

    cout<<"\t\t\t\t Welcome to the Arithmetic Calculator!!"<<endl<<endl;
    cout<<"Enter First Number: ";
    cin>>no1;
    cout<<"Enter Second Number: ";
    cin>>no2;
    cout<<"Choose any one operation to perform e.g.(+, -, *, /): ";
    cin>>operation;

    switch(operation)
    {
        case '+':
            cout<<"The Addition is "<<no1+no2;
            break;
        case '-':
            cout<<"The Subtration is "<<no1-no2;
            break;
        case '*':
            cout<<"The Multiplication is "<<no1*no2;
            break;
        case '/':
            if (no2==0)
            {
                cout<<"Error: Division by zero is not allowed.";
            }
            else
            {
                cout<<"The Division is "<<no1/no2;
            } 
            break;
        default:
            cout<<" You Entered Invalid Operations.";
    }
 return 0;
}
