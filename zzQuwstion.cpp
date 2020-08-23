#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c, d, sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        d=a+b+c;
        if(d>=2)
        {
            arr[i]=1;
        }
        else{
            arr[i]=0;}
        sum= sum + arr[i];
    }
    cout<<sum;
    return 0;
}
