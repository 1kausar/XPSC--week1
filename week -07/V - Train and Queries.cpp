
#include<bits/stdc++.h>
using namespace std;
ll main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        map<ll,vector<ll>>mp;
        for(ll i=0 ; i<n ; i++)
        {
            cin>>v[i];
            mp[v[i]].push_back(i);
        }
        while(k--)
        {
            ll x,y;
            cin>>x>>y;
            if(x==y)
            {
                cout<<"YES"<<endl;
                continue;
            }

            else if(mp[x].empty() || mp[y].empty())
            {
                cout<<"NO"<<endl;
                continue;
            }

            else if(mp[x].front()<mp[y].back())
            {
                cout<<"YES"<<endl;
                continue;

            }

            else
            {


                cout<<"NO"<<endl;
                continue;

            }
        }



    }
    return 0;
}
