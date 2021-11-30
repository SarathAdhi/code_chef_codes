#include<iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int size[n];
    string str[n];

    for(int i=0; i<n; i++)
    {
        cin>>str[i];
        size[i] = str[i].length();
    }
    for(int j=0; j<n; j++)
    {
        int count=0;
        for(int k=0;k<size[j];k++)
        {
            if(str[j][k] == '4')
            {
                count+=1;
            }

        }
        cout<<count<<endl;
    }

    return 0;
}