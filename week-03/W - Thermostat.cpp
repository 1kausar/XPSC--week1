#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int l,r,x,a,b;
        cin>>l>>r>>x>>a>>b;
        if(a==b) cout<<"0"<<endl;
        if(b-a>=x) cout<<"1"<<endl;
        else if(a<b)
        {

            if(a+x<=r || a-x>=0)
            {
                cout<<"2"<<endl;
            }
            else if(a+x<=r && b-l>=x)
            {
                cout<<"3"<<endl;
            }
            else cout<<"-1"<<endl;


        }
        else if(a>b)
        {

            if(b+x<=r || b-x>=l)
            {
                cout<<"2"<<endl;
            }
            else if(b+x<=r && a-l>=x)
            {
                cout<<"3"<<endl;
            }
            else cout<<"-1"<<endl;
        }
    }
    return 0;
}
