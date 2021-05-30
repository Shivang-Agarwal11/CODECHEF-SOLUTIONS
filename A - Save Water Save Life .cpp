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
	    ll H,x,y,C;
	    cin>>H>>x>>y>>C;
	   if(C/(x+y/2)>=H)
	   cout<<"YES"<<endl;
	   else
	   cout<<"NO"<<endl;
	}
	return 0;
}
