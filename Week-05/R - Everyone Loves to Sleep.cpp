#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n,H,M;
        cin>>n>>H>>M;

        ll mx=INT_MAX;
        while(n--)
        {
            ll h,m;
            cin>>h>>m;
            ll HH=H, MM=M;
            ll cnt=0;

            while(1)
            {
                if(HH==h && MM==m)
                {
                    break;
                }

                cnt++;
                MM++;
                if(MM==60)
                {
                    HH++;
                    MM=0;

                    if(HH==24)
                    {
                      HH=0;
                      MM=0;
                    }
                }
            }
            mx=min(mx,cnt);
        }

        cout<<(mx/60)<<" "<<(mx%60)<<endl;
    }
}
