#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	    long long k,n,m,i,j,var;
	    long long count=0;
	    double avg;
	    cin>>n>>m>>k;
	    long long int matrix[n+1][m+1];
	    for(i=0;i<n+1;i++){
	        for(j=0;j<m+1;j++){
                if(i==0 || j==0)
                matrix[i][j]=0;
                else{
                    cin>>matrix[i][j];
	            if(matrix[i][j]>=k)
	                count++;
                    matrix[i][j]=matrix[i][j]+matrix[i-1][j]+matrix[i][j-1]-matrix[i-1][j-1];
                }
	        }
	    }
	    var=n;
	     while(var>1){
         for(i=2;i<n+1;i++){
	        for(j=2;j<m+1;j++){
	            avg=0;
	            if(i-var>=0 && j-var>=0){
	                avg=matrix[i][j]-matrix[i-var][j]-matrix[i][j-var]+matrix[i-var][j-var];
	                avg=avg/(var*var);
	                if(avg >= k){
	                    count=count + m+1-j;
	                    break;
	                }
	            }
	           
	        }
	       
	    }
	    var--;
	     }
	     cout<<count<<endl;
	    t--;
	}
	return 0;
}