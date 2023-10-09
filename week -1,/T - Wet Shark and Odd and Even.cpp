#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;cin>>n;
    ll a[n+3];
    ll sum=0;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%2==0)cout<<sum<<endl;
    else
    {

        sort(a,a+n);
        for(int i=0 ; i<n ; i++)
        {
            if(a[i]%2)
            {
                cout<<sum-a[i];
                break;
            }
        }
    }


}
