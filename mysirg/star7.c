#include<stdio.h>
void main()
{
    int i,j,n=6;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n*2-1;j++)
        {
            if(j<=n-i+1 || j>=n+i-1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }   
        }
        printf("\n");
    }
}

// * * * * * * * * * 
// * * * *   * * * * 
// * * *       * * * 
// * *           * * 
// *               * 