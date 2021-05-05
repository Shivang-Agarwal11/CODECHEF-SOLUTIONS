#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    string s;
	    cin>>n;
	    cin>>s;
	    int chance_a=n;
	    int chance_b=n;
	    int team_a=0;
	    int team_b=0;
	    for(int i=0;i<2*n;i++){
	        if(i%2==0){
	           if(s[i]=='1')
	           team_a+=1;
	           chance_a--;
	        }
	        else{
	        if(s[i]=='1')
	        team_b+=1;
	        chance_b--;
	        }
	       if(team_a>team_b+chance_b){
	           cout<<i+1<<endl;
	           break;
	       }
	       else if(team_b>team_a+chance_a){
	           cout<<i+1<<endl;
	           break;
	       }
	       else if(team_a==team_b && i==2*n-1){
	           cout<<i+1<<endl;
	           break;
	       }
	    }
	}
	return 0;
}
