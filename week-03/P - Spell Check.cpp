#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        bool flage=false;
        for(auto x:s)
        {
            if(x=='M' || x=='E' || x=='O' || x=='W')
            {
                flage=true;
            }
        }
        string a="meow";
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int i=0 ;
        bool ok=false;
        for(auto c:s)
        {
            if(a[i]==c) i++;
            if(i==a.size())
            {
                ok=true;
                break;
            }

        }
        if(ok && flage) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}
