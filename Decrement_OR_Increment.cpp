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
    if(n%4==0){
        cout<<n+1<<endl;
    }
    else{
        cout<<n-1<<endl;
    }
	
	return 0;
}
