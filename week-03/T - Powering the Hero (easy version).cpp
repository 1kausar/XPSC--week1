
#include<bits.stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    int n,k;
    cin>>n>>k;
    int a[n+1];
    set<int>st;
    int mn=INT_MIN;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
        st.insert(a[i]);
        mn=max(mn,a[i]);
    }
    if(st.count(k)==0 &&)
    {
        cout<<"YES"<<endl;
    }
    else
    {


    }
}
