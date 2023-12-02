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
        string s;
        cin>>s;

        int cnt=0;
        for(int i=0 ; i<n ; i++)
        {
            if(s[i]=='1') cnt++;
        }

        int ans=min(cnt,abs(cnt-n));
        if(ans&1) cout<<"Zalatan"<<endl;
        else cout<<"Ramos"<<endl;
    }
}
