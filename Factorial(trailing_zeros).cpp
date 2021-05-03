#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void trailing_zeros(ll n){
    ll count=0;
    for(ll i=5;n/i>=1;i=i*5){
        count+=n/i;
    }
    cout<<count<<endl;
}
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    trailing_zeros(n);
	}
	return 0;
}
