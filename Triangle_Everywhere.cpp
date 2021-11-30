#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c && c==a)
    {
        cout<<"1";
    }
    else if(a!=b && b!=c && c!=a) //Scalene Triangle property is all the 3 sides
    {                             //are not equal to each other  
        cout<<"3";
    }
    else
    {
        cout<<"-1";
    }
    return 0;
}