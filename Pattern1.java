package patterns;

public class Pattern1 {

	public static void main(String[] args) {
		
		int n=5;
		Pattern1 p1 = new Pattern1();
		for(int i=1;i<=n;i++)
		{
			char []a=p1.fun(i-1);
			boolean k=true;
			int u = 0;
			for(int j=1;j<=n*n-1;j++)
			{
				
				if(j>=n-i+1 && j<=n+i-1 && k)
				{
					System.out.print(a[u]+" ");
					u++;
					k=false;
				}
				else
				{
					System.out.print("  ");
					k=true;
				}
			}
			System.out.println();
		}

	}
	
	char[] fun(int j)
	{
		int a=1;
		int i=0;
		while( i<j)
		{
			a=a*11;
			i++;
		}
		
		String s = Integer.toString(a);
		char ch[]=s.toCharArray();
		return ch;
	}

}
//output
//        1                                       
//      1   1                                     
//    1   2   1                                   
//  1   3   3   1                                 
//1   4   6   4   1                               
