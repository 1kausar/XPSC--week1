#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n+1];
        for(int i=0 ; i<n ; i++)
        {
            cin>>a[i];
        }
        map<int ,int>mp;
        for(int i=0 ; i<n ; i++)
        {
            mp[a[i]]++;
        }
        int ans=0,cnt=0;
        for(auto it=mp.begin() ; it!=mp.end() ; it++)
        {

            if((it->second)==1)
            {
                cnt++;
            }
            else
            {
                ans=ans+((it->second)-1);
              //  cout<<ans<<endl;
                cnt++;
            }

           // cout<<it->first<<" "<<it->second<<endl;
        }
        if(ans%2!=0)
        {
            cout<<cnt-1<<endl;
        }
        else
        {
            cout<<cnt<<endl;
        }
    }
    return 0;
}
