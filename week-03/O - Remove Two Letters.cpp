#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        string a;
        for(int i=2 ; i<n ; i++)
        {
            a.push_back(s[i]);

        }

        int i=0,j=0,cnt=0;
        while(i<n-2)
        {
            if(s[i]!=a[j])
            {
                cnt++;
            }
            i++;
            j++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

