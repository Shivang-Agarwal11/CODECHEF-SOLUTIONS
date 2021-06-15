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
	    ll a,b,c,d;
	    cin>>a>>b>>c>>d;
	   cout<<(c/a+d/b)<<endl;
	}
	return 0;
}
