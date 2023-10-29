#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int k,n;
        cin>>k>>n;

        int dif=1;
        int ans=1;

        for(int i=1 ; i<=k ; i++)
        {
            cout<<ans<<" ";
            if(n-(dif+ans)>=(k-(i+1)))
            {
                ans+=dif;
                dif++;
            }
            else ans++;
        }
        cout<<endl;
    }
    return 0;
}
