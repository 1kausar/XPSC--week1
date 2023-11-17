#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n; cin>>n;
    while(n--)
    {
        int sum=0;
        vector<int>v(4);
        for(int i=0 ; i<4 ; i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        bool flage=false;
        for(int i=0 ; i<4 ; i++)
        {
            int sum2=sum;
            sum2-=v[i];
            if(v[i]>sum2)
            {
               flage=true;
               break;
            }
        }
        if(flage) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }

}
