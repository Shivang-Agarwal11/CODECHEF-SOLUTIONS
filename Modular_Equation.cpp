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
	    ll n,m;
	    cin>>n>>m;
	    ll count=0;
	    vector<ll>factors(n+1,1);
	    for(ll a=2;a<=n;a++){
	        int r=m%a;
	        count+=factors[r];
	        for(ll b=r;b<=n;b=b+a){
	        factors[b]++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}