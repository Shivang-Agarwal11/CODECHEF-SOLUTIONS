/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class EQUAL
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc=new Scanner(System.in);
		// your code goes here
		
		int t=sc.nextInt();
		while(t>0){
		    t--;
		    int x=sc.nextInt();
		    int y=sc.nextInt();
		    if((x+y*2)%2==0 && (x!=0))
		    System.out.println("YES");
		    else if((x==0) && (y%2==0))
		    System.out.println("YES");
		    else
		    System.out.println("NO");
		}
		
	}
}
