#include<iostream>
using namespace std;
int main()
{ 
    int t,i,d;
    long a;
    cin>>t;
    while(t--)
    {   
        long s=0;
        cin>>a;
        while(a!=0)
        {
            d=a%10;
            s=s*10+d;
            a=a/10;
        }
        cout<<s<<endl;
    }
    
}