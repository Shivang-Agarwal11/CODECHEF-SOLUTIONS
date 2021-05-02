#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){
	    long long int x,r,m;
	    cin>>x;
	    cin>>r;
	    cin>>m;
	    m=m*60;
	    r=r*60;
	   long long int req=0;
	    req+=min(x,r);
	    r=r-min(x,r);
	    req+=2*r;
	    if(req<=m)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    
	    
	}
	return 0;
}
