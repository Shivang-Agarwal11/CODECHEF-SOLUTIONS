/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc=new Scanner(System.in);
		int t;
		t=sc.nextInt();
		Codechef obj =new Codechef();
		while(t>0){
		    int n;
		    n=sc.nextInt();

		    obj.primality(n);
		    t--;
		}
	}
	public void primality(int n){
	    if(n==1){
	        System.out.println("no");
	        return;
	    }
	    int c=0;
	    for(int i=2;i*i<=n;i++){
	        if(n%i==0){
	            c=1;
	        }
	    }
	    if(c>0)
	    System.out.println("no");
	    else
	    System.out.println("yes");
	}
}
