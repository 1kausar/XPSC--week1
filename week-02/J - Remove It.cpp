#include<bits/stdc++.h>
using namespace std;
int main()

{
   int n,k;
   cin>>n>>k;
   int a[n+1];
   vector<int>v;
   for(int i=0 ; i<n ; i++)
   {
    cin>>a[i];
   }

   for(int i=0 ; i<n ; i++)
   {

       if(a[i]!=k)
       {
           v.push_back(a[i]);
       }
   }
   for(auto x:v)
   {
    cout<<x<<" ";
   }
   cout<<endl;



}
