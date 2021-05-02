#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ll N;
	cin>>N;
	ll v;
	ll sum=0;
// 	ll A[N]={0};
	for(ll i=0;i<N;i++){
	    cin>>v;
	    sum+=v;
	}
	ll q;
	cin>>q;
	for(ll i=0;i<q;i++){
	    cin>>v;
	    sum+=sum;
	cout<<sum%(1000000007)<<endl;
	}
	return 0;
}
