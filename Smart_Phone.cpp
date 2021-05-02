#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
    ll n;
    ll v;
    cin>>n;
    ll p=0;
	ll a[n];
	for(ll i=0;i<n;i++){
	    cin>>a[i];
	}
	sort(a,a+n);
	for(ll i=0;i<n;i++){
	    v=a[i]*(n-i);
	    if(p<v){
	        p=v;
	    }
	}
	cout<<p<<endl;
	return 0;
}
