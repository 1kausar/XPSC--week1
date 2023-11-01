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
        int a[n+1];
        set<int>st;
        for(int i=0 ; i<n ; i++)
        {
            cin>>a[i];
            st.insert(a[i]);
        }
        sort(a,a+n);
        int x=a[n-1];

        vector<int>v;
        for(int i=1 ; i<=x ; i++)
        {
            if(st.count(i)==0)
            {
                v.push_back(i);
            }
        }
        int sum=0;
        for(auto x:v)
        sum+=x;
        if(k-sum<0)
        cout<<"NO"<<endl;
        else if(k-sum==0)
        cout<<"YES"<<endl;
        else
        {
            bool flage=false;
            int z=k-sum;;
            for(int i=x+1 ; i<=k-sum ; i++)
            {
              z=z-i;
              if(z==0)
              {
                flage=true;
                break;
              }
            }
            if(flage) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }

 return 0;
}

