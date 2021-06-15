#include <iostream>
#include <string>
// #define mod 1000000007
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
using namespace std;

vector<vi> adj;
int main() {
	// your code goes here
	ll t;
	ll mod=1000000007;
	cin>>t;
	while(t--){
	    ll n,m;
	    cin>>n>>m;
	    ll ans=2;
	   ll ans2=1;
	    while(n>0){
	        if(n%2){
	            ans2=(ans2*ans)%mod;
	        }
	        ans*=ans;
	        ans=ans%mod;
	        n=n>>1;
	    }
	    ans2=ans2-1;
	    ll res=1;
	   while(m>0){
	       if(m%2){
	           res=(res*ans2)%mod;
	       }
	       ans2*=ans2;
	       ans2=ans2%mod;
	       m=m>>1;
	   }
	   cout<<res%mod<<endl;
	}
	return 0;
}
