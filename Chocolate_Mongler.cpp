#include <iostream>
#include <bits/stdc++.h>
#include <set>>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while (t--)
    {
        long long int n,x;
        cin>>n>>x;
        set<long long int> st;
        for(long long int i=0;i<n;i++){
            long long int type;
            cin>>type;
            st.insert(type);
        }
        long long int c=st.size();
        cout<<min(n-x,c)<<endl;
    }
    
}