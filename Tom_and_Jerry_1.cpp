#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
using namespace std;

vector<vi> adj;
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll a,b,c,d,K;
	    cin>>a>>b>>c>>d>>K;ll ct=0;
	    ct=abs(a-c)+abs(b-d);
	    if(ct>K){
	        cout<<"NO"<<endl;
	    }
	    else if(ct==K){
	        cout<<"YES"<<endl;
	    }
	    else if((K-ct)%2==0){
	       cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}