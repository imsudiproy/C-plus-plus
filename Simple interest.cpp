/*
Topic- Program to calculate simple interest.
Program by- Sudip Roy
Company- SR Group
*/
#include<iostream>
using namespace std;
int main()
{
    float p,r,t,res;
    cout<<"Enter principle amount: ";
    cin>>p;
    cout<<"Enter rate: ";
    cin>>r;
    cout<<"Enter time: ";
    cin>>t;
    res=(p*r*t)/100;
    cout<<"Simple interest is: "<<res;
    return 0;
}