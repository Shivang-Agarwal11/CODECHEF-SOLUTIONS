#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int player=0;
    int maximum=0;
    int player1=0;
    int player2=0;
    int p1,p2;
    for(int i=0;i<N;i++){
        cin>>p1>>p2;
        player1=player1+p1;
        player2+=p2;
        
        if ((player1>player2) && (maximum<(player1-player2))){
            player=1;
            maximum=player1-player2;
        }
        if ((player1<player2) && (maximum<(player2-player1))){
            player=2;
            maximum=player2-player1;
        }
    }
    cout<<player<<' '<<maximum<<endl;


    return 0;
}