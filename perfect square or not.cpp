/************************************************************
*************************************************************
*   Topic- Program to find number is perfect square or not **
*   program by- Sudip Roy                                  **
*   Company- SR Group                                      **
*************************************************************
*************************************************************/

#include<iostream>
#include<math.h>
using namespace std;

int persq(int num)
{
    int s;
    s= sqrt(num);
    if (s*s==num)
    {
        cout<<"Perfect square"<<endl;
    }
    else
        cout<<"Not a perfect square"<<endl;
    return 0;
}
int main()
{
   int num;
   cout<<"Enter A number:" ;
   cin>>num;
   persq(num);
   return 0;
}
