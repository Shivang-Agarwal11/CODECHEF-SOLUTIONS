/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class TestMatch
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t>0){
		    t--;
		    int india=0;
		    int england=0;
		    int draw=0;
		    for(int i=0;i<5;i++){
		       int a=sc.nextInt();
		       if(a==0){
		           draw++;
		       }
		       else if(a==1){
		           india++;
		       }
		       else{
		           england++;
		       }
		       
		    }
		    if(draw==5){
		        System.out.println("DRAW");
		    }
		    else if(india>england){
		        System.out.println("INDIA");
		    }
		    else if(england>india){
		        System.out.println("ENGLAND");
		    }
		    else{
		        System.out.println("DRAW");
		    }
		}
	}
}
