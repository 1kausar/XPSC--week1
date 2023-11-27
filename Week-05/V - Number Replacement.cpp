#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ; cin>>t;
    while(t--)
    {

        int n; cin>>n;
        int a[n+1];
        vector<pair<int,int>>vp;
        for(int i=0 ; i<n ; i++)
        {
            cin>>a[i];
            vp.push_back({a[i],i});
        }
        string s; cin>>s;
        sort(vp.begin(),vp.end());
        bool ok=false;
        for(int i=0; i<vp.size()-1 ; i++)
        {
            if(vp[i].first==vp[i+1].first)
            {
                if(s[vp[i].second]!=s[vp[i+1].second])
                {
                    ok=true;
                }
            }
        }

        if(ok) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    return 0;
}
