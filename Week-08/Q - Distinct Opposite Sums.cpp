#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        if(n==2) cout<<"2 1"<<endl;
        else if(n==4) cout<<"2 1 3 4"<<endl;
        else if(n==6) cout<<"1 3 2 4 5 6"<<endl;

        else
        {
            int x=n/2;
            for(int i=x ; i>=1 ; i--)
            {
                cout<<i<<" ";
            }
            for(int i=x+1 ; i<=n ; i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
}
