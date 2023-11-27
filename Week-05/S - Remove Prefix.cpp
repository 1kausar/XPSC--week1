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
        vector<int>v(n);
        set<int>s;
        queue<int>q;
        map<int,int>mp;
        for(int i=0 ; i<n ; i++)
        {
            cin>>v[i];
            s.insert(v[i]);
            q.push(v[i]);
            mp[v[i]]++;
        }

        if(s.size()==1)
        {
            cout<<n-1<<endl;
        }
        else if(s.size()==n)
        {
            cout<<0<<endl;
        }

        else
        {
            int cnt=0,cnt2=0;
            bool flage=true;
            for(int i=0 ; i<n ; i++)
            {
                if(mp[v[i]]>1)
                {
                    cnt++;
                    if(flage)
                    {
                        cnt+=cnt2;
                        flage=false;
                        cnt2=0;
                    }
                    mp[v[i]]--;
                }
                else
                {
                    cnt2++;
                    flage=true;
                }
            }
            cout<<cnt<<endl;
        }




    }
}
