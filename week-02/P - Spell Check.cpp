#include<bits/stdc++.h>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
int main()
{
    string a="Timur";
    sort(a.begin(), a.end());
    int t; cin>>t;
    while(t--)
    {

        int n; cin>>n;
        string b; cin>>b;
        sort(b.begin(),b.end());
        if(a==b) yes;
        else  no;

    }
    return 0;
}
