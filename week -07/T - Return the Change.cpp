#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int  n;
        cin>>n;
        int x=n%10;
        if(x<5)
        {
            cout<<100-(n-x)<<endl;
        }
        else if(x==5)
        {
            cout<<100-(n+x)<<endl;
        }
        else if(x>5)
        {
          cout<<100-(n-x+10)<<endl;
        }
    }
}
