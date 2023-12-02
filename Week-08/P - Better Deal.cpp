#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int x=abs(100-a);
        int y=abs(((200*b)/100)-200);

        if(x<y)cout<<"FIRST"<<endl;
        else if(x>y) cout<<"SECOND"<<endl;
        else cout<<"BOTH"<<endl;
    }
}
