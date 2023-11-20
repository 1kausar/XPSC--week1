#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,s;
    cin>>n>>s;
    vector<ll>v(n);
    vector<ll>p(n);

    for(ll i=0 ; i<n ; i++)
    {
        cin>>v[i];
    }
    ll cnt=0,sum=0;
    map<ll,ll>mp;
    mp[0]++;
    for(int i=0 ; i<n ; i++)
    {
        sum+=v[i];
        cnt+=mp[sum-s];
        mp[sum]++;
    }



    cout<<cnt<<endl;


}
