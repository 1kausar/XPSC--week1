
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int a,b,c,ans;
    cin>>a>>b>>c;
    bool flage=false;
    while(a<=b)
    {

       if(a%c==0)
       {
        ans=a;
        flage=true;
        break;
       }
       else a++;

    }
    if(flage) cout<<ans<<endl;
    else cout<<"-1"<<endl;
}
