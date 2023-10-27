#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll t; cin>>t;
  while(t--)
  {
    ll n; cin>>n;
    string s; cin>>s;
    ll sum=0,cng=0;
    vector<ll>v;
    ll ans[n+1];
    for(ll i=0 ; i<s.size() ; i++)
    {
        ll L=i;
        ll R=s.size()-i-1;

        // cout<<"L is: "<<L<<" "<<"R is: "<<R<<endl;

        if(s[i]=='L')
        {
            if(L>R)
            {
               sum+=L;
            }
            else if(R>L)
            {
                cng++;
                sum+=R;
                v.push_back(abs(R-L));

            }
            else if(R==L)
            {
                sum+=L;
            }
        }
        else if(s[i]=='R')
        {
            ll L=i;
            ll R=s.size()-i-1;

            if(R>L)
            {
                sum+=R;
            }
            else if(L>R)
            {
                cng++;
                sum+=L;
                v.push_back(abs(R-L));
            }
            else if(R==L)
            {
                sum+=R;
            }
        }
    }
    sort(v.begin(),v.end(),greater<ll>());
    //sort(v.begin(),v.end());

    for(ll i=cng ; i<=n ; i++)
    {
        ans[i]=sum;
    }



    for(ll i=cng-1 ; i>=1 ; i--)
    {
        sum-=v.back();
        v.pop_back();
        ans[i]=sum;

    }



    for(ll i=1 ; i<=n ; i++)
    {
        cout<<ans[i]<<" ";
    }

  }
  return 0;
}
