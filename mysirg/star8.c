#include<stdio.h>
void main()
{
    int i,j,n=4,k;
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n-i+1 && j<=n+i-1)
            {
                printf("%d ",k);
                j<n?k++:k--;
            }
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");
    }
}

//       1       
//     1 2 1     
//   1 2 3 2 1   
// 1 2 3 4 3 2 1 