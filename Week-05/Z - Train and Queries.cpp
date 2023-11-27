#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        map<int,vector<int>>mp;
        for(int i=0 ; i<n ; i++)
        {
            cin>>v[i];
            mp[v[i]].push_back(i);
        }
        while(k--)
        {
            int x,y;
            cin>>x>>y;
            if(x==y)
            {
                cout<<"YES"<<endl;
                continue;
            }

            else if(mp[x].empty() || mp[y].empty())
            {
                cout<<"NO"<<endl;
                continue;
            }

            else if(mp[x].front()<mp[y].back())
            {
                cout<<"YES"<<endl;
                continue;

            }

            else
            {


                cout<<"NO"<<endl;
                continue;

            }
        }



    }
    return 0;
}
