#include<stdio.h>
void main()
{
    int i,j,n=7;
    int k=n-3;
    int l=n-k;
    for(i=1;i<=k;i++)
    {
        for(j=0;j<i-1;j++)
        {
            printf("  ");
        }
        for(j=1;j<=k-i;j++)
        {
            if(j==1)
                printf("%d ",j);
            else
            {
                continue;
            }
        }
        for(j=1;j<=n-2*i;j++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            if(j==1)
                printf("%d ",j);
            else
            {
                continue;
            }
        }
         for(j=0;j<i-1;j++)
        {
            printf("  ");
        }
        printf("\n");
    }
    for(i=1;i<=l;i++)
    {
        for(j=0;j<l-i;j++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            if(j==1)
                printf("%d ",j);
            else
            {
                continue;
            }
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            if(j==1)
                printf("%d ",j);
            else
            {
                continue;
            }
        }
        for(j=0;j<l-i;j++)
        {
            printf("  ");
        }
        printf("\n");
    }
}
// 1           1 
//   1       1   
//     1   1     
//       1       
//     1   1     
//   1       1   
// 1           1 