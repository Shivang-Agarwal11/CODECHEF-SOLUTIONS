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
    int player=1;
    int lead=0;
    cin>>n;
    int score_1=0;
    int score_2=0;
    for(int i=0;i<n;i++){
        int p1_score,p2_score;
        cin>>p1_score>>p2_score;
        score_1+=p1_score;
        score_2+=p2_score;
        if(score_1>=score_2){
            if(score_1-score_2>=lead){
            player=1;
            lead=score_1-score_2;
            }
        }
            else{
                if(score_2-score_1>=lead){
                    lead=score_2-score_1;
                    player=2;
                }
            }
        }
    
    cout<<player<<" "<<lead<<endl;
	return 0;
}
