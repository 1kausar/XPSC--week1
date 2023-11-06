#include<bits/stdc++.h>
using namespace std;
ll main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        if(!(n&1))
        {
            for(ll i=n ; i>=1 ; i--)
            {
                cout<<i<<" ";
            }
            cout<<endl;

        }
        else if(n&1)
        {

            if(n==3 )
            {
                cout<<-1<<endl;
            }

            else if(n==5)
            {
                cout<<"5 4 1 2 3"<<endl;
            }

            else
            {
                ll a[n+1];
                ll j=1;
                for(ll i=n ; i>=1 ; i--)
                {
                    if(i!=j)
                    {
                        a[j]=i;
                        j++;
                    }
                    else if(i==j)
                    {
                        ll temp=a[j-1];
                        a[j-1]=i;
                        a[j]=temp;
                        j++;
                    }
                }

                for(ll i=1 ; i<=n ; i++)
                {
                    cout<<a[i]<<" ";
                }
                cout<<endl;
            }
        }
    }
}
