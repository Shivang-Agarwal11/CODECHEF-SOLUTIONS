#include <iostream>
#define ll long int
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	ll T;
	cin>>T;
	while(T--){
	    ll n;
	    cin>>n;
	    ll c=1;
	    ll speed=0;
	    ll prev_speed=0;
	    for(ll i=0;i<n;i++){
	        cin>>speed;
	        if(i==0){
	            prev_speed=speed;
	            continue;
	        }
	            if(prev_speed>=speed)
	            c++;
	           
	            prev_speed=min(speed,prev_speed);
	        }
	    
	    if(n==1)
	    cout<<1<<endl;
	    else
	    cout<<c<<endl;
	}
	return 0;
}
