#include<iostream>
using namespace std;

int main()
{
    int n, x=1;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(i%2 == 0)
        {
            int a=4;
            for(int j=0;j<5;j++)
            {
                cout<<x+a<<" ";
                x++;
                a=a-2;
            }
        }
        else
        {
            for(int j=0;j<5;j++)
            {
                cout<<x<<" ";
                x++;
            }
        }
        cout<<endl;
    }
    return 0;
}