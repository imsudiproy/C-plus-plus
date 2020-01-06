/************************************************************
*************************************************************
*   Topic- Question                                        **
*   program by- Sudip Roy                                  **
*   Company- SR Group                                      **
*************************************************************
*************************************************************/

/*
   Question- Given a positive integer denoting , do the following:
   If 0<number<=9, then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
   If number>9 print Greater than 9.
*/


#include<iostream>
#include<math.h>
using namespace std;

int main() {
int in;
string num[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
cout<<"Enter a number: ";
cin >> in;

if(in > 9){
    cout << num[0];
}
else{
    cout << num[in];
}

return 0;
}
