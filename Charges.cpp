#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
using namespace std;

vector<vi> adj;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll arr[n];
        ll charge=0;
        for(ll i=0;i<n-1;i++){
            if(s[i]=='1')
            arr[i]=1;
            else
            arr[i]=0;
            if(s[i]==s[i+1]){
                charge+=2;
            }
            else{
                charge+=1;
            }
        }
        if(s[n-1]=='1')
        arr[n-1]=1;
        else
        arr[n-1]=0;
        for(ll i=0;i<k;i++){
            int pos;
            cin>>pos;
            pos--;
            // cout<<arr[pos]<<"pos"<<endl;
            if(pos-1>=0){
            if(arr[pos]==arr[pos-1])
            charge-=1;
            else
            charge+=1;
            }
            if(pos!=n-1){
            if(arr[pos]==arr[pos+1])
            charge-=1;
            else
            charge+=1;
            }
            if(arr[pos]==1)
            arr[pos]=0;
            else
            arr[pos]=1;
            cout<<charge<<endl;
        }
    }
}