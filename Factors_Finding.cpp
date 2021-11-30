#include<iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, j=0, x=0;
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
    cout<<x<<endl;
    while(x != 0)
    {
        cout<<a[j]<<" ";
        j++;
        x--;
    }
    
    return 0;
}