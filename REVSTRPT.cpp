#include<iostream>
using namespace std;

int main()
{
    int N, sum=0;
    cin>>N;
    if(N>=1)
    {
        for(int i=1;i<=N;i++)
        {
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}