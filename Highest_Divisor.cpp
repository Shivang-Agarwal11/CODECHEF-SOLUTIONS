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
	int n;
	cin>>n;
	for(int i=10;i>=0;i--){
	    if(n%i==0){
	        cout<<i<<endl;
	        break;
	    }
	}
	return 0;
}
