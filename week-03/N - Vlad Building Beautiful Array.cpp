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
        vector<int>v;
        for(int i=0 ; i<n ; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int evn=0,odd=0;
        vector<int>e;
        vector<int>o;
        for(auto x:v)
        {
            if(x%2==0)
            {
                evn++;
                e.push_back(x);
            }
            else
            {
                odd++;
                o.push_back(x);
            }
        }
        sort(e.begin(), e.end());
        sort(o.begin(),o.end());
        if(evn==n || odd==n)
        cout<<"YES"<<endl;
        else
        {
            bool flage=true;
            bool ans=true;
            for(int i=0 ; i<n ; i++)
            {
                if((v[i]%2)==0)
                    continue;
                else
                {
                    if(o[0]>=v[i] || o.size()==0)
                    {
                        flage=false;
                        break;
                    }
                }
            }

            for(int i=0 ; i<n ; i++)
            {
                if(v[i]%2!=0)
                    continue;
                else
                {
                    if(o[0]>=v[i] || e.size()==0)
                    {
                        ans=false;
                        break;
                    }
                }
            }
            if(ans || flage)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
