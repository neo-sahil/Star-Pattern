package patterns;

public class Pattern4 {

	public static void main(String[] args) {
		
		int n=4;
		char k = 'A';
		for(int i=1;i<=n;i++)
		{
			k='A';
			for(int j=1;j<=n+n-1;j++)
			{
				if(j<=n-i+1 || j>=n+i-1)
				{
					System.out.print(k+" ");
					if(j<n)
						k++;
					else
						k--;
				}
				else
				{
					System.out.print("  ");
					if(j==n)
						k--;
				}
			}
			System.out.println();
		}

	}

}
