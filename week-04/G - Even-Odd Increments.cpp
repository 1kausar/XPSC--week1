#include<bits/stdc++.h>
#define ll long long
using namespace std;
int  main()
{

    ll t; cin>>t;
    while(t--)
    {
        ll sum=0;
        ll n,q; cin>>n>>q;
        ll a[n+1];

        ll even=0,odd=0;
        for(ll i=0 ; i<n ; i++)
        {
            cin>>a[i];
            sum+=a[i];
            if(!(a[i]&1)) even++;
            else odd++;
        }

        while(q--)
        {
            ll x,y; cin>>x>>y;
            if(x==0)
            {
                if(!(y&1)) // even
                {
                    ll newsome=sum+(even*y);
                    sum=newsome;
                    cout<<sum<<endl;
                }
                else       //odd
                {
                    ll newsome=sum+(even*y);
                    sum=newsome;
                    odd=odd+even;
                    even-=even;
                    cout<<sum<<endl;


                }

            }
            else{

                if(!(y&1))  //even
                {
                    ll newsome=sum+(odd*y);
                    sum=newsome;
                    cout<<sum<<endl;
                }
                else       //odd
                {
                   ll newsome=sum+(odd*y);
                   sum=newsome;
                   even=odd+even;
                   odd-=odd;
                   cout<<sum<<endl;
                }
            }
        }
    }
    return 0;
}
