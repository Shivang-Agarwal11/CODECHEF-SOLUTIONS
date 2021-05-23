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
	   int i=1;
	   int c=0;
	   while(c<=n){
	       c+=i;
	       i++;
	   }
	   cout<<i-2<<endl;
	}
	return 0;
}
