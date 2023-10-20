//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string tax) {
	    // code here

	    int k=pat.size();
	    int fp[26]={0};
	    for(auto x:pat)
	    {
	        fp[x-'a']++;
	    }

	    int i=0,j=0,cnt=0;
	    int tf[36]={0};
	    while(j<=tax.size())
	    {
	        tf[tax[j]-'a']++;
	        if(j>=k-1)
	        {
	           bool flage=true;
	           for(int i=0 ; i<26 ; i++)
	           {
	               if(fp[i]!=tf[i])
	               {
	                   flage=false;
	                   break;
	               }
	           }
	           if(flage) cnt++;
	           tf[tax[i]-'a']--;
	           i++;

	        }
	        j++;
	    }

	return cnt;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
