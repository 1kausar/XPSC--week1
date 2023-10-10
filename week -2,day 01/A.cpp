#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0 ; i<n ; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int ans,cnt=1;
        bool flage=false;
        sort(v.begin(),v.end());
        for(int i=0 ; i<n-1 ; i++)
        {
            if(v[i]==v[i+1])
            {
                cnt++;
                if(cnt==3)
                {
                    ans=v[i];
                    flage=true;
                    break;
                }
            }
            else cnt=1;
        }
        if(flage) cout<<ans<<endl;
        else cout<<"-1"<<endl;
    }
}
