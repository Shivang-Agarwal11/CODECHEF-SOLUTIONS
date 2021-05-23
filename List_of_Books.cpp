#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pb push_back
using namespace std;


int main() {
    int m;
    cin>>m;
    vi books_arrange;
    for(int i=0;i<m;i++){
        int l;
        cin>>l;
        books_arrange.pb(l);
    }
    int n;
    cin>>n;
    while(n--){
    int pos;
    cin>>pos;
    cout<<books_arrange[pos-1]<<endl;
    books_arrange.erase(books_arrange.begin()+pos-1);
    }

	return 0;
}
