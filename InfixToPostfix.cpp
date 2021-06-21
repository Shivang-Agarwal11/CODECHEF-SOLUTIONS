#include <iostream>
#include <string>
#include <stack>
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
using namespace std;

vector<vi> adj;
int precedence(char s) 
{ 
   if(s=='^')
        return 3;
    if(s=='/')
        return 2;
    if(s=='*')
        return 1;
    if(s=='+' || s=='-')
        return 0;
    if(s=='(' || s==')')
        return -1;
        return -1;
} 
int main() {
	// your code goes here
	ll t;
	   ll n;
	cin>>t;
	    stack<char>postfix;
	while(t--){
	    cin>>n;
	    string s;
	    cin>>s;
	    string res;
	    for(int i=0;i<n;i++){
           
	        if(s[i]>='A' && s[i]<='Z')
	        res+=s[i];
	        else if(s[i]=='('){
	            postfix.push(s[i]);
	        }
	        else if(s[i]==')'){
	            while(!postfix.empty() && postfix.top()!='('){
	                res+=postfix.top();
	                postfix.pop();
	            }
	            postfix.pop();
	        }
	        else{
                
	                while( (!postfix.empty()) && precedence(s[i])<=precedence(postfix.top()) ){
	                    res+=postfix.top();
	                    postfix.pop();
	                }
	                postfix.push(s[i]);
	            }
	    }
	    while(!postfix.empty()){
	        res+=postfix.top();
	        postfix.pop();
	    }
	    cout<<res<<endl;
	}
	return 0;
}
