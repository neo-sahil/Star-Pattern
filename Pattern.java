package starPatterns;

import java.util.Scanner;

public class Pattern {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a number:");
		
		int n=sc.nextInt();
		int a=1;
		
		
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<(n-i)*2;j++)
				System.out.print(" ");
			for(int j=1;j<=i;j++) {
				System.out.print(a+"   ");
				a++;
			}
			System.out.println();
		}


	}

}
