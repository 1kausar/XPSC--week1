
#include<bits/stdc++.h>
using namespace std;

bool ispalindrom(string s)
{
    int l=0,r=s.size()-1;
    while(l<=r)
    {
        if(s[l]!=s[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        int n,ans=0; cin>>n;
        int H=n/60, M=n%60;
        map<string ,bool>mp;
        while(!mp[s])
        {
            mp[s]=true;
            ans+=(ispalindrom(s));

            string h; h[0]=s[0]; h[1]=s[1];
            int hh=stoi(h); //cout<<hh<<endl;
            string m; m[0]=s[3]; m[1]=s[4];
            int mm=stoi(m); //cout<<mm<<endl;


            mm+=M;
            hh+=H;

            if(mm>59) hh++;
            mm=mm%60;
            hh=hh%24;

            s[0]=('0'+(hh/10)); s[1]=('0'+(hh%10));
            s[3]=('0'+(mm/10)); s[4]=('0'+(mm%10));


        }
    cout<<ans<<endl;
    }
    return 0;
}
