
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;

        int cnt=0;
        for(int i=0 ; i<s.size() ; i++)
        {
            set<char>st;
            st.insert(s[i]);
            while(st.size()<=3)
            {
                i++;
                st.insert(s[i]);
            }
            if(st.size()<=4)
            {
                cnt++;
                i--;
            }
        }
        cout<<cnt<<endl;
    }
}
