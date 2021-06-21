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
	    ll x1,x2,y1,y2,z1,z2;
	    cin>>x1>>x2>>y1>>y2>>z1>>z2;
	   if(x2>=x1 && y2>=y1 && z2<=z1)
	   cout<<"YES"<<endl;
	   else
	   cout<<"NO"<<endl;
	}
	return 0;
}
