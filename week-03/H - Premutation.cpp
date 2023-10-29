#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n+1];
        vector<int>z;
        vector<vector<int>>vv;
        for(int i=0 ; i<n ; i++)
        {
            vector<int>v;
            z.push_back(i+1);
            for(int j=0 ; j<n-1 ; j++)
            {
                int x; cin>>x;
                v.push_back(x);
            }
            vv.push_back(v);
        }


        map<int,int>mp;
        for(auto x:vv)
        {
            mp[x[x.size()-1]]++;
        }
        int unq;
        for(auto x:mp)
        {
            if((x.second)==1) unq=x.first;
        }
       vector<int>ans;
       for(auto x:vv)
       {
           if(x[x.size()-1]==unq)
           {
            ans=x;
           }
       }

       set<int>st;
       for(auto x:ans) st.insert(x);
       for(auto x:z)
       {
        if(st.count(x)==0)
        {
            ans.push_back(x);
            break;
        }
       }

       for(auto x:ans) cout<<x<<" ";
       cout<<endl;

    }
    return 0;
}
