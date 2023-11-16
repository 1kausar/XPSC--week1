#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        vector<int>v(n);
        bool flage=false;
        for(int i=0 ; i<n ; i++)
        cin>>v[i];

        int x,y;
        map<int,int>mp;
        for(int i=0 ; i<n-1 ; i++)
        {
            for(int j=i+1 ; j<n ; j++)
            {
                int x=abs(v[i]-v[j]);
                mp[x]++;
            }
        }
        for(auto x:mp)
        {
            if((x.second)>1)
            {
                flage =true;
                break;
            }
        }


        if(flage)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
    return 0;
}
