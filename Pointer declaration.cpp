/*
   Topic- Pointer declaration
   Program by- Sudip Roy
   Company- SR Group
*/

#include<iostream>
using namespace std;
int main()
{
   int a=5; //this is a variable declaration
   int *b; //this is a pointer declaration
   b=&a;  //poiter b is pointing to the memory address of a
   cout<<b; // this will print the memory address of a
}
