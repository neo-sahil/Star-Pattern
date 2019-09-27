package starPatterns;

import java.util.Scanner;

public class PatternSeven {

	public static void main(String[] args) {
		
	
		Scanner sc = new Scanner(System.in);
		System.out.println("enter a number:");
		int n = sc.nextInt();
		
		System.out.println("*");
		int i=2;
		
		while(i<n)
		{
			System.out.print("* ");
			for(int j=1;j<=(i-2);j++)
				System.out.print("  ");
			System.out.print("*");
			System.out.println();
			i++;
		}
		
		if(n>1) {
		for( i=1;i<=n;i++)
			System.out.print("* ");
		}
		
	}

}
