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
	    int cost=0;
	    cin>>n>>s;
	    ll laddu=0;
	        if(s[0]=='I'){
	            cost=200;
	        }
	        else{
	            cost=400;
	        }
	    while(n--){
	            string con;
	            int c;
	            cin>>con;
	            if(con[8]=='W' || con[0]=='B'){
	                cin>>c;
	            }
	            if(con[8]=='W'){
	            laddu+=300+(20-c>0?(20-c):0);
	            }
	            else if(con[0]=='B'){
	            laddu+=c;
	            }
	            else if(con[0]=='T'){
	            laddu+=300;
	            }
	            else{
	            laddu+=50;
	            }
	    }
	            laddu=laddu/cost;
	            cout<<laddu<<endl;
	}
	return 0;
}
