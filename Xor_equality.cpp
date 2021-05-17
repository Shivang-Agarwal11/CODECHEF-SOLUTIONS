#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    if(n==1)
	    cout<<1<<endl;
	    else{
	        n--;
	        ll res=1;
	        ll a=2;
	        while(n>0){
	            if(n&1)
	            res=res*a%1000000007;
	            a=a*a%1000000007;
	            n=n>>1;
	        }
	        cout<<res<<endl;
	    }
	}
	
	return 0;
}