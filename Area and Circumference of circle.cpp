/*
   Area and circumference of circle.
   Program By- Sudip Roy
   Company- SR Group
*/
#include<iostream>
#define PI 3.14
using namespace std;

float calcArea(float r)
{
    float area;
    area=PI*r*r;
    return area;
}
float calcCir(float r)
{
    float cir;
    cir=2*PI*r;
    return cir;
}

int main()
{
    float r;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    cout<<"Circumference of the circle is: "<<calcCir(r);
    cout<<endl<<"Area of the circle is: "<<calcArea(r);
    cout<<endl<<endl;
    return 0;
}

