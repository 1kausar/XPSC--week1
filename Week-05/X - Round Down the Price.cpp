
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        string s="1";
        string a=to_string(n);
        for(int i=0 ; i<a.size()-1 ; i++)
        {
            s+='0';
        }
        ll x=stoi(s);
        cout<<abs(n-x)<<endl;
    }
}
