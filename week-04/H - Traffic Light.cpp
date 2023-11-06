#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--) {
        ll n; cin>>n;
        char ch; cin>>ch;
        string s; cin>>s;
        s += s;
        bool f = false;
        int cnt = 0, res = 0;

        if(ch== 'g') {
            cout<<0<<endl;
            continue;
        }

        for(int i=0; i<s.size(); i++) {
            if(s[i] == 'g') {
                res = max(res, cnt);
                f = false;
            }

            if(s[i] == ch and f == false) {
                f = true;
                cnt = 0;
            }

            if(f) cnt++;
        }

        cout<<res<<endl;
    }
}
