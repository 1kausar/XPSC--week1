#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,sum=0; cin>>n;
    ll a[n+1], b[n+1], pfx[n+1], bpfx[n+1];
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    pfx[0]=a[0];
    for(ll i=1 ; i<n ; i++)
    {
        pfx[i]=pfx[i-1]+a[i];
    }

    sort(b,b+n);
    bpfx[0]=b[0];
    for(ll i=1 ; i<n ; i++)
    {
        bpfx[i]=bpfx[i-1]+b[i];
    }

    ll m; cin>>m;
    while(m--)
    {
        ll qa[4];
        for(ll i=0 ; i<3 ; i++)
        {
            cin>>qa[i];
        }

        if(qa[0]==1)
        {
            qa[1]--;
            qa[2]--;
            if(qa[1]==0 && qa[2]!=0)
            {
                cout<<pfx[qa[2]]<<endl;
            }
            else if(qa[1]==0 && qa[2]==0)
            {
                cout<<a[0]<<endl;
            }
            else
            cout<<abs(pfx[qa[2]]-pfx[qa[1]-1])<<endl;

        }
        else
        {
            qa[1]--;
            qa[2]--;

            if(qa[1]==0 && qa[2]!=0)
            {
                cout<<bpfx[qa[2]]<<endl;
            }
            else if(qa[1]==0 && qa[2]==0)
            {
                cout<<b[0]<<endl;
            }
            else
            cout<<abs(bpfx[qa[2]]-bpfx[qa[1]-1])<<endl;

        }
    }
    return 0;

}
