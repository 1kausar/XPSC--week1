#include<bits/stdc++.h>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
	string s;
	cin >> s;
	if (s[0] != 'y' && s[0] != 'Y') no;
	else if (s[1] != 'e' && s[1] != 'E') no;
	else if (s[2] != 's' && s[2] != 'S') no;
	else yes;
    }
    return 0;
}
