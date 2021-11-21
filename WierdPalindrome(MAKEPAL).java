/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class makepal
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc=new Scanner(System.in);
	    int t;
	    t=sc.nextInt();
	    while(t>0){
	        t--;
	        int n=sc.nextInt();
	        int c=0;
	        for(int i=0;i<n;i++){
	            int a=sc.nextInt();
	            if((a%2)>0)
	            c++;
	        }
	        System.out.println(c/2);
	    }
		// your code goes here
	}
}
