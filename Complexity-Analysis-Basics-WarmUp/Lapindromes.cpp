#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string first, second;
        int n = s.length();
        for(int i=0;i<n/2;i++)
        {
            first+=s[i];
            second+=s[n-i-1];
        }
        sort(first.begin(), first.end());
        sort(second.begin(), second.end());
        
        if(first == second)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}

// #include<iostream>
// #include<cstring>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     float size[n];
//     string str[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>str[i];
//         size[i] = str[i].length();
//     }
//     for(int i=0;i<n;i++)
//     {
//         size[i] = size[i]/2;
//         float st = 0;
//         st = (size[i]*2) - int(size[i]);

//         if(str[i].substr(0,size[i]) == str[i].substr(st, size[i]*2))
//             cout<<"YES";
//         else
//             cout<<"NO";

//         cout<<endl;

//     }
//     return 0;

// }