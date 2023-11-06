#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int sa=a.size();
        int sb=b.size();

        if(a[sa-1]==b[sb-1])
        {
            map<char,int>amp;
            map<char,int>bmp;

            for(auto c:a) amp[c]++;
            for(auto c:b) bmp[c]++;

            if(amp['X']==0 && bmp['X']==0) cout<<"="<<endl;
            else{
            if(amp['X']>bmp['X'])cout<<">"<<endl;
            else if(amp['X']<bmp['X']) cout<<"<"<<endl;
            else cout<<"="<<endl;
            }
        }

        else if((a[sa-1]=='S' && b[sb-1]=='L') || (a[sa-1]=='L' && b[sb-1]=='S'))
        {
            if(a[sa-1]=='S') cout<<"<"<<endl;
            else if(a[sa-1]=='L') cout<<">"<<endl;
        }

        else if((a[sa-1]=='L' && b[sb-1]=='M')||(a[sa-1]=='M' && b[sb-1]=='L'))
        {
            if(a[sa-1]=='L') cout<<">"<<endl;
            else if(a[sa-1]=='M') cout<<"<"<<endl;
        }

        else if((a[sa-1]=='S' && b[sb-1]=='M') || (a[sa-1]=='M' && b[sb-1]=='S'))
        {
            if(a[sa-1]=='S') cout<<"<"<<endl;
            else if(a[sa-1]=='M') cout<<">"<<endl;
        }

    }
    return 0;
}
