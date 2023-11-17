#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll a[n+1];
        for(ll i=1 ; i<=n ; i++)
        {
            cin>>a[i];
        }
        for(int i=1 ; i<=n ; i++)
        {
            if(a[i]==1)
            {
                cout<<0<<" ";
            }
            else cout<<1<<" ";
        }
        cout<<endl;




    }
    return 0;
}
