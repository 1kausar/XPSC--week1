#include<bits/stdc++.h>
#define sp " "
using namespace std;
int main()
{
   int n; cin>>n;
   vector<int>v(n);
   int a[n+1];
   for(int i=0 ; i<n ; i++)
   {
    cin>>a[i];
   }
   v[0]=a[0];
   for(int i=1 ; i<n ; i++)
   {
    v[i]=v[i-1]+a[i];
   }

   int t; cin>>t;
   while(t--)
   {
     int i,j;
     cin>>i>>j;
     cout<<abs(v[j]-v[i-1])<<endl;
   }


}
