#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T>0){
        int N,K,D;
        cin>>N;
        cin>>K;
        cin>>D;
        int sum=0;
        int A[N]={0};
        for(int i=0;i<N;i++){
            cin>>A[i];
            sum+=A[i];
        }
        if (sum<K)
        cout<<0<<endl;
        else {
            int days=int(sum/K);
            if (days>D)
            cout<<D<<endl;
            else
            cout<<days<<endl;
        }
        T=T-1;
    }
	return 0;
}