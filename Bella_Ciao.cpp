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
	    ll D,d,P,Q;
	    cin>>D>>d>>P>>Q;
	    ll money=0;
	    if(D%d>0){
	        ll remaining=D%d;
	        ll times=D/d;
	        ll last_days_amount=(times*Q+P)*remaining;
	        ll before=(times*(2*P+(times-1)*Q))/2;
	        money=before*d+last_days_amount;
	    }
	    else{
	        ll times=D/d;
	         ll before=(times*(2*P+(times-1)*Q))/2;
	         money=before*d;
	    }
	   cout<<money<<endl;
	}
	return 0;
}
