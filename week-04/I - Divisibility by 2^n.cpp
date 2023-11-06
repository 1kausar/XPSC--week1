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
        ll cnt=0;
        vector<ll>v;
        for(ll i=1 ; i<=n ; i++)
        {
            cin>>a[i];
            while(a[i]%2==0)
            {
                cnt++;
                a[i]/=2;
            }
            int tempi=i;
            int temp=0;
            if(!(tempi&1))
            {
                while((tempi%2)==0)
                {
                    temp++;
                    tempi/=2;
                }
                v.push_back(temp);
            }
        }

        if(cnt>=n)
        {
            cout<<0<<endl;
        }
        else
        {

            bool ok=false;
            ll res=0;
            sort(v.rbegin(), v.rend());
            for(ll i=0 ; i<v.size() ; i++)
            {
                cnt+=v[i];
                res++;

                if(cnt>=n)
                {
                    ok=true;
                    break;
                }
            }
            if(ok) cout<<res<<endl;
            else cout<<-1<<endl;



        }





    }
    return 0;
}
