#include <bits/stdc++.h>
using namespace std;
#define ll long long
string palin(string s){
    string pali=s;
    int n=s.length();
    for(int i=n/2; i<n; i++)
        pali[i]=pali[n-i-1];
    // cout<<s<<endl;
    if(pali>s)
        return pali;
    else{
        for(int i=(n-1)/2; i>=0; i--){
            if(s[i]!='9'){
                s[i]++;
                break;
            }
            else
                s[i]='0';
        }
        for(int i=n/2; i<n; i++)
            s[i]=s[n-i-1];
        if(s[0]=='0'){
            s+='1';
            s[0]='1';
        }
        return s;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        // palin(s);
        cout<<palin(s)<<endl;
    }
    return 0;
}