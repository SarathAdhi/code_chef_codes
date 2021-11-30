#include<iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, k, flag=0;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i] == k)
            flag=1;
    }

    if(flag == 1)
    {
        cout<<"1";
    }
    else{
        cout<<"-1";
    }
    
    return 0;
}