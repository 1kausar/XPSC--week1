#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0 ; i<n ; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll x=a[0];
        ll ans=0;
        for(int i=0 ; i<n ; i++)
        {
            ans=ans+(a[i]-x);
        }
        cout<<ans<<endl;


    }
}
