#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,s,r,sum;
        cin>>n>>s>>r;
        int a[n+1];
        a[0]=abs(s-r);
        sum=s-abs(s-r);
        for(int i=1 ; i<n ; i++)
        {
           a[i]=1;
           sum-=1;
        }
        while(sum>0)
        {
            for(int i=1 ; i<n ; i++)
            {
                if(a[i]<6 &&a[0]>a[i] && sum>0)
                {
                    a[i]+=1;
                    sum-=1;
                }
                else
                {
                    if(a[0]<6 && sum>0)
                    {
                        a[0]+=1;
                        sum-=1;
                    }
                }
            }
        }
        sort(a,a+n);
        for(int i=0 ; i<n ; i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
