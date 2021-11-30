#include<iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, x=0, max1[10], c=0;
    cin>>n;
    int a[n];
    for(int i=1; i<=n; i++)
    {
        if(n%i == 0)
        {
            a[x]=i;
            x++;
        }
    }
    for(int i=0; i<x; i++)
    {
        if(a[i] <= 10)
        {
            max1[i]=a[i];
            c=c+1;
        }
    }
    cout<<max1[c-1];
    
    return 0;
}