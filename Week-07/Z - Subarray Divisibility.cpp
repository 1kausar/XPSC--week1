#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n; cin>>n;
    vector<ll>v(n);

    for(ll i=0 ; i<n ; i++)
    {
        cin>>v[i];
    }

    map<ll,ll>mp;
    ll cnt=0,sum=0;
    mp[0]++;
    for(ll i=0 ; i<n ; i++)
    {
        sum+=abs(v[i]);
        ll x=(sum%n+n)%n;
        if(mp.count(x))
        {
        cnt+=mp[x];
        }
        mp[x]++;

    }
    cout<<cnt<<endl;
}
