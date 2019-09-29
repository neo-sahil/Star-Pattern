package patterns;

public class Pattern5 {

	public static void main(String[] args) {
		
		int n=8;
		int a = (n+1)/2;
		System.out.println(a);
		int k=0;

		for(int i=1;i<=n;i++)
		{
			if(n%2==0) // this is just for the even number of rows(n).
			{
				if(i<=a)
					k++;
				if(i>a+1)
					k--;
			}
			else
			{
				if(i<=a)
					k++;
				else 
					k--;
			}
			for(int j=1;j<=n;j++)
			{
				if(j>=a-k+1 && j<=a+k-1)
				{
					System.out.print("* ");
				}
				else
				{
					System.out.print("  ");
				}
			}
			System.out.println();
		}
	}

}
