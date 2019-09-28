package patterns;

public class Pattern3 {

	public static void main(String[] args) {
		
		int a1=0,a2=0,a3=0,n=5;
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<=i;j++)
			{
				if(i==0 && j==0)
				{
					a1=0;
					System.out.print(a1+" ");
				}
				else if(i==1 && j==0)
				{
					a2=1;
					System.out.print(a2+" ");
				}
				else
				{
					a3=a2+a1;
					System.out.print(a3+" ");
					a1=a2;
					a2=a3;
				}
			}
			System.out.println();
		}

	}

}
