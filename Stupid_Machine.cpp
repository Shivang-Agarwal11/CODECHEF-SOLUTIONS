#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	   ll cap=0;
	    ll op=0;
	    ll mini=LONG_MAX;
	    for(ll i=0;i<n;i++){
	        cin>>cap;
	        mini=min(cap,mini);
	        op=op+mini;
	    }
	    cout<<op<<endl;
	    
	}
	return 0;
}
