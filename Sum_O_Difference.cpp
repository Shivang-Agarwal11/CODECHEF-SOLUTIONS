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
    int n1,n2;
    cin>>n1>>n2;
    if(n1>n2)
    cout<<n1-n2;
    else
    cout<<n1+n2;
	return 0;
}
