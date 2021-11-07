/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class LUKYNUM
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		 Scanner sc=new Scanner(System.in);
		 int t=sc.nextInt();
		 while(t>0){
		     t--;
		     int a,b,c;
		     a=sc.nextInt();
		     b=sc.nextInt();
		     c=sc.nextInt();
		     if(a==7 || b==7 || c==7){
		         System.out.println("YES");
		     }
		     else{
		         System.out.println("NO");
		     }
		 }
	}
}
