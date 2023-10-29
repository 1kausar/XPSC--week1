#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+1];
        map<ll,ll>mp;
        for(ll i=0 ; i<n ; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        sort(a,a+n);
        ll cnt=0;
        for(ll i=0 ; i<n ; i++)
        {
            if(mp[a[i]]!=0)
            {
                cnt++;
                mp[a[i]]--;
                ll val=a[i]+1;
                while(mp[val]!=0)
                {
                    mp[val]--;
                    val++;
                }
            }
        }
        cout<<cnt<<endl;
    }
}

