/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class DanceMoves
{
	public static void main (String[] args) throws java.lang.Exception
	{
		
		Scanner sc=new Scanner(System.in);
		// your code goes here
		int t=sc.nextInt();
		while(t>0){
		    t--;
		    int x,y;
		    x=sc.nextInt();
		    y=sc.nextInt();
		    int distance=(int)Math.abs(x-y);
		    if(x<=y){
		    if(distance%2==0){
		        System.out.println(distance/2);
		    }
		    else{
		        System.out.println((distance+1)/2+1);
		    }
		    }
		    else
		    System.out.println(distance);
		}
		
	}
}
