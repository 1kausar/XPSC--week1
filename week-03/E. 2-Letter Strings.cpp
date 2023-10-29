#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    ll t ; cin>>t;
    while(t--)
    {
        map<char,ll>fmp;
        map<char,ll>smp;
        map<string,ll>mp;
        ll n,ans=0; cin>>n;
        vector<string>v;
        for(ll i=0 ; i<n ; i++)
        {
            string s; cin>>s;
            v.push_back(s);

        }

        for(ll i=0 ; i<n ; i++)
        {
            string a=v[i];
            mp[a]++;
            fmp[a[0]]++;
            smp[a[1]]++;
        }

        for(ll i=0 ; i<n ; i++)
        {
            string b=v[i];
            ans+=abs(mp[b]-fmp[b[0]]);
            ans+=abs(mp[b]-smp[b[1]]);

            if(fmp[b[0]]>0) fmp[b[0]]--;
            if(smp[b[1]]>0) smp[b[1]]--;
            if(mp[b]>0)     mp[b]--;
        }
    cout<<ans<<endl;
    }
    return 0;
}
