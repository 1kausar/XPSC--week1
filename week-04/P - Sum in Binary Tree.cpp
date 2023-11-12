#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll t; cin>>t;
   while(t--)
   {
       ll sum=0;
       ll n; cin>>n;
       while(n>=1)
       {
         sum+=n;
         n/=2;

       }
       cout<<sum<<endl;
   }
}
