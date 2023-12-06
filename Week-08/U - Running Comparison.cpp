#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>v(n);
        vector<int>vv(n);

        for(int i=0 ; i<n ; i++)
        {
            cin>>v[i];
        }
        for(int i=0 ; i<n ; i++)
        {
            cin>>vv[i];
        }
        int cnt=0;
        for(int i=0 ; i<n  ; i++)
        {
            if(v[i]<=(vv[i]*2)  && vv[i]<=(v[i]*2))
            cnt++;
        }
        cout<<cnt<<endl;
    }
}
