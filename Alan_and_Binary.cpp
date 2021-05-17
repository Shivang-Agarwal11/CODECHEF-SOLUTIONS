#include <bits/stdc++.h>
using namespace std;
pair<int,int> fun(string a,string b,int n)
{
    pair<int,int>ans;
    // for even
    if(a[n-1]==b[n-1])
    ans.first=0;
    else
    {
        int i=n-2;
        while(i>=0)
        {
            if(a[i]!=a[i+1] || b[i]!=b[i+1])
            break;
            
            i--;
        }
      ans.first=n-1-i;
    }
    
    // for odd
    if((a[n-1]-'0')==(1-(b[n-1]-'0')))
    ans.second=0;
    else
    {
        int i=n-2;
        while(i>=0)
        {
            if(a[i]!=a[i+1] || b[i]!=b[i+1])
            break;
            
            i--;
        }
      ans.second=n-1-i;
    }
    return ans;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string a,b;
	    cin>>a>>b;
	    //cout<<a<<" "<<b<<endl;
       
       pair<int,int>p;
       p=fun(a,b,n);
        cout<<p.first<<" "<<p.second<<endl;
	}
	return 0;
}
