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
	    ll n;
	    cin>>n;
	    int even_dig=0;
	    int odd_dig=0;
	   for(int i=0;i<n;i++){
	       int m;
	   cin>>m;
	   if(m%2==0)
	   even_dig++;
	   else
	   odd_dig++;
	   }
	   if(odd_dig%2==0)
	   cout<<1<<endl;
	   else
	   cout<<2<<endl;
	}
	return 0;
}
