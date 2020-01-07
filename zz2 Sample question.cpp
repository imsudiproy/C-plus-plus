/*********************************
**********************************
**  Topic- Question             **
** Program by- Sudip Roy        **
** Company- SR Group            **
**********************************
**********************************/
/*
   Question- You will be given two positive integers,a  and b (a<=b), separated by a newline.
   For each integer n in the interval [a,b]:
   If , 1<=n<=9 then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
   Else if n>9 and it is an even number, then print "even".
   Else if n>9 and it is an odd number, then print "odd".
*/

#include<iostream>
using namespace std;

int main()
{
int a, b;
string num[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
//cout<<"Enter a number: ";
cin >> a>>b;
for(int i=a; i<=b; i++){
if(i>9){
    if(i%2==0){
        cout<<"even"<<endl;
    }
    else
        cout<<"odd"<<endl;
}
else{
    cout << num[i]<<endl;
}
}

return 0;
}

