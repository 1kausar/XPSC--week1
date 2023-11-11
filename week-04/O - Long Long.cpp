#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        ll sum=0;
        vector<int> v(n);
        for(int i=0 ; i<n ; i++)
        {
            cin>>v[i];
            sum+=abs(v[i]);
        }

        int cnt=0;
        for(int i=0 ; i<n ; i++)
        {
            if(v[i]<0)
            {
                cnt++;
                while(v[i]<=0)
                {
                    i++;

                }
            }
            else if(v[i]>0)
            {
                continue;
            }
        }
        cout<<sum<<" "<<cnt<<endl;
    }
}
