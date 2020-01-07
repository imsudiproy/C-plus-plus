/*
    Four function calculator
    program by- Sudip Roy
    Company- SR Group
*/
#include <iostream>
using namespace std;

int main()
{
    int n=0;
    float num1=0.0, num2=0.0, res=0.0;
    cout<<"Four function calculator: "<<endl;
    cout<<"1. Addition \n2. Subtraction \n3. Multiplication \n4. Division"<<endl;
    cout<<"Choose your operation: ";
    cin>>n;
    cout<<endl<<"Enter  first number: ";
    cin>>num1;
    cout<<endl<<"Enter second number: ";
    cin>>num2;
    if(n==1)
        {
            res=num1+num2;
            cout<<"Result: "<<res;
        }
    else if(n==2)
    {
        res=num1-num2;
        cout<<"Result: "<<res;
    }
    else if(n==3)
        {
            res=num1*num2;
            cout<<"Result: "<<res;
        }
    else if(n==4)
    {
        res=num1/num2;
        cout<<"Result: "<<res;
    }
    else
        cout<<"Wrong input";
    return 0;
}
