#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s; cin>>s;
        map<string,int>mp;
        for(int i=0 ; i<n-1 ; i++)
        {
            string x;
            x+=s[i];
            x+=s[i+1];
            cout<<x<<endl;

           mp[x]++;
        }
        cout<<mp.size()<<endl;
    }
}
