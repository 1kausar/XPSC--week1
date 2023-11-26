#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t; cin>>t;
   while(t--)
   {
       int a,b,c;
       cin>>a>>b>>c;

       if(a==1)
       {
        cout<<1<<endl;
       }

       else if(c==1)
       {
           if(a<b)
           {
               cout<<1<<endl;
           }
           else if(b<a)
           {
               cout<<2<<endl;
           }
           else if(a==b) cout<<3<<endl;
       }

       else if(b==1)
       {
           if(a>c)
           {
            int x=abs(b-c);
            int y=abs(a-x);

            if(y<c)
            {
                cout<<1<<endl;
            }
            else if(y>c)
            {
                cout<<2<<endl;
            }
            else
            {
                cout<<3<<endl;
            }
           }

           else if(a<=c)
           {
               cout<<1<<endl;
           }
       }
   }
}
