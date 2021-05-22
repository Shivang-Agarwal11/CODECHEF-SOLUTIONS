#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    ll a[n+1],i;
    for(i=1;i<n+1;i++)
    cin>>a[i];
    
    ll s1=0,s2=0;
    for(i=1;i<n+1;i+=2)
    s1+=a[i];
    for(i=2;i<n+1;i+=2)
    s2+=a[i];
    
    
    ll q;
    cin>>q;
    while(q--)
    {
        ll x;
        cin>>x;
        if(x==2)
        cout<<s1<<"\n";
        
        else if(x==3)
        cout<<s2<<"\n";
        
        else if(x==1)
        {
            ll l,r,add;
            cin>>l>>r>>add;
            ll cnt= r-l+1;
            
            if(l%2!=0 && r%2!=0)
            {
                s1+=(add)*(1+(cnt/2));
                s2+=(add)*(cnt/2);
            }
            
            else if(l%2==0 && r%2==0)
            {
                s1+=(add)*(cnt/2);
                s2+=(add)*(1+(cnt/2));
            }
            else
            {
                s1+=(add)*(cnt/2);
                s2+=(add)*(cnt/2);
            }
        }
    }
}