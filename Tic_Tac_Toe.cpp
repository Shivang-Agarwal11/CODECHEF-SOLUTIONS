#include <iostream>
#define ll long long int
#include <bits/stdc++.h>
using namespace std;
int winner(int arr[3][3],int n){
    if(arr[0][0]==n && arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2])
    return 1;
    if(arr[0][2]==n && arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0])
    return 1;
    for(int i=0;i<3;i++){
        if(arr[i][0]==n && arr[i][0]==arr[i][1] && arr[i][1]==arr[i][2])
        return 1;
        if(arr[0][i]==n && arr[0][i]==arr[1][i] && arr[1][i]==arr[2][i])
        return 1;
    }
    return 0;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
       int tictactoe[3][3];
       int count_1=0;
       int count_0=0;
       int count=0;
       for(int i=0;i<3;i++){
       string s;
       cin>>s;
       for(int j=0;j<3;j++){
           if(s[j]=='X'){
           tictactoe[i][j]=1;
               count_1++;
           }
           else if(s[j]=='O'){
           tictactoe[i][j]=0;
               count_0++;
           }
           else
           tictactoe[i][j]=10;
       }
       }
      count=9-count_1-count_0;
       if(count_1<count_0){
       cout<<3<<endl;
           continue;
       }
       if(count_1>count_0+1){
           cout<<3<<endl;
           continue;
       }
      if(count_1==0 && count_0==0 && count==9){
          cout<<2<<endl;
          continue;
      }
       
       int win1=winner(tictactoe,1);
       int win0=winner(tictactoe,0);

        if(win1 && win0){
        cout<<3<<endl;
            continue;
        }
        if(win1 && count_1<=count_0){
        cout<<3<<endl;
            continue;
        }
        if(win0 && count_1!=count_0){
        cout<<3<<endl;
            continue;
        }
        if(win1  || win0){
        cout<<1<<endl;
            continue;
        }
        if(win0==0 && win1==0 && count==0){
            cout<<1<<endl;
            continue;
        }
        cout<<2<<endl;
    }
}