#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        string s; cin>>s;
        sort(s.begin(),s.end());
        map<char,int>mp;
        for(auto x:s )
        mp[x]++;

        int ans=0;
       for(auto x:s)
       {
           if(x>='A' && x<='Z')
           {
               int mn=0;
               char a=x+32;
               mn=min(mp[x],mp[a]);
               ans+=mn;
               mp[x]-=mn;
               mp[a]-=mn;
           }
           else if(x>='a'  && x<='z')
           {
               int mm=0;
               char b=x-32;
               mm=min(mp[x],mp[b]);
               ans+=mm;
               mp[x]-=mm;
               mp[b]-=mm;

           }
       }
       for(auto x:mp)
       {
           if(x.second!=0)
           {
              char c=x.first;
              if(c>='A' && c<='Z')
              {
                int mn=0;
                char a=c+32;
                int add=max(mp[c],mp[a]);
                mn=min(mp[c],mp[a]);

                int p=min(k,add/2);
                ans+=p;
                k-=p;
                mp[c]-=mn;
                mp[a]-=mn;
              }

              else{

                int mn=0;
                char a=c-32;
                int add=max(mp[c],mp[a]);
                mn=min(mp[c],mp[a]);

                int p=min(k,add/2);
                ans+=p;
                k-=p;
                mp[c]-=mn;
                mp[a]-=mn;

              }
           }
       }



       cout<<ans<<endl;

    }
}
