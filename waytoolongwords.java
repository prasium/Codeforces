/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class S
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner s = new Scanner(System.in);
	    int t=s.nextInt();
	    while(t!=0)
	    {
	        String word=s.next();
	           int n=word.length();
	     if(n>10)
	     {
	        String res="";
	        res= word.charAt(0)+Integer.toString(n-2)+word.charAt(n-1);
	        System.out.println(res);
	     }
	     else{
	         System.out.println(word);
	     }
	     t--;
	    }
	}
}
