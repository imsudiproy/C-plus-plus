/************************************************************
*************************************************************
*   Topic- Program to find number of characters in a number**
*   program by- Sudip Roy                                  **
*   Company- SR Group                                      **
*************************************************************
*************************************************************/

#include<iostream>
using namespace std;
int main()
{
   int n, count=0;
   cout<<"Enter a number: ";
   cin>>n;
   while(n>0)
   {
       n=n/10;
       count=count+1;
   }
   cout<<"Number of characters are: "<<count;
}
