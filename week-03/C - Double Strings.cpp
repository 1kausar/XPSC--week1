#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<string>v;
    for(int i=0 ; i<n ; i++)
    {

        string s; cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end(),greater<string>());
    for(auto x:v)
    cout<<x<<" ";
}
