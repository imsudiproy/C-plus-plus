/************************************************************
*************************************************************
*   Topic- Max of four numbers                             **
*   program by- Sudip Roy                                  **
*   Company- SR Group                                      **
*************************************************************
*************************************************************/


#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int max;
    if((a>b) && (a>c) && (a>d)){
     max=a;   
    }
    else if ((b>a) && (b>c) && (b>d)){
        max=b;
    }
    else if((c>a) && (c>b) && (c>d)){
        max=c;
    }
    else if((d>a) && (d>b) && (d>c)){
        max=d;
    }
    cout<<max;
    return 0;
}
int main() {
    int a, b, c, d, max;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    max_of_four(a, b,c, d);
    //cout<<max_of_four(int a, int b, int c, int d);
    return 0;
}

