#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n; cin>>n;
    ll ans=0;
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n ; j++)
        {
            for(int k=1 ; k<=n ; k++)
            {
                ll res=__gcd(__gcd(i,j),k);
                ans+=res;
            }
        }
    }
    cout<<ans<<endl;
}
