#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=0 ; i<n ; i++)
        {
            cin>>a[i];
        }
        priority_queue<ll>pq;
        ll ans=0;


        for(int i=0 ; i<n ; i++)
        {
            if(a[i]==0 && !pq.empty())
            {
                ans+=pq.top();
                pq.pop();
            }
            else
            {
                pq.push(a[i]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
