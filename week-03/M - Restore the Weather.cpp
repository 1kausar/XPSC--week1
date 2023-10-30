#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n+1],b[n+1],ans[n+1];
        vector<pair<int,int>>pr;
        for(int i=0 ; i<n ; i++)
        {
            cin>>a[i];
            pr.push_back({a[i],i});
        }
        for(int i=0 ; i<n ; i++)
        {
            cin>>b[i];
        }
        sort(pr.begin(),pr.end());
        sort(b,b+n);
        for(int i=0 ; i<n ; i++)
        {
          ans[pr[i].second]=b[i];
        }
        for(int i=0 ; i<n ; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
