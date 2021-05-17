#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n,x,k;
	    cin>>n>>x>>k;
	    if(x%k==0 || ((n+1-x)%k)==0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
