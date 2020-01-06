/*
   Number is prime or not.
   Program By- Sudip Roy
   Company- SR Group
*/

#include <iostream>
using namespace std;

int main()
{
   int num, i=2,n=0;
   cout<<"Enter the number: ";
   cin>>num;
   for(i;i<num;i++)
   {
       if(num%i==0)
        n=n+1;
   }
   if(num>1)
   {
        if(n==0)
            cout<<"Prime Number"<<endl;
       else
        cout<<"Not a Prime number"<<endl;
   }
   else
    cout<<"Not a Prime number!!"<<endl;
   return 0;
}
